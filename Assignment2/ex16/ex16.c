#include <stdio.h>
int count (int n);


int main(void){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	printf("Enter The integer : \n");
	int n;
	scanf("%d",&n);
	int m=0;
	m=count(n);
	printf("The count of ones is : %d",m);
}

int count (int n){
	unsigned int mask;
	mask=0x80000000;
	int c=0;

	for(int i=0;i<32;i++){
		if((n<<i)&mask)
			c++;
		else
			continue;


	}
	return c;


}

