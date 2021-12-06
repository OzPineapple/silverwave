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
	short *r = ecalloc( wav->data->size << 1 , 2 );

	for( size_t k=0; k<K; k++){
		for( size_t n=0; n<K; n++){
			r[k]	+= x[n] * cos(2*M_PI*n*k/K);
			r[++k]	+= x[n] * sin(2*M_PI*n*k/K);
		}
	}

	// Change RIFF to 2 channels
	wav->riff->size += wav->data->size;
	wav->fmt->channels = 2;
	wav->fmt->byterate =
		wav->fmt->samplerate	*
		wav->fmt->bitspersample *
		wav->fmt->channels		/ 8;
	wav->fmt->blockalign =
		wav->fmt->channels *
		wav->fmt->bitspersample / 8;
	wav->data->size = wav->data->size << 1;
	free( wav->data->data );
	wav->data->data = (char*) r;

	infoWav( wav );
	writeWav( wav, argv[2] );
	destroyWav( wav );
}
