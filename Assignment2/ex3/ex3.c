#include <stdio.h>
char check(char x);

int main(void){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	printf("Enter Number : \n");
		char n;
		scanf("%c",&n);

		check(n);
}

char check(char x){
	if(x>0){
		printf("Number positive");
		return 1;
	}
	else if(x==0){
		printf("Number is 0");
		return 0;
	}
	else
		printf("Number is -ve");
	return -1;

}
