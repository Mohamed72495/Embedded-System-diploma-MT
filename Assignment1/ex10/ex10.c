#include <stdio.h>
int main(void){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	printf("Welcome To Our Program\n");

	char op;
	printf("kindly chose your operation + or - or * or / \n");
	scanf("%c",&op);

	float x;
	printf("Enter first number \n");
	scanf("%f",&x);
	float y;
	printf("Enter second number \n");
	scanf("%f",&y);
	switch(op)
	{
		case '+' :
			printf("Result is %f",x+y);
			break;
		case '-' :
			printf("Result is %f",x-y);
			break;
		case '*' :
			printf("Result is %f",x*y);
			break;
		case '/' :
			printf("Result is %f",x/y);
			break;
	}


}

