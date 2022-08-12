#include <stdio.h>
int main(void){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	printf("Please enter +ve integer");
	int x;
	int z;
	scanf("%d",&x);
	if(!(x>0)){
		printf("Please enter +ve integer");

	}
	float y;
	y=sqrt((double)x);
	z=y;
	if(z==y){
		printf("The number %d is a pefect square",x);
	}
	else{
		printf("%d Not pefect No",x);
	}



}

