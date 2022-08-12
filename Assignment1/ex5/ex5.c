#include <stdio.h>
int main(void){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	printf("Enter The character \n");
	char c;
	scanf("%c",&c);
	printf(" The AScii Value is: %d",c);


}

