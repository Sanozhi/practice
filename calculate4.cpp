#include<stdio.h>
#define PAI 3.14
int main ()
{
	float r,v;
	printf("radius:");
	scanf("%f",&r);
	
	v=(4.0f/3.0f)*PAI*r*r*r;
	printf("volume:%.1f\n",v);
	
	return 0;
 } 
