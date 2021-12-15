/* Autor Oz */
#include <stdio.h>
#include <stdlib.h>
#include "lib/wav.h"
#include "lib/util.h"

int main(int argc, char ** argv ){
	if( argc < 4 ) die("Faltan argumentos: a.wav b.wav out.wav");
	Wav* wavA = initWav( argv[1] );
	Wav* wavB = initWav( argv[2] );

	infoWav( wavA );
	infoWav( wavB );

	unsigned int A = wavA->data->size >> 1;
	unsigned int B = wavB->data->size >> 1;
	unsigned int K = A + B - 1;

	short *as = (short*) wavA->data->data;
	short *bs = (short*) wavB->data->data;
	short *cs = ecalloc( K , 2 );
	float a,b,c;

	for( long int k = 0; k < K; k++, c=0){
		for( long int n = B-1; n >= 0; n-- ){
			if( k>=n && (k-n)<B ){
				a = as[ k-n ] * 1.0 / 32767.0;
				b = bs[  n  ] * 1.0 / 32767.0;
				c += a * b ;
			}
		}
		c *= 2.0; // IDK may frec theorem? maximun is 0.5 so multiply by 2
		c /= B * 1.0; // Divide by the maximun number of sums
		c *= 32767.0; // Ponder to get the integer value
		cs[k] = (int) c;
	}

	free( wavA->data->data );
	wavA->riff->size += ( B-1 ) << 1;
	wavA->data->size += ( B-1 ) << 1;
	wavA->data->data = (char*) cs;

	infoWav( wavA );

	writeWav( wavA, argv[3] );
	destroyWav( wavA );
	destroyWav( wavB );
}
