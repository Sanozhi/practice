#include<stdio.h>
int main()
{
	int x,i,a;
	scanf("%d",&x);
	for (i=2;i<x;i++){
		a=x%i;
		if (a==0){
		printf("不是质数");
		break;
	    }
	}
	if (i==x)
	printf("是质数");
	return 0;
	
}
