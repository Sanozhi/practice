#include<stdio.h>
int main()
{
	float a,b;
	
	printf("amount:");
	scanf("%f",&a);
	
	b=(1+0.05)*a;
	printf("tax added:$%.2f\n",b);
	
	return 0;
 } 
