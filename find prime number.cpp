#include<stdio.h>
int main()
{
	int x,i,a;
	scanf("%d",&x);
	for (i=2;i<x;i++){
		a=x%i;
		if (a==0){
		printf("��������");
		break;
	    }
	}
	if (i==x)
	printf("������");
	return 0;
	
}
