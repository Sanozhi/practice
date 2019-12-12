#include<stdio.h>
int x=0;
void cal(int n,int a,int k) {
	a=a+k;
	x++;
	if (x<n-1)
	cal(n,a,k); 
	else
	printf("%d\n",a);
}
int main(){
	int n,a,k;
	scanf("%d %d %d",&n,&a,&k);
	if (n>=2&&k<=100&&k>0&&a>0)
	cal(n,a,k);
	else
	printf("Wrong Number\n");
	return 0;
}
