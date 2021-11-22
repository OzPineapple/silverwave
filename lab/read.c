#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#include "util.h"

int main( int argc, char ** argv ){
	if( argc < 2) die("Need wav file argument");
	int infd = open( argv[1], O_RDONLY );
	char buff[4];
	unsigned int size;
	unsigned short int num;
	read( infd, & buff, 4);
	read( infd, (char *) & size, 4);
	printf("%.4s size: %i\n", &buff, size + 8);
	read( infd, & buff, 4);
	printf("%.4s\n", & buff );
	read( infd, & buff, 4);
	read( infd, (char *) & size, 4);
	read( infd, (char *) & num, 2);
	printf("%.4s size: %i AudioFormat: %i ", & buff , size, num);
	read( infd, (char *) & num, 2);
	printf(" Channels: %i ", num);
	read( infd, (char *) & size, 4);
	printf(" Sample Rate: %i ", size);
	read( infd, (char *) & size, 4);
	printf(" Byte Rate: %i ", size);
	read( infd, (char *) & num, 2);
	printf(" Bytes per full sample: %i ", num);
	read( infd, (char *) & num, 2);
	printf(" Bits per sample: %i (%i Bytes)\n", num, num/8);
	read( infd, & buff, 4 );
	read( infd, (char *) & size, 4 );
	printf("%.4s size: %i ", &buff, size);
	read( infd, & buff, 4 );
	printf("%.4s ", &buff);
	read( infd, & buff, 4 );
	read( infd, (char *) & size, 4 );
	printf("%.4s size: %i ", &buff, size);
	char * text = malloc( size );
	read( infd, text, size );
	printf("%s", text);
	printf("\n");
	read( infd, & buff, 4 );
	read( infd, (char *) & size, 4);
	printf("%.4s size: %i", &buff, size);
	printf("\n");
	char numstr[5];
	numstr[4] = 0;
	for( int i = 0; i < size; i+=4){
		read( infd, (char *) & num, 2);
		printf("\r [%x => %x", num, num /2 );
		read( infd, (char *) & num, 2);
		printf(" | %x => %x]", num, num /2 );
//		sprintf(numstr, "%i", num);
//		printf(" %s", numstr);
//		execl("/usr/local/bin/beep", "beep", "-f", numstr, (char*) NULL);
		fflush(stdout);
	}	
	printf("\n");
}
