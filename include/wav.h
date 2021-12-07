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
void infoWav( Wav *wav );
#endif //_WAV_H
