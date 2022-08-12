#include <stdio.h>
int main(void){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	printf("Enter two numbers \n");
	int x;
	int y;

	scanf("%d",&x);
	scanf("%d",&y);
	if(x==y){printf("%d and %d are equal",x,y);}
	else if(x>y){printf("%d is bigger than %d and they are not equal",x,y);}
	else{printf("%d is bigger than %d and they are not equal",y,x);}


}

