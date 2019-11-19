#include<stdio.h>
int main()
{
	int n,m,i,a,b,x[100],temp,y;
	scanf("%d",&n);
	for (y=0;y<n;y++){
	    scanf("%d",&m);
	    for (i=0;i<m;i++)
		scanf("%d",&x[i]);
		  
		
		if (m!=1){
		
	       a=x[0];
		   b=x[1];
		   if (a>b){
			temp=a;
			a=b;
			b=temp;
		   }
		for (i=2;i<m;i++){
		
			if (a==b && x[i]>b){
				b=x[i];
			}
			if (x[i]<b && x[i]<a){
				temp=a;
				a=x[i];
				b=temp;
			}
		    if (x[i]<b && x[i]>a){
			b=x[i];
		    }
	    }
		if (a==b)
		printf("ERROR\n");
		
		
		else
		printf("%d\n",b);
		
	}
	else
	
	printf("ERROR\n");
	
	
		
	
	
    }
    return 0;
 } 
