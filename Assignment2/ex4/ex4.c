#include <stdio.h>
int calc(char c ,int a ,int b);


int main(void){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	printf("Enter Operation : \n");
	char n;
	scanf("%c",&n);
	printf("Enter first number : \n");
	int a;
	scanf("%d",&a);

	printf("Enter second number : \n");
	int b;
	scanf("%d",&b);
	int y=calc( n , a , b);
	printf("The Answe is %d ",y);
}

int calc(char c ,int a ,int b){

	switch(c){

	case '+':
		return a+b;
		break;
	case '-':
		return a-b;
		break;
	case '*':
		return a*b;
		break;
	case '/':
		return a/b;
		break;
	default:
		printf("Enter Valid Operation");
		return -1;

	}
}
