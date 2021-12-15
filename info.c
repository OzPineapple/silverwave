#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lib/wav.h"
#include "lib/util.h"

int main(int argc, char ** argv ){
	if( argc < 2 ) die("Faltan argumentos: in.wav");
	Wav* wav = initWav( argv[1] );
	infoWav( wav );
	wav = destroyWav( wav );
}
