#include <stdio.h>
void formating(void);


int main(void){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	formating();

}

void formating(void){
	int max=0;
	int temp=0;
	for (int i=10;i<=15;i++){
		for(int j=i;j<=15;j++){

			temp=i^j;
			printf("%d Xor %d = %d ",i,j,i^j);
			printf("\n");


			if(max<temp)
				max=temp;
		}
	}
	printf("\n");
	printf("Max is %d",max);

}
