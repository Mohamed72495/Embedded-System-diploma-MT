#include <stdio.h>

void swap(int x,int y);


int main(void){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	printf("Enter The first integer : \n");
		int n;
		int nn;
		scanf("%d",&n);
		printf("Enter The second integer : \n");
		scanf("%d",&nn);
		swap(n,nn);

		printf(" first number is %d",nn);
		printf(" second number is %d",n);

}
void swap(int x,int y){
	int temp;
	temp=x;
	x=y;
	y=temp;

}
