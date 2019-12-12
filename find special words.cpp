#include<stdio.h>
int main()
{
	int n,i,j=0,k=3;
	char x[128][128];
	char y[3]={'S','C','U'};
	scanf("%d",&n);
	for (i=0;i<n;i++)
	scanf("%s",x[i]);
	for (i=0;i<n;i++){
    while(x[i][j]!='\0'){
    	if (x[i][j]!='A'&&x[i][j]!='S'&&x[i][j]!='C'&&x[i][j]!='U'){
    	printf("NO\n");
    	break;
        }
    	else if(x[i][j]=='S'&&x[i][j+1]=='C'&&x[i][j+2]=='U'){
    		while(x[i][j+k]!='\0'){
    			if (x[i][j+k]!='A'){
			    printf("NO\n");
    	        goto here;
    	        }
    	        else
    	        k++;
            }
            if (x[i][j+k]=='\0'){
			printf("YES\n");
			break;
            }
            
        }
    	else if (x[i][j]=='A'){
		j++;
    	continue;
    	}
		else{
		printf("NO\n");
		break;
    	}
	}
here:	j=0;
    }
	return 0;
 } 
