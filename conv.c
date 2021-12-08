/* Autor Oz */
#include <stdio.h>
#include <stdlib.h>
#include "include/wav.h"
#include "include/util.h"

int main(int argc, char ** argv ){
	if( argc < 4 ) die("Faltan argumentos: a.wav b.wav out.wav");
	Wav* wavA = initWav( argv[1] );
	Wav* wavB = initWav( argv[2] );

	infoWav( wavA );
	infoWav( wavB );

	unsigned int K = (wavA->data->size >> 1) + (wavB->data->size >> 1) - 1; 
	unsigned int A = wavA->data->size >> 1;
	unsigned int B = wavB->data->size >> 1;
	short		*a = (short*) wavA->data->data;
	short		*b = (short*) wavB->data->data;
	short		*c = ecalloc( K , 2 );

	for( unsigned int k = 0; k < K; k++)
		for( unsigned int n = 0; n < A; n++)
			if( k >= n && (k-n) < B)
				if( a[n] || b[k-n] )
					c[k] += a[n] * b[k-n];

	free( wavA->data->data );
	wavA->riff->size += wavB->data->size - 2;
	wavA->data->size += wavB->data->size - 2;
	wavA->data->data = (char*) c;

	infoWav( wavA );

	writeWav( wavA, argv[3] );
	destroyWav( wavA );
	destroyWav( wavB );
}
