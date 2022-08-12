#include <stdio.h>
int main(void){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int n1;
	int n2;
	printf("enter first integer \n");
	scanf("%d",&n1);
	printf("enter second integer \n");
	scanf("%d",&n2);
	long r=0;
	r = ((n1 + n2) * 3)- 10 ;

	printf("The result of the equ ((n1 + n2) * 3)- 10 is  %d \n",r);
	return 0;
}



