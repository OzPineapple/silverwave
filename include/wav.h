#ifndef WAV_H
#define WAV_H

typedef struct {
	char	id[4];
	int		size;
	char	format[4];
} Riff;

typedef struct {
	char	id[4];
	int		size;
	short	audiofmt;
	short	channels;
	int		samplerate;
	int		byterate;
	short	blockalign;
	short	bitspersample;
} Fmt;

typedef struct {
	char	id[4];
	int		size;
	char	*data;
} List;

typedef struct {
	char	id[4];
	int		size;
	char	*data;
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
