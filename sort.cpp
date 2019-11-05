#include <stdio.h>

int main() {

  int i,b,x[b],a,c,n,m;
  scanf ("%d",&n);
  for (c=0;c<n;c++){
   scanf("%d",&m);
   for (b=0;b<m;b++)
   scanf("%d", &x[b]);
    
    for (a=m-1;a>i;a--){
	
	  for(i=0;i<a;i++) {

       if( x[i] > x[i+1]) {

  	    int temp = x[i];

  	    x[i] = x[i+1];

  	    x[i+1] = temp;

      }
    }
    i=0;
} 
a=m-1;

	
	
    for (i=0;i<m;i++)
	printf("%d", x[i]);
	i=0;
}
    
  

  return 0;

}
