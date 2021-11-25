#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "include/wav.h"
#include "include/util.h"

int main(int argc, char ** argv ){
	if( argc < 3 ) die("Faltan argumentos: in.wav out.wav");
	Wav* wav = initWav( argv[1] );
	//infoWav( wav );
	for( size_t i=0; i<( wav->data->size & 0xEFFF ); i+=2)
		*(short*)( wav->data->data + i) =
		*(short*)( wav->data->data + i) >> 1;
	writeWav( wav, argv[2] );
	wav = destroyWav( wav );
}
