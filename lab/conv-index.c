#include <stdio.h>

int main(){
	int a[] = { 0, 0, 0, 0, 0, 10, 10, 0, 0, 0, 0, 0 };
	int b[] = { 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 };
	//int b[] = { 0, 0, 10, 10,  0, 0 };
	int N = 12;
	int K = 12;
	int c[N+K-1];
	for( char k = 0; k < N+K-1; k++)
		c[k] = 0;
	for( char n = 0; n < N; n++)
		printf("\e[33m%d\e[0m\t", n );
	printf("\n");
	for( char k = 0; k < N+K-1; k++){
		for( char n = 0; n < N; n++){
			if( (k-n) >= 0 && (k-n) < K )
				printf("\e[32m%d\e[0m\t", k-n );
			else
				printf("\e[31m%d\e[0m\t", k-n );
		}
		printf("\n");
	}
	for( char n = 0; n < N; n++)
		printf("\e[33m%d\e[0m\t", a[n] );
	printf("\n");
	for( char k = 0; k < N+K-1; k++){
		for( char n = 0; n < N; n++){
			if( (k-n) >= 0 && (k-n) < K ){
				printf("\e[32m%d\e[0m\t", b[k-n] );
			}else
				printf("\e[31m-\e[0m\t" );
		}
		printf("\n");
	}
	for( char k = 0; k < N+K-1; k++)
		for( char n = 0; n < N; n++)
			if( (k-n) >= 0 && (k-n) < K )
				c[k] += a[n] * b[k-n];
	
	for( char n = 0; n < (N+K-1); n++)
		printf("\e[33m%d\e[0m\t", c[n] );
	printf("\n");
}
