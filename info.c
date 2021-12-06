#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "include/wav.h"
#include "include/util.h"

int main(int argc, char ** argv ){
	if( argc < 2 ) die("Faltan argumentos: in.wav");
	Wav* wav = initWav( argv[1] );
	infoWav( wav );
	wav = destroyWav( wav );
}
