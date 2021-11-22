#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "wav.h"
#include "util.h"

int main(int argc, char ** argv ){
	if( argc < 3 ) die("Faltan argumentos: in.wav out.wav");
	Wav* wav = initWav( argv[1] );
	infoWav( wav );
	char b[] = { 1, -1, 2, 0 };
	int bs = 4;
	char *y = ecalloc( wav->data->size, 1 );
	for( size_t i=0; i<wav->data->size; i++)
		for( size_t j=0; j <bs; j++)
			if( (i-j) < 0 ) y[i] += 0;
			else y[i] += wav->data->data[i-j] * b[j];
	free( wav->data->data );
	wav->data->data = y;
	writeWav( wav, argv[2] );
	wav = destroyWav( wav );
}
