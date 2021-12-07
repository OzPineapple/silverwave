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

	short *a = (short*) wavA->data->data;
	short *b = (short*) wavB->data->data;
	short *c = ecalloc( wavA->data->size, 1);
	unsigned int	K = wavA->data->size >> 1;
	unsigned int    N = wavB->data->size >> 1;

	for( unsigned int k = 0; k < K; k++){
		for( unsigned int n = K; n > 0; n--){
			//printf("%d,%d " , k, n);
			printf("%d ",(k-n) < 0 ? 0 : (k-n) > (N-1) ? 0 : k-n );
			c[k] += ( (k-n) < 0 ? 0 : (k-n) > (N-1) ? 0 : a[k-n] ) * b[n];
		}
		printf("\n");
	}	

	free( wavA->data->data );
	wavA->data->data = (char*) c;
	writeWav( wavA, argv[3] );

	infoWav( wavA );

	destroyWav( wavA );
	destroyWav( wavB );
}
