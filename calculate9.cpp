#include<stdio.h>
int main()
{
	float a,b,c,d,e,f,g;
	
	printf("Enter amount of loan:");
	scanf("%f",&a);
	printf("Enter interest rate:");
	scanf("%f",&b);
	printf("Enter monthly payment:");
	scanf("%f",&c);
	
	d=(b/100)/12;
	e=d*a+a-c;
	f=e*d+e-c;
	g=f*d+f-c;
	
	printf("Balance remaining after first payment:$%.2f\n",e);
	printf("Balance remaining after second payment:$%.2f\n",f);
	printf("Balance remaining after third payment:$%.2f\n",g);
	
	return 0;
	
 } 
