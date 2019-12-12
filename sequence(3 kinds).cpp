#include<stdio.h>
int main()
{
	int i=0,x[512],j,k,b,a,c,d,e,f,g;
	while(1){
	scanf("%d %d %d %d %d",&x[0+i],&x[1+i],&x[2+i],&x[3+i],&x[4+i]);
	if (x[0+i]==x[1+i]&&x[0+i]==0){
		break;
	}
	else
	i=i+5;
    }
    for (j=0;j<i;j=j+5){
    	if ((x[1+j]-x[0+j])==(x[2+j]-x[1+j])){
    		printf("case one\n");
    		a=x[1+j]-x[0+j];
    		for (k=1;k<6;k++)
    		printf("%d ",x[4+j]+k*a);
    		printf("\n");
    	}
    	if ((x[1+j]/x[0+j])==(x[2+j]/x[1+j])){
    		printf("case two\n");
    		b=x[1+j]/x[0+j];
    		printf("%d ",x[4+j]*b);
    		printf("%d ",x[4+j]*b*b);
    		printf("%d ",x[4+j]*b*b*b);
    		printf("%d ",x[4+j]*b*b*b*b);
    		printf("%d ",x[4+j]*b*b*b*b*b);
    		printf("\n");
		} 
		if (x[1+j]+x[0+j]==x[2+j]&&x[2+j]+x[1+j]==x[3+j]){
			printf("case three\n");
			c=x[3+j]+x[4+j];
			d=c+x[4+j];
			e=c+d;
			f=d+e;
			g=e+f;
			printf("%d %d %d %d %d\n",c,d,e,f,g);
		}
	}
	return 0;
 } 
