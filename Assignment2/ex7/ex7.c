#include <stdio.h>
void readdd(int a,int b);


int main(void){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	printf("Enter The first integer : \n");
	int n;
	int nn;
	scanf("%d",&n);
	printf("Enter The second integer : \n");
	scanf("%d",&nn);
	readdd(n,nn);
	float x=(float)n/nn;
		int y =n/nn;
	printf(" x is float = %f: \n",x);
	printf(" y is int = %d: \n",y);


}
void readdd(int a,int b){
	float x=(float)a/b;
	int y =a/b;
	if(y==x){
		printf("the first is multiple of the second");
		return;}
	else{
		printf("the first is Not multiple of the second");
		return;}


}
