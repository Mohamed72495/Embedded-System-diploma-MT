#include <stdio.h>
int cube(int i);

int main(void){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	printf("Enter Number : \n");
	int n;
	scanf("%d",&n);
	int y=cube(n);
	printf("The cube number : %d ",y);





}

int cube(int i){
	return i*i*i;
}
