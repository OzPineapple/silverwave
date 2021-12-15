#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "lib/wav.h"
#include "lib/util.h"

int main(int argc, char ** argv ){
	if( argc < 3 ) die("Faltan argumentos: in.wav.wav");
	Wav * wav = initWav( argv[1] );
	infoWav( wav );

	short *f = (short*) wav->data->data;
	int    N = wav->data->size >> 1;
	short *F = ecalloc( wav->data->size << 1 , 1 );

	float sample, angle, real, imagi, u=0.0, n=0.0;

	for( size_t i=0; i < (N<<1); u++,  i++){
		n		= 0.0;
		real	= 0.0;
		imagi	= 0.0;
		for( size_t j = 0; j < N ; n++, j++){
			sample = f[j] * 1.0 / 32767.0 ;
			angle  = 2.0 * M_PI * u * n / (N*1.0);
			real  += sample *  cos( angle );
			imagi += sample * -sin( angle );
		}
		real   *= 2.0;
		imagi  *= 2.0;
		real   /= N * 1.0;
		imagi  /= N * 1.0;
		real   *= 32767.0;
		imagi  *= 32767.0;
		F[i]   = (int) real;
		F[++i] = (int) imagi;
	}
		
	//Change RIFF to 2 channels
	wav->riff->size += wav->data->size;
	wav->fmt->channels = 2;
	wav->fmt->byterate =
		wav->fmt->samplerate *
		wav->fmt->channels *
		(wav->fmt->bitspersample >> 3);
	wav->fmt->blockalign =
		wav->fmt->channels *
		(wav->fmt->bitspersample >> 3);
	wav->data->size = wav->data->size << 1;
	free( wav->data->data );
	wav->data->data = (char*) F;

	infoWav( wav );
	writeWav( wav, argv[2] );
	destroyWav( wav );
}
