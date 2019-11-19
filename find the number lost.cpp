#include <stdio.h>
int main() {
   int i,m,a,x[1000],c=0,b=1;
   scanf("%d",&m);
   for (i=0;i<m;i++){
   	while(1){
        scanf("%d",&x[c]);
   		
   		if (x[c]==0)
		   break; 
	    c++;
	   }
here:	while (b<c+2){
		 for (a=0;a<c;a++){
		
		  if (b==x[a]){
		  	a=0;
		  	b=b+1;
			goto here;
		}
		}
		printf("%d\n",b);
		b=c+2;
		
	}
 b=1;
 c=0;
    
  

  }
  return 0;


}
