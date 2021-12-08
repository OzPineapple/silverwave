#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "include/wav.h"
#include "include/util.h"

int main(int argc, char ** argv ){
	if( argc < 3 ) die("Faltan argumentos: in.wav.wav");
	Wav * wav = initWav( argv[1] );
	infoWav( wav );

	short *f = (short*) wav->data->data;
	int    N = wav->data->size >> 1;
	short *F = ecalloc( wav->data->size << 1 , 1 );

	for( size_t u=0; u<(N<<1); u++){
		for( size_t n=0; n<N; n++){
			double r = f[n] *  cos( 2*M_PI /N *u*n );
			double i = f[n] * -sin( 2*M_PI /N *u*n );
			F[u]   = (int) r;
			F[++u] = (int) i;
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
	wav->data->data = (char*) F;

	infoWav( wav );
	writeWav( wav, argv[2] );
	destroyWav( wav );
}
