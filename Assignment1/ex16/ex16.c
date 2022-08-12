#include <stdio.h>
int main(void){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
//	printf("please enter the number \n");
//	int n=0;
//	scanf("%d",&x);
////	int n=0;
////	scanf("%d",&n);
//
//	  if(n == 0)
//	     return 0;
//	    int count = 0;
//	    while (n != 0)
//	    {
//	        n = n / 10;
//	        ++count;
//	    }
//
//	    int zz=1;
//	    //999 //3digits //divide over 100
//	    for(int i=1;i<=count;i++){
////	    int z=(n/(10*count)).
//	    z*=10*count;
//	    }
//	    int r=1;
//	    for(int i=1;i<count;i++){
//	    		r*=10;
//	    	}



	int n, reverse=0, rem;
	printf("Enter a number: ");
	  scanf("%d", &n);
	  while(n!=0)
	  {
	     rem=n%10;
	     reverse=reverse*10+rem;
	     n/=10;
	  }
	  printf("Reversed Number: %d",reverse);
	return 0;
}

