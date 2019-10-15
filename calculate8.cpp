#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("Enter an amount:");
	scanf("%d",&a);
	
	b=a/20;
	c=(a-20*b)/10;
	d=(a-20*b-c*10)/5;
	e=(a-20*b-c*10-d*5);
	
	printf("$20 bills:%d\n",b);
	printf("$10 bills:%d\n",c);
	printf("$5  bills:%d\n",d);
	printf("$1  bills:%d\n",e);
	
	return 0;
	
	
	
 } 
