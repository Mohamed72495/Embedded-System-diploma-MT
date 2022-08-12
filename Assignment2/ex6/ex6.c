#include <stdio.h>
void convertt(char x);


int main(void){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	printf("Enter character : \n");
	char n;
	scanf("%c",&n);
	convertt(n);
}
void convertt(char x){
	printf("%c to %c",x,x-32);
	return ;

}
