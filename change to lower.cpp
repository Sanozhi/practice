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
{
	char s[2048];
	gets(s);
	ToLowerCase(s);
	puts(s);
	return 0;
}
