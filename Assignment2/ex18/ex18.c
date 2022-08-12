#include <stdio.h>
#include <math.h>

int check (int n);


int main(void){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	printf("Enter The  integer : \n");
	int n;
	scanf("%d",&n);
	int y=0;
	y=check(n);
	printf("The  Result : %d \n",y);

}

int check (int n){
	double y=0;
	int x=0;
	for (double i=2;i<20;i++){
		for(double j=2 ;j<20;j++ ){
			y=pow(i,j);
			int z;
			z=(int)y;
			if (z==n){
				x=1;
			}
		}
	}
	if(x==1)
		return 1;
	else
		return 0;
}
