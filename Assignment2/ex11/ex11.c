#include <stdio.h>
int power(int x);



int main(void){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	printf("Enter The integer : \n");
	int n;
	scanf("%d",&n);
	int y=power(n);
	printf("\n The Result is : %d",y);

}
int power(int x){
	int y=1;
	int v=0;
	if(x==1){
		return 1;}
	else {
		for(int i=1;i<10;i++){
			y*=2;
			if(x==y){
				v=i;
				printf("The power is %d",v);
				return 1;
				break;}
			continue;
		}
		return 0;
	}
	//	else
	//		return 0;
}

//
//int power(int x){
//	if(x==1)
//		return 1;
//	else if
//	else
//		return 0;
//}
