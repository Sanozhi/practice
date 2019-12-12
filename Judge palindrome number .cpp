#include<stdio.h>
int main()
{
	int i,n,j=0,k,m;
	char x[1024],y[1024];
	scanf("%d",&n);
	for (i=0;i<n;i++){
	    scanf("%s",&x);
	    while (x[j]!='\0'){
	    	j++;
		}
		for (k=0;k<j;k++){
			y[j-1-k]=x[k];
		}
		for (m=0;m<j;m++){
			if(y[m]!=x[m]){
				printf("no\n");
				break;
			}
			else{
				continue;
			}
		}
		if (m>=j){
			printf("yes\n");
		}
	}
	return 0;
 } 
