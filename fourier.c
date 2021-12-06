#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "include/wav.h"
#include "include/util.h"

int main(int argc, char ** argv ){
	if( argc < 3 ) die("Faltan argumentos: in.wav.wav");
	Wav * wav = initWav( argv[1] );
	infoWav( wav );

	short *x = (short*) wav->data->data;
	int    K = wav->data->size >> 1;
	short *r = ecalloc( wav->data->size, 2 );

	puts("Progess:");
	for( size_t k=0; k<K; k++){
		for( size_t n=0; n<K; n++)
			r[k] += x[n] * cos(2*M_PI*n*k/K);
		printf("\r %d/%d shots: %hd -> %hu", k, K, x[k], r[k] );
	}
	printf("\nDone\n");

	free( wav->data->data );
	wav->data->data = (char*) r;
	writeWav( wav, argv[2] );
	destroyWav( wav );
}
