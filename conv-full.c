/* Source code from Suckless.com */
#ifndef UTIL_H
#define UTIL_H

#include <stdlib.h>

#define MAX(A, B)               ((A) > (B) ? (A) : (B))
#define MIN(A, B)               ((A) < (B) ? (A) : (B))
#define BETWEEN(X, A, B)        ((A) <= (X) && (X) <= (B))

void die(const char *fmt, ...);
void *ecalloc(size_t nmemb, size_t size);

#endif // UTIL_H
/* Autor Oz */
#ifndef WAV_H
#define WAV_H

typedef struct {
	char			id[4];		// RIFF
	unsigned int	size;		// File Size
	char			format[4];	// WAV
} Riff;

typedef struct {
	char			id[4];
	unsigned int	size;
	unsigned short	audiofmt;
	unsigned short	channels;
	unsigned int	samplerate;
	unsigned int	byterate;
	unsigned short	blockalign;
	unsigned short	bitspersample;
} Fmt;

typedef struct {
	char			id[4];
	unsigned int	size;
	char			*data;
} List;

typedef struct {
	char			id[4];
	unsigned int	size;
	char			*data;
} Data;

typedef struct {
	Riff	*riff;
	Fmt		*fmt;
	List	*list;
	Data	*data;
} Wav;

//SIGNATURES
Wav *initWav( char * file );
void writeWav( Wav *wav, char *file );
Wav *destroyWav( Wav * wav );
#endif //_WAV_H
/* Source code from Suckless.com */
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void *
ecalloc(size_t nmemb, size_t size)
{
	void *p;

	if (!(p = calloc(nmemb, size)))
		die("calloc:");
	return p;
}

void
die(const char *fmt, ...) {
	va_list ap;

	va_start(ap, fmt);
	vfprintf(stderr, fmt, ap);
	va_end(ap);

	if (fmt[0] && fmt[strlen(fmt)-1] == ':') {
		fputc(' ', stderr);
		perror(NULL);
	} else {
		fputc('\n', stderr);
	}

	exit(1);
}
/* Autor Oz */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>


Wav *initWav( char * file ){
	int fd	= open( file, O_RDONLY );
	if( fd == -1 ) die("Coud not open %s", file );
	Wav * wav = ecalloc( 1, sizeof( Wav  ) );
	wav->riff = ecalloc( 1, sizeof( Riff ) );
	wav->fmt  = ecalloc( 1, sizeof( Fmt  ) );
	wav->data = ecalloc( 1, sizeof( Data ) );
	read( fd, (char*) wav->riff, sizeof( Riff ) );
	read( fd, (char*) wav->fmt,  sizeof( Fmt  ) );
	char id[4];
	read( fd, (char*) &id, 4);
	if( !strncmp( (char*) &id, "LIST", 4) ){
		lseek( fd, -4, SEEK_CUR );
		wav->list = ecalloc( 1, sizeof( List ) );
		read( fd, (char*) wav->list->id, 4 );
		read( fd, (char*) & wav->list->size, 4 );
		wav->list->data = ecalloc( wav->list->size, sizeof(char) );
		read( fd, wav->list->data, wav->list->size );
	} else lseek( fd, -4, SEEK_CUR );
	read( fd, (char*) wav->data, 8);
	wav->data->data = malloc( wav->data->size );
	read( fd, (char*) wav->data->data, wav->data->size );
	read( fd, (char*) &id, 4);
	if( !strncmp( (char*) &id, "LIST", 4) ){
		lseek( fd, -4, SEEK_CUR );
		wav->list = ecalloc( 1, sizeof( List ) );
		read( fd, (char*) wav->list->id, 4 );
		read( fd, (char*) & wav->list->size, 4 );
		wav->list->data = ecalloc( wav->list->size, sizeof(char) );
		read( fd, wav->list->data, wav->list->size );
	}
	close( fd );
	return wav;
}

void writeWav( Wav *wav, char *file ){
	int fd = open( file, O_WRONLY | O_APPEND | O_CREAT, 0644 );
	if( fd == -1 ) die("Could not open %s", file );
	write( fd, (char*) wav->riff, sizeof(Riff) );
	write( fd, (char*) wav->fmt,  sizeof(Fmt)  );
	if( wav->list ){
		write( fd, (char*) wav->list->id, 4 );
		write( fd, (char*) & wav->list->size, 4 );
		write( fd, wav->list->data, wav->list->size );
	}
	write( fd, (char*) wav->data, 8 );
	write( fd, (char*) wav->data->data, wav->data->size );
	close( fd );
}

Wav *destroyWav( Wav * wav ){
	free( wav->riff );
	free( wav->fmt  );
	if( wav->list ){
		free( wav->list->data );
		free( wav->list );
	}
	free( wav->data->data );
	free( wav->data	);
	free( wav );
	return NULL;
}

	printf("%.4s\n"
			"\tSize of file: %u Bytes\n"
			"\tType: %.4s\n"
			"%.4s\n"
			"\tSize: %u Bytes\n"
			"\tAudio Format: %s\n"
			"\tNumber of Channels: %hu\n"
			"\tSample rate: %u Hz\n"
			"\tByte rate: %hu Bytes\n"
			"\tBlock aling: %hu Bytes\n"
			"\tBits per sample: %u Bits\n",
			wav->riff->id, wav->riff->size + 8,
			wav->riff->format,
			wav->fmt->id, wav->fmt->size,
			wav->fmt->audiofmt == 1 ? "PCM\0" : "Compression\0",
			wav->fmt->channels,
			wav->fmt->samplerate,
			wav->fmt->byterate,
			wav->fmt->blockalign,
			wav->fmt->bitspersample
	); 
	if(wav->list) {
		printf( "%.4s\n"
				"\tSize: %u Bytes\n"
				"\t%.4s\n",
				wav->list->id,
				wav->list->size,
				wav->list->data
		);
		int pos = 4;
		char *data = wav->list->data + 4;
		int size;
		while( pos < wav->list->size ){
			printf("\t%.4s ", data );
			pos+=4;
			data+=4;
			size = * ((int*) data);
			printf("Size: %u Bytes\n", size);
			pos+=4;
			data+=4;
			printf("\t\t%.*s\n", size, data);
			pos+=size;
			data+=size;
		}
	}
	printf("%.4s\n"
		   "\tSize: %u Bytes\n"
		   "\tData:",
		   wav->data->id,
		   wav->data->size
	);
	int i = 0;
	char c = 0;
	printf("\n\t\t%08X:  ", i);
	while( i < wav->data->size ){
		printf("%02hhX ", wav->data->data[i] );
		i++;
		c++;
		if( c == 15 ) printf("  ");
		if( c == 31 ) printf("  ");
		if( c == 47 ){
			printf("\n\t\t%08X:  ", i);
			c = 0;
		}
	}
	printf("\n");
}
/* Autor Oz */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv ){
	if( argc < 4 ) die("Faltan argumentos: a.wav b.wav out.wav");
	Wav* wavA = initWav( argv[1] );
	Wav* wavB = initWav( argv[2] );


	unsigned int K = (wavA->data->size >> 1) + (wavB->data->size >> 1) - 1; 
	unsigned int A = wavA->data->size >> 1;
	unsigned int B = wavB->data->size >> 1;
	short		*a = (short*) wavA->data->data;
	short		*b = (short*) wavB->data->data;
	short		*c = ecalloc( K , 2 );

	for( unsigned int k = 0; k < K; k++)
		for( unsigned int n = 0; n < A; n++)
			if( k >= n && (k-n) < B)
				if( a[n] || b[k-n] )
					c[k] += a[n] * b[k-n];

	free( wavA->data->data );
	wavA->riff->size += wavB->data->size - 2;
	wavA->data->size += wavB->data->size - 2;
	wavA->data->data = (char*) c;


	writeWav( wavA, argv[3] );
	destroyWav( wavA );
	destroyWav( wavB );
}
