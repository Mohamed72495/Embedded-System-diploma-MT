#include <stdio.h>
int main(void){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	printf(" Enter The degree in Celesious \n");
	float c= 0.0 ;
	scanf("%f",&c);
	float f=0.0 ;
	f=(c*(5/9))+32;
	printf(" The degree in fahrenheit : %f \n",f);
}

