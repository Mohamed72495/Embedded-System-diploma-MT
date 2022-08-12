/*
 ============================================================================
 Name        : Session_square.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int square(int x);

#include <stdio.h>
int main(void){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int s;
	printf("Enter The number\n");
	scanf("%d",&s);
	int y =square(s);
	printf("The square is :%d \n",y);

}


int square(int x){
	return x*x;
}
