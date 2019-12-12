#include<stdio.h>
#include<string.h>
void ToLowerCase(char *s)
{
while(*s)
{
if(*s>='A'&&*s<='Z')*s='a'+(*s-'A');
++s;
}
}
int main()
{ int j=0,k,m=0,n=0,x=0,y=0;
  char a[1024],s[1024];
  while((a[j]=getchar())!=EOF){
  	j++;
  }
  char b[1024][1024];
  for (k=0;k<j;k++){
  	if ((a[k]>='A'&&a[k]<='Z')||(a[k]>='a'&&a[k]<='z')){
  		b[m][n]=a[k];
  		n++;
	  }
	if(a[k]<'A'||a[k]>'z'||(a[k]>'Z'&&a[k]<'a')){
		m++;
		n=0;
		}
	if((a[k]<'A'||a[k]>'z'||(a[k]>'Z'&&a[k]<'a'))&& (a[k+1]<'A'||a[k+1]>'z'||(a[k+1]>'Z'&&a[k+1]<'a'))){
		m--;
		n=0;	
		}
  }
  for (k=0;k<m+1;k++){
  	ToLowerCase(b[k]);
  }
  for(k=0;k<m+1;k++){
		for(j=0;j<=m;j++){
			if(strcmp(b[k],b[j])==0)
			x=x+1;
		}
	if(k==0){
		if(x>=y){
			y=x;
			strcpy(s,b[k]);
		}
	}
	else{
		if(x>=y){
			y=x;
			
			strcpy(s,b[k]);
			
		}
	}	
		x=0;
	}
	printf("%s ",s);
	printf("%d",y);
	return 0;
}
  
 
 
 
 
 
