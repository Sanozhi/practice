#include <stdio.h>
int main()
{
    int n,m,j,i; 
    scanf("%d",&m);
    for(j=0;j<m;j++){
    scanf("%d",&n);
    for(i=2; i<=n; i++){
        while(n!=i){
            if(n%i==0){
                printf("%d*",i);
                n=n/i;
            }else
                break;
        }
    }
    printf("%d\n",n);}
    return 0;
}
