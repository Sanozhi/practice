#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,a[1028],m=0,j;
	char x[1028],r[1028][1028];
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d%c",&a[i],&x[i]);
	}
	for (i=0;i<n;i++){
		if (a[i]>m){
			m=a[i];
		}
	}
	for (i=0;i<n;i++){
		if (x[i]==' '||x[i]=='\n'){
			for (j=0;j<m-abs(a[i]);j++)
			r[j][i]=' ';
			for (j=m-abs(a[i]);j<m;j++)
			r[j][i]='+';
		}
		else {
			for (j=0;j<m-abs(a[i]);j++)
			r[j][i]=' ';
			for (j=m-abs(a[i]);j<m;j++)
			r[j][i]=x[i];
		}
	}
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			if (a[j]>=0){
				printf("%c ",r[i][j]);
			}
			else {
				printf ("  ");
			}
		}
		printf("\n");
	}
	for (i=0;i<2*n-1;i++)
	printf("-");
	printf("\n");
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			if (a[j]>=0){
				printf("  ");
			}
			else {
				printf("%c ",r[m-i-1][j]);
			}
		}
		printf("\n");
	}
	
	
	return 0;
 } 
