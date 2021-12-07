#include <stdio.h>

int main(){
	for( char i = 0; i < 10; i++){
		for( char j = 9; j >= 0; j--){
			printf("%d ", (i-j)<0 ? 0 : (i-j)>4 ? 0 : i-j );
		}
		printf("\n");
	}
}
