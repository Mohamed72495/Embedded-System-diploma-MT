//#include <stdio.h>
//int fib(int x);
//
//
//
//
//
//int main(void){
//
//	setvbuf(stdout, NULL, _IONBF, 0);
//	setvbuf(stderr, NULL, _IONBF, 0);
//	printf("Enter The integer : \n");
//	int n;
//	scanf("%d",&n);
//	fibo(n);
//
////	fib(n);
////	printf("\n");
//	//printf("%d",fib(n));
//
//}
//int fib(int x){
//	if((x==0)||(x==1)){
//		printf("%d",x);
//		return x;}
//	int y =0;
//	y=fib(x-1)+fib(x-2);
//	printf("%d",y);
//	return fib(x-1)+fib(x-2);
////	printf("%d",x);
////	//printf("%d", fib(x-1)+fib(x-2));
////	return;
//}


 #include<stdio.h>
void printFibonacci(int n);

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
    printf("Enter the number of elements: ");
    int n;
    scanf("%d",&n);
    printf("Fibonacci Series: ");
    printf("%d %d ",0,1);
    printFibonacci(n-2);//n-2 because 2 numbers are already printed
  return 0;
 }

void printFibonacci(int n){
    static int n1=0,n2=1,n3;
    if(n>0){
         n3 = n1 + n2;
         n1 = n2;
         n2 = n3;
         printf("%d ",n3);
         printFibonacci(n-1);
    }
}
