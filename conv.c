#include <stdio.h>
#include <stdlib.h>
#include "include/wav.h"
#include "include/util.h"

int main(int argc, char ** argv ){
	if( argc < 4 ) die("Faltan argumentos: a.wav b.wav out.wav");
	Wav* wavA = initWav( argv[1] );
	Wav* wavB = initWav( argv[2] );

	short *a = (short*) wavA->data->data;
	short *b = (short*) wavB->data->data;
	short *c = ecalloc( wavA->data->size, 1);
	int	   K = wavA->data->size >> 1;
	int    N = wavB->data->size >> 1;

	for( size_t k=0; k<K; k++)
		for( size_t n=0; n<N; n++)
			c[k] += a[n] * (k-n < 0 ? 0 : b[k-n]);

	free( wavA->data->data );
	wavA->data->data = (char*) c;
	writeWav( wavA, argv[3] );

	destroyWav( wavA );
	destroyWav( wavB );
}
