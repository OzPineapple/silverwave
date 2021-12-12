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
	short *F = ecalloc( wav->data->size , 1 );

	float sample, angle, real, imagi, mag, phase, u=0.0, n=0.0;

	for( size_t i=0; i < N; u++,  i++){
		n		= 0.0;
		real	= 0.0;
		imagi	= 0.0;
		for( size_t j = 0; j < N ; n++, j++){
			sample = f[j] * 1.0 / 32767.0 ;
			angle  = -2.0 * M_PI / (N*1.0) * u * n;
			real  += sample * cos( angle );
			imagi += sample * sin( angle );
		}
		real  *= 2.0;
		imagi *= 2.0;
		mag	  = sqrt( real*real + imagi*imagi );
		if( mag < 0 ) mag *= -1.0;
		phase = atan( imagi / real );
		mag /= N * 1.0;
		phase /= 1.5;
		mag *= 32767.0;
		phase *= 32767.0;
		F[i]   = (int) mag;
		F[++i] = (int) phase;
	}
		
	//Change RIFF to 2 channels
	//wav->riff->size += wav->data->size;
	wav->fmt->channels = 2;
	wav->fmt->byterate =
		wav->fmt->samplerate	*
		wav->fmt->bitspersample *
		wav->fmt->channels		/ 8;
	wav->fmt->blockalign =
		wav->fmt->channels *
		wav->fmt->bitspersample / 8;
	//wav->data->size = wav->data->size << 1;
	free( wav->data->data );
	wav->data->data = (char*) F;

	infoWav( wav );
	writeWav( wav, argv[2] );
	destroyWav( wav );
}
