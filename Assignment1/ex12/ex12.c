#include <stdio.h>
int main(void){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	printf("enter +ve integer \n");
	int x;
	scanf("%d",&x);
	long total=1;
	for(int i=x;i>0;i--){
		total*=i;
	}
	printf("Result of factorial is %ld",total);


}

