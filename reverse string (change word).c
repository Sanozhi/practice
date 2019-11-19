#include<stdio.h>
int main()
{
	char a[256];
	int i=0,j,k,p,x=-1,y;
	while((a[i]=getchar())!='\n')
	{
		i++;
	}
	a[i]=' ';
	for(j=0;j<=i;j++)
	{
		if(!(('A'<=a[j]&&a[j]<='Z')||('a'<=a[j]&&a[j]<='z')))
		{
			y=j;
			for(p=y-1;p>x;p--)
			{
				printf("%c",a[p]);	
			}
			printf("%c",a[j]);
			x=y;
			
		}
	}
	return 0;
 } 
