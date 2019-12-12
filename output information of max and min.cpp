#include<stdio.h>
#include<string.h>
int main(){
	int n,i,m;
	scanf("%d",&n);
	char a[128][128],b[128][128],c[128][128]; 
	char d[128][128];
	for (i=0;i<n;i++)
	scanf("%s %s %s",a[i],b[i],c[i]);
	for (i=0;i<n;i++){
		if (c[i][0]=='n'){
	    	strcpy(c[i],"...");
		}
		if (c[i][0]=='1'&&c[i][1]=='0'&&c[i][2]=='0'){
			strcpy(c[i],"999");
		}
    }
	for (m=0;m<n-1;m++){
		for(i=0;i<n-1-m;i++) {
			    if(strcmp(c[i],c[i+1])>0){
            	strcpy(d[i],c[i]);
            	strcpy(c[i],c[i+1]);
            	strcpy(c[i+1],d[i]);
            	strcpy(d[i],b[i]);
            	strcpy(b[i],b[i+1]);
            	strcpy(b[i+1],d[i]);
            	strcpy(d[i],a[i]);
            	strcpy(a[i],a[i+1]);
            	strcpy(a[i+1],d[i]);
            }
        }
    }
	for (i=n-1;i>=0;i--){
		if (c[i][0]!='.'){
			if (strcmp(c[i],c[i-1])==0){
				if (strcmp(a[i-1],a[i])<0){
					strcpy(a[n-1],a[i-1]);
					strcpy(b[n-1],b[i-1]);
				}
				else if (i==n-1){
					printf("%s %s\n",a[n-1],b[n-1]);
					break;
				}
			}
			else{
				strcpy(a[n-1],a[i]);
				strcpy(b[n-1],b[i]);
				printf("%s %s\n",a[n-1],b[n-1]);
				break;
			}
		}
	}
	for (i=0;i<n;i++){
		if (c[i][0]!='.'){
			if (strcmp(c[i],c[i+1])==0){
				if (strcmp(a[i+1],a[i])>0){
					strcpy(a[0],a[i+1]);
					strcpy(b[0],b[i+1]);
				}
				else if (i==0){
					printf("%s %s\n",a[0],b[0]);
					break;
				}
			}
			else{
				strcpy(a[0],a[i]);
				strcpy(b[0],b[i]);
				printf("%s %s\n",a[0],b[0]);
				break;
			}
		}
	}
	return 0;
}
