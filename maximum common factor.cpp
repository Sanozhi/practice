#include<stdio.h>
int main()
{
	int m,n,temp;
	printf("Enter the first number:");
	scanf("%d",&m);
	printf("Enter the second munber:");
	scanf("%d",&n); 
	while(m%n!=0)
	{
	  temp=m%n;
	  m=n;
	  n=temp;
	}
	printf("%d\n",n);
	return 0; 
}

