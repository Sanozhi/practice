#include<stdio.h>
int b[512];
void combine(int a[], int n, int m,int M,int x)
{ 
   int i, j;
   for (i = m; i <= n; i++)
  {
   b[m - 1] = i - 1;
   if (m > 1)
    combine(a, i - 1, m - 1,M,x);
   else
    {
    	if (a[b[0]]==a[x]){
    		
    	printf("--> ");
        for (j =0 ; j<=m+M-2; j++){
          
          printf("%d ", a[b[j]]);
        }
        printf("\n");
        }
    }
  }
}
int main()
{
	int i,n,m,j,k,y;
	int a[512];
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d",&m);
		for (j=0;j<m;j++)
		scanf("%d",&a[j]);
		for (y=0;y<m;y++){
	        for (k=m;k>0;k--)
		    combine(a, m, k, k, y);
        }
        printf("-->\n");
        
	}
	return 0;
}
