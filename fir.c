#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "include/wav.h"
#include "include/util.h"

int main(int argc, char ** argv ){
	long n=0;
	long N=0;
	char *fin;
	if( argc > 1)
		N=strol(argv[1], &fin, 10);
}
