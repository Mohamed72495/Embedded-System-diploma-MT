#include <stdio.h>
int main(void){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	printf("please enter your grade \n ");
	float a;
	scanf("%f",&a);
	if ((a>100)||(a<0)){
		printf("Please Enter Valid pecentage");
	}
	else if(a>=85){
		printf("Excellent");
	}
	else if((a>=75)&&(a<85)){
			printf("Very Good");
		}
	else if((a>=65)&&(a<75)){
				printf(" Good");
			}
	else if((a>=50)&&(a<65)){
				printf("pass");
			}
	else{
			printf("Please Try Again")	;
			}

















}

