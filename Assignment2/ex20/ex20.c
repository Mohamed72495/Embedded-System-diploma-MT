#include <stdio.h>
#include <math.h>

int maxNo(unsigned short n);

int main(void){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	unsigned short n;
	printf("Enter The  integer : \n");
	scanf("%u",&n);


	int o=0;
	o=maxNo(n);
	printf("The result is  %u",o);
}
int maxNo(unsigned short n){
	unsigned short mask=0x8000;
	int c=0;
	int ma=0;
			for(int i=0;i<16;i++){
				if((n<<i)&mask){
					c++;
					if(ma<c){
						ma=c;
					}
				}
				else{
					c=0;

				}

			}
	return ma;
}
