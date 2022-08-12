#include <stdio.h>
#define SIZE 3
int linear(int arr[],int size ,int elemnt);

int main(void){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int arr[SIZE];
	for(int i=0;i<SIZE;i++){
		printf("please enter element number %d ",i+1);
		int k;
		scanf("%d",&k);
		arr[i]=k;
	}
	printf("The array you entered : \n ");
	for(int i=0;i<SIZE;i++){
		printf("%d ",arr[i]);

	}
	int max=0;

	for(int i=0;i<SIZE;i++){
		if(arr[i]>max){
			max=arr[i];
		}

	}
	printf(" \n Max Number You Entered in Your Array is : %d ",max);
	printf("\n");
	int j=linear( arr,SIZE , 6);
	printf("index is : %d",j);



}

int linear(int arr[],int size ,int elemnt){
	//int j=-2;
	for(int i=0;i<size;i++){
		if(arr[i]==elemnt)
			return i;
		else
			continue;
	}
	return -1;

}
