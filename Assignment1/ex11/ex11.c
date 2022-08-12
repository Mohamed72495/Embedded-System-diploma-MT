#include <stdio.h>
int main(void){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	long total=0;

	for(int i=0;i<=100;i++){
		total+=i;
	}
	printf("Total is : %ld",total);

}

