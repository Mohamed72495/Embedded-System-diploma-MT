#include <stdio.h>
#include <math.h>

int check(int k);

int main(void){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	printf("Enter The  integer : \n");
	int n;
	scanf("%d",&n);
	int o=0;

	o=check(n);
	printf("The result is  %d",o);
}

int check(int k){
	double y=0;
	int z=0;
	int t=0;
	for(double i=2;i<22;i++){
		 y=pow(i,3);
		 z=(int)y;
		 if(k==z){
			 t=0;
		 }
	}
	if(t==0)
		return 0;
	else
		return 1;
}
