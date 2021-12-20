#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "lib/wav.h"
#include "lib/util.h"

char flags;

void run( Wav *wav ){
	short *f = (short*) wav->data->data;
	int	   N = wav->data->size >> 1, L;
	short *F = ecalloc( wav->data->size << 1 , 1 );

	float sample, angle, real, imagi, n, u, origin = 0, mag, pha;

	if( flags & 0x01 ) origin = (N>>2) * -1.0;
	else origin = 0;
	if( flags & 0x02 ) L = N;
	else L = N << 1;
	u = origin;

	for( size_t i=0; i < L; u++,  i++){
		n		= origin;
		real	= 0.0;
		imagi	= 0.0;
		for( size_t j = 0; j < N ; n++, j++){
			sample = f[j] * 1.0 / 32767.0 ;
			angle  = -2.0 * M_PI * u * n / (N*1.0);
			real  += sample * cos( angle );
			imagi += sample * sin( angle );
		}
		real   /= N * 1.0;
		imagi  /= N * 1.0;
		real   *= 2.0;
		imagi  *= 2.0;
		if( flags & 0x04 ){
			mag = sqrt( real * real + imagi * imagi );
			pha = atan( imagi / real );
			mag *= 32767.0;
			pha *= 32767.0;
			F[i] = (int) mag;
			F[++i] = (int) imagi;
		} else {
			real   *= 32767.0;
			imagi  *= 32767.0;
			F[i]   = (int) real;
			F[++i] = (int) imagi;
		}
	}
		
	//Change RIFF to 2 channels
	if( ! ( flags & 0x02 ) ){
		wav->riff->size += wav->data->size;
		wav->data->size  = wav->data->size << 1;
	}
	wav->fmt->channels = 2;
	wav->fmt->byterate =
		wav->fmt->samplerate *
		wav->fmt->channels *
		(wav->fmt->bitspersample >> 3);
	wav->fmt->blockalign =
		wav->fmt->channels *
		(wav->fmt->bitspersample >> 3);

	free( wav->data->data );
	wav->data->data = (char*) F;
}

void usage(){
	printf( "fourier [options] signal-in.wav fourier-out.wav\n"
			"\t--help\tPrint this info\n"
			"\t--verbose\tPrint info of files durong proces\n"
			"\t--shift\tMove origin half to left\n"
			"\t--no-alias\tJust middle of samples so no alias at output\n"
			"\t--magnitude\tCalculate magnitude and phase insted of real and imaginary\n"
			);
	exit(0);
}
int main(int argc, char ** argv ){
	char *in = NULL, *out = NULL;
	for( int i=1; i < argc ; i++ )
			 if( !strcmp( argv[i], "--shift"	) )	flags = flags | 0x01;
		else if( !strcmp( argv[i], "--no-alias" ) )	flags = flags | 0x02;
		else if( !strcmp( argv[i], "--magnitude") )	flags = flags | 0x04;
		else if( !strcmp( argv[i], "--verbose"	) )	flags = flags | 0x08;
		else if( !strcmp( argv[i], "--help" ) ) usage();
		else if( ! in  ) in  = argv[i];
		else if( ! out ) out = argv[i];
		else usage();
	if( !in  ) die("Missing input file argument");
	if( !out ) die("Missing output file argument");
	Wav * wav = initWav( in );
	if( flags & 0x08 ) infoWav( wav );
	run( wav );
	if( flags & 0x08 ) infoWav( wav );
	writeWav( wav, out );
	destroyWav( wav );
}
