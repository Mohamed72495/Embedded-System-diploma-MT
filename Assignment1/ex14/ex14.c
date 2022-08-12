#include <stdio.h>
int main(void){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	//char x ='Z';
	for(char i='A';i<='Z';i++){
		printf("%c is %d \n",i,i);

	}
	//A65 Z90
	//for(char i ;i<)


}


