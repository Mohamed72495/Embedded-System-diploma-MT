#include <stdio.h>

void PrimeNo(int a,int b);


int main(void){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	printf("Enter The first integer : \n");
		int n;
		int nn;
		scanf("%d",&n);
		printf("Enter The second integer : \n");
		scanf("%d",&nn);
		PrimeNo(n,nn);
}

void PrimeNo(int a,int b){
	for(int i=a+1 ;i<b;i++){
		float x=(float)i/2;
		int y =i/2;
		if(y==x)
			printf("%d is Not prime \n" ,i);

		else
			printf("%d is prime \n" ,i);
	}
}
