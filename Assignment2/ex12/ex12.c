#include <stdio.h>
int floor(float x,float y);
int celling(float x,float y);




int main(void){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	printf("Enter The first integer : \n");
			float n;
			float nn;
			scanf("%f",&n);
			printf("Enter The second integer : \n");
			scanf("%f",&nn);
			int o =0;
			o = floor(n,nn);
			printf("The floor is %d ",o);
			int oo =0;
			oo = celling(n,nn);

			printf("The celling is %d ",oo);


}
int floor(float x,float y){
	float z=0;
	z=x+y;
	int m =0;
	m=(int)z;
	return m;
}
int celling(float x,float y){
	float z=0;
	z=x+y;
	int m =0;
	m=(int)z;
	return m+1;
}
