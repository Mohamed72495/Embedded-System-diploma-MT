#include <stdio.h>
int main(void){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	printf("Enter The number \n");
	float x;
	scanf("%f",&x);
	int c=0;
	int n;
	int y;
	n=(int)x;
	y=(int)x;

	x=x-n;
	//x has only decimal points
	while(y!=0){
		y=(int)x/10;
		c++;
	}

	printf("The digits before point is : %d \n",c);

	int c_a=0;
	while(n!=0){
		x=x*10;
		n=(int)x;
		x=x-n;
		c_a++;

	}
	printf("The digits after point is : %d \n",c_a);
	printf("The Total digits is : %d",c_a+c);


}

