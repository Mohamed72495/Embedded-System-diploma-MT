#include <stdio.h>
int main(void){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	 int i, j, N;
	    int count;

	    printf("Enter N: ");
	    scanf("%d", &N);

	    count = N * 2 - 1;

	    for(i=1; i<=count; i++)
	    {
	        for(j=1; j<=count; j++)
	        {
	            if(j==i || (j==count - i + 1))
	            {
	                printf("*");
	            }
	            else
	            {
	                printf(" ");
	            }
	        }

	        printf("\n");
	    }

	    return 0;


}

