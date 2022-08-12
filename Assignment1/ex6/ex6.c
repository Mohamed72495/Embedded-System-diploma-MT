#include <stdio.h>
int main(void){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int x;int y;int z;
	printf("Please enter the integer numbers \n");
	scanf("%d %d %d",&x,&y,&z);
	//if((x==y)||(x==z)||(y==z)){
	//	printf("please enter different vaules");
	//	return 0;
//	}
	if((x>y) &&(x>z)){
		if(y>z){
			printf("%d > %d > %d",x,y,z);
		}
		else {
			printf("%d > %d > %d",x,z,y);
		}
	}
	else if((y>z)&&(y>x)){
		if(z>x){
			printf("%d > %d > %d",y,z,x);
		}
		else{
			printf("%d > %d > %d",y,x,z);
		}
	}
	else if((z>x)&&(z>y)){
		if(x>y){
		printf("%d > %d > %d",z,x,y);}
		else{
			printf("%d > %d > %d",z,y,x);}

		}
	else
		return 0;




	}





