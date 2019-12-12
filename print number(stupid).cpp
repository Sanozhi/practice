#include<stdio.h>
void j1(int x) {
     switch (x){
				case 0: printf("*****  ");
					    break;
				case 1: printf("    *  ");
					    break;
				case 2: printf("*****  ");
					    break;
				case 3: printf("*****  ");
					    break;
				case 4: printf("*   *  ");
					    break;
				case 5: printf("*****  ");
					    break;
				case 6: printf("*****  ");
					    break;
				case 7: printf("*****  ");
					    break;
				case 8: printf("*****  ");
					    break;
				case 9: printf("*****  ");
					    break;
			}
}
void j2(int x) {
     switch (x){
				case 0: printf("*   *  ");
					    break;
				case 1: printf("    *  ");
					    break;
				case 2: printf("    *  ");
					    break;
				case 3: printf("    *  ");
					    break;
				case 4: printf("*   *  ");
					    break;
				case 5: printf("*      ");
					    break;
				case 6: printf("*      ");
					    break;
				case 7: printf("    *  ");
					    break;
				case 8: printf("*   *  ");
					    break;
				case 9: printf("*   *  ");
					    break;
			}
}
void j4(int x) {
     switch (x){
				case 0: printf("*   *  ");
					    break;
				case 1: printf("    *  ");
					    break;
				case 2: printf("*****  ");
					    break;
				case 3: printf("*****  ");
					    break;
				case 4: printf("*****  ");
					    break;
				case 5: printf("*****  ");
					    break;
				case 6: printf("*****  ");
					    break;
				case 7: printf("    *  ");
					    break;
				case 8: printf("*****  ");
					    break;
				case 9: printf("*****  ");
					    break;
			}
}
void j5(int x) {
     switch (x){
				case 0: printf("*   *  ");
					    break;
				case 1: printf("    *  ");
					    break;
				case 2: printf("*      ");
					    break;
				case 3: printf("    *  ");
					    break;
				case 4: printf("    *  ");
					    break;
				case 5: printf("    *  ");
					    break;
				case 6: printf("*   *  ");
					    break;
				case 7: printf("    *  ");
					    break;
				case 8: printf("*   *  ");
					    break;
				case 9: printf("    *  ");
					    break;
			}
}
void j7(int x) {
     switch (x){
				case 0: printf("*****  ");
					    break;
				case 1: printf("    *  ");
					    break;
				case 2: printf("*****  ");
					    break;
				case 3: printf("*****  ");
					    break;
				case 4: printf("    *  ");
					    break;
				case 5: printf("*****  ");
					    break;
				case 6: printf("*****  ");
					    break;
				case 7: printf("    *  ");
					    break;
				case 8: printf("*****  ");
					    break;
				case 9: printf("*****  ");
					    break;
			}
}

int main()
{
	int i,n,x[1024],a,b,c,d;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	scanf("%d",&x[i]);
	for (i=0;i<n;i++){
		printf("%d:\n",x[i]);
		if (x[i]<10){
			j1(x[i]);
			printf("\n");
			j2(x[i]);
			printf("\n");
			j2(x[i]);
			printf("\n");
			j4(x[i]);
			printf("\n");
			j5(x[i]);
			printf("\n");
			j5(x[i]);
			printf("\n");
			j7(x[i]);
			printf("\n");
		}
		if (x[i]>=10&&x[i]<100){
			a=x[i]%10;
			b=x[i]/10;
			j1(b);
			j1(a);
			printf("\n");
			j2(b);
			j2(a);
			printf("\n");
			j2(b);
			j2(a);
			printf("\n");
			j4(b);
			j4(a);
			printf("\n");
			j5(b);
			j5(a);
			printf("\n");
			j5(b);
			j5(a);
			printf("\n");
			j7(b);
			j7(a);
			printf("\n");
			
		}
		if (x[i]>=100&&x[i]<1000){
			a=x[i]%10;
			b=((x[i]-a)/10)%10;
			c=((x[i]-a-10*b)/100)%10;
			j1(c);
			j1(b);
			j1(a);
			printf("\n");
			j2(c);
			j2(b);
			j2(a);
			printf("\n");
			j2(c);
			j2(b);
			j2(a);
			printf("\n");
			j4(c);
			j4(b);
			j4(a);
			printf("\n");
			j5(c);
			j5(b);
			j5(a);
			printf("\n");
			j5(c);
			j5(b);
			j5(a);
			printf("\n");
			j7(c);
			j7(b);
			j7(a);
			printf("\n");
		}
		if (x[i]>=1000){
			a=x[i]%10;
			b=((x[i]-a)/10)%10;
			c=((x[i]-a-10*b)/100)%10;
			d=((x[i]-a-10*b-c*100)/1000)%10;
			j1(d);
			j1(c);
			j1(b);
			j1(a);
			printf("\n");
			j2(d);
			j2(c);
			j2(b);
			j2(a);
			printf("\n");
			j2(d);
			j2(c);
			j2(b);
			j2(a);
			printf("\n");
			j4(d);
			j4(c);
			j4(b);
			j4(a);
			printf("\n");
			j5(d);
			j5(c);
			j5(b);
			j5(a);
			printf("\n");
			j5(d);
			j5(c);
			j5(b);
			j5(a);
			printf("\n");
			j7(d);
			j7(c);
			j7(b);
			j7(a);
			printf("\n");
		}
	}
	return 0;
 } 
