#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "include/wav.h"
#include "include/util.h"

int main(int argc, char ** argv ){
	if( argc < 3 ) die("Faltan argumentos: in.wav out.wav");
	Wav* wav = initWav( argv[1] );
	infoWav( wav );
	char b[] = { 1, 0, 0, 0 };
	int bs = 4;
	short *y = ecalloc( wav->data->size, 2 );
	for( size_t i=0; i<wav->data->size; i+=2)
		for( size_t j=0; j <bs; j++)
			if( (i-j) < 0 ) y[i] += 0;
			else y[i] += * (short*)(wav->data->data + i-j ) * b[j];
	free( wav->data->data );
	wav->data->data = (char*) y;
	writeWav( wav, argv[2] );
	wav = destroyWav( wav );
}
