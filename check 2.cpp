#include <stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j,k,x,y,z;
	
	printf("Enter the first digit:");
	scanf("%d",&a);
	printf("Enter first grounp of five digits:");
	scanf("%1d%1d%1d%1d%1d",&b,&c,&d,&e,&f);
	printf("Enter second group of five digits:");
	scanf("%1d%1d%1d%1d%1d",&g,&h,&i,&j,&k);
	
	x=a+c+e+g+i+k;
	y=b+d+f+h+j;
	x=(3*x+y)-1;
	x %=10;
	z=9-x;
	
	printf("Check digit:%d\n",z);
	
	return 0;
	
 } 
