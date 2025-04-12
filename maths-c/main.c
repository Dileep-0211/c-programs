#include<stdio.h>
#include "math_header.h"
int main()
{
	int x,y;
	
	printf("give a value for x\n");
	scanf("%d",&x);
	printf("give a value for y\n");
	scanf("%d",&y);
	printf("additon of %d + %d = %d\n",x,y,additon(x,y));
	printf("substraction of %d - %d =%d\n",x,y,substraction(x,y));
	printf("multiplication of %d * %d = %ld\n",x,y,multiplication(x,y));
	printf("divisible of %d / %d = %.2f\n",x,y,divisible(x,y));
	
	return 0;
}

