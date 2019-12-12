#include <stdio.h>

int main() {
    int i,b,x[b],a,c,n,m;
    scanf ("%d",&n);
    for (c=0;c<n;c++){
        scanf("%d",&m);
        for (b=0;b<m;b++)
        scanf("%d", &x[b]);
        for (a=0;a<m-1;a++){
	        for(i=0;i<m-1-a;i++) {
                if( x[i] > x[i+1]) {
                   int temp = x[i];
				   x[i] = x[i+1];
                   x[i+1] = temp;
                }
            }
        i=0;
        } 
    a=0;
    for (i=0;i<m;i++)
	printf("%d", x[i]);
	i=0;
}
    return 0;
}
