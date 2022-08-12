#include <stdio.h>
int main(void){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float r=0.0;
	float cir=0.0;
	float area=0.0;

	printf("Enter The Radious \n");
	scanf("%f",&r);
	area=3.14*r*r;
	cir=3.14*2*r;
	printf("The cicle Circumferance : %f \n",cir);
	printf("The cicle Area : %f \n",area);





}


