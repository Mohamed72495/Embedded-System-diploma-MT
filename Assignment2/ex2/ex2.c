#include <stdio.h>
char alpha(char x);

int main(void){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	printf("Enter character : \n");
	char n;
	scanf("%c",&n);
	char y;
	y=alpha(n);






}
char alpha (char x){

	if ( ((x>64)&&(x<91))||((x>96)&&(x<123)) ){
		printf("The char is alaphabet");
		return 1;
	}
	else{
		printf("The char is Not alaphabet");

		return 0;
	}

}
