#include <stdio.h>

int countHoles (int x);
int digitsNo(int z);


int main(void){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	printf("Enter The integer : \n");
	int n;
	scanf("%d",&n);
	int y=digitsNo(n);
	printf("The holes is : %d",y);

}
int digitsNo(int z){
	int count=0;
	int rem=0;
	int rvr=0;
	int c =0;

	while(z!=0){
		rem=z%10;
		c+=countHoles(rem);
		z/=10;


		count++;
	}
	return c;
}

int countHoles (int x){
	switch(x){
	case (0):
					return 1;
	break;
	case (1):
						return 0;
	break;

	case (2):
						return 0;
	break;

	case (3):
						return 0;
	break;

	case (4):
						return 1;
	break;

	case (5):
						return 0;
	break;

	case (6):
						return 1;
	break;

	case (7):
						return 0;
	break;

	case (8):
						return 2;
	break;

	case (9):
						return 1;
	break;


	}

}
