#include <stdio.h>
int main() {
   int i,m,x,a,c,b,s,y;
   scanf("%d",&m);
   for (i=0;i<m;i++){
   	 scanf("%d%d%d",&a,&b,&c);
   	 x=a%4;
   	 if (x==0){
   	 	if (b==1)
   	 	y=c;
   	 	if (b==2)
   	 	y=31+c;
   	 	if (b==3)
   	 	y=31+29+c;
   	 	if (b==4)
   	 	y=31+29+31+c;
   	 	if (b==5)
   	 	y=31+29+31+30+c;
   	 	if (b==6)
   	 	y=31+29+31+30+31+c;
   	 	if (b==7)
   	 	y=31+29+31+30+31+30+c;
   	 	if (b==8)
   	 	y=31+29+31+30+31+30+31+c;
   	 	if (b==9)
   	 	y=31+29+31+30+31+30+31+31+c;
   	 	if (b==10)
   	 	y=31+29+31+30+31+30+31+31+30+c;
   	 	if (b==11)
   	 	y=31+29+31+30+31+30+31+31+30+31+c;
   	 	if (b==12)
   	 	y=31+29+31+30+31+30+31+31+30+31+30+c;
	 }
	 else{
	 	if (b==1)
   	 	y=c;
   	 	if (b==2)
   	 	y=31+c;
   	 	if (b==3)
   	 	y=31+28+c;
   	 	if (b==4)
   	 	y=31+28+31+c;
   	 	if (b==5)
   	 	y=31+28+31+30+c;
   	 	if (b==6)
   	 	y=31+28+31+30+31+c;
   	 	if (b==7)
   	 	y=31+28+31+30+31+30+c;
   	 	if (b==8)
   	 	y=31+28+31+30+31+30+31+c;
   	 	if (b==9)
   	 	y=31+28+31+30+31+30+31+31+c;
   	 	if (b==10)
   	 	y=31+28+31+30+31+30+31+31+30+c;
   	 	if (b==11)
   	 	y=31+28+31+30+31+30+31+31+30+31+c;
   	 	if (b==12)
   	 	y=31+28+31+30+31+30+31+31+30+31+30+c;
	 }
    printf("%d\n",y);
}
return 0;
}