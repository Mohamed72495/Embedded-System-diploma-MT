#include <stdio.h>

float heat(float t);

int main(void){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	printf("Please Enter Your Number \n");

	float h;
	scanf("%f",&h);
	float r= heat(h);
	printf("The result is %f \n",r);


}

float heat(float t){
	if((t>=0)&&(t<30)){
		return 7.0;
	}
	else if((t>=30)&&(t<60)){
		return 5.0;
	}
	else if((t>=60)&&(t<90)){
		return 3.0;
	}
	else if((t>=90)&&(t<100)){
		return 1.0;
	}
	else
		return 0.0;

}
