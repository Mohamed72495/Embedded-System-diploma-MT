
#include <stdio.h>
int main(void){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	printf("Enter Your Name \n");
	char n[10];
	scanf("%s",&n);
	printf("Enter Your Grade \n");
	char g[6];
	scanf("%s",&g);
	printf("The Name: %s\n",n);
	printf("The Grade : %s \n",g);


}

