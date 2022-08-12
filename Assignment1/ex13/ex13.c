#include <stdio.h>
int main(void){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	printf("please enter the number: ");
	int x;
	scanf("%d",&x);
	float y=(float)x/2;
	int z=x/2;
	if(x<0){
		printf("please enter +ve number");
	}
	else if(x==1){
		printf("%d is not prime number ",x);

	}

	else if(y==z){
		printf("%d is not prime number ",x);
	}
	else{
		printf("%d is prime number ",x);
	}


}

