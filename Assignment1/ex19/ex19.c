#include <stdio.h>
int main(void){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	for(int i=0;i<5;i++){
			for(int j=5;j>i;j--){
				printf("*");
			}
			printf("\n");
		}




}

