#include <stdio.h>

int eveodd(int x);

int main(void){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	printf("Enter Number : \n");
	char n;
	scanf("%c",&n);

	eveodd(n);


}

int eveodd(int x){
	if(x%2==0){
		printf("Output = 0 (Even) ");
		return 0;
	}
	else
		printf("Output = 1 (Odd) ");
	return 1;

}
