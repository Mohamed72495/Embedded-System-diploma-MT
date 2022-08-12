#include <stdio.h>
int main(void){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	printf("Enter The number \n");
	long x =0;
	scanf("%ld",&x);
	printf("Enter The power \n");
	int y =0;
	scanf("%d",&y);
	long result=1;
	for(int i=1;i<=y;i++){
		result*=x*1;
	}
	printf("The Result is :%ld ",result);






}

