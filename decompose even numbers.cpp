#include<stdio.h>
int pun(int a){
	int i;
	if (a%2==0){
		return 1;
	}
	else {
		for (i=2;i<a;i++){
			if (a%i==0)
			break;
		}
		if (i>=a){
			return 0;
		}
		else 
		return 1;
	}
}
int main()
{
	int n,a,j;
	scanf("%d",&n);
	if (n<=6||n%2!=0){
		printf("ERROR\n");
	} 
	else {
		for (j=2;j<=n/2;j++){
			if (pun(j)==0){
				a=n-j;
				if (pun(a)==0)
				printf("%d %d\n",j,a);
			}
	    }
	}
	return 0;	
}
	
	
	
	

