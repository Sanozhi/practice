#include <stdio.h>
int main() {
    int n, i=0,x[1000],a,b,c=0;
    scanf("%d", &n);  
    for (b = 0; b < n; b++) {
        
        while (1){
        	scanf("%d",&x[c]);
        	c++;
        
        	if (getchar()=='\n'){
        		break;
			}
		}
		for (a=c-1;a>i;a--){
	
	  for(i=0;i<a;i++) {

       if( x[i] > x[i+1]) {

  	    int temp = x[i];

  	    x[i] = x[i+1];

  	    x[i+1] = temp;

      }
    }
    i=0;
} 
a=c-1;

	for (i=0;i<c;i++){
    	if (x[i]%2!=0){
		printf("%d ", x[i]);}
	}
	for (i=0;i<c;i++){
    	if (x[i]%2==0){
		printf("%d ", x[i]);}
	}
	i=0;
	c=0;
	printf("\n"); 
}
		
        
        
    return 0;
    }
	

