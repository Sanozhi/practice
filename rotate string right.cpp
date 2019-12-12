#include<stdio.h>
#include<string.h>
int main()
{
	int m,i,x,j,a=0;
	char s[512],y;
	scanf("%d",&m);
	getchar();
	gets(s);
	x=strlen(s);
	for (i=x-m;i<x;i++){
		printf("%c",s[i]);
	}
	for (i=x-m;i<x;i++){
		s[i]='\0';
	}
	printf("%s",s);
	return 0;
}
