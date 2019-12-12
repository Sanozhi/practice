#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,k=1,m,j=1;
	int r[128];
	char a[128][128],b[128][128],c[128][128]; 
	char d[128][128];  
	char s[128];
	scanf("%d %s",&n,s);
	for (i=0;i<n;i++)
	scanf("%s %s %s",a[i],b[i],c[i]);
	for (i=0;i<n;i++){
	    if (c[i][0]=='n'){
	    	strcpy(c[i],"...");
		}
		if (c[i][0]=='1'&&c[i][1]=='0'&&c[i][2]=='0'){
			strcpy(c[i],";;;");
		}
    }
	for (m=0;m<n-1;m++){
		for(i=0;i<n-1-m;i++) {
			    if(strcmp(c[i],c[i+1])>0) {
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
    for (i=0;i<n;i++){
    	if (c[i][0]=='.'){
	    	strcpy(c[i],"n/a");
		}
		if (c[i][0]==';'){
			strcpy(c[i],"100");
		}
	}
	r[n-1]=1;
    for (i=n-2;i>=0;i--){
    	if (strcmp(c[i],c[i+1])==0){
    	r[i]=k;
    	j++; 
        }
    	else{
    	r[i]=j+1;
    	k=j+1;
    	j++;
        }
	}
	for (i=0;i<n;i++){
		if (s[0]<48||s[0]>57){
			if (strcmp(s,a[i])==0){
				if (c[i][0]!='n')
				printf("%s %s %s %d\n",a[i],b[i],c[i],r[i]);
				else
				printf("%s %s %s %s\n",a[i],b[i],c[i],c[i]);
			}
		}
		else {
			if (s[0]==b[i][14]&&s[1]==b[i][15]&&s[2]==b[i][16]&&s[3]==b[i][17]){
			    if (c[i][0]!='n')
				printf("%s %s %s %d\n",a[i],b[i],c[i],r[i]);
				else
				printf("%s %s %s %s\n",a[i],b[i],c[i],c[i]);
		    }
		}
	}
	return 0;
}
