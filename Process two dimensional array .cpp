#include<stdio.h>
int main()
{
	int x[512][512],c,d,i,j,m,n,y,k;
	int temp;
	char a,b;
	scanf("%d %d",&m,&n);
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			scanf("%d",&x[i][j]);
		}
	} 
	scanf("%d",&y);
	for (i=0;i<y;i++){
		getchar();
		scanf("%c",&a);
		if (a=='S'){
			scanf("%c",&b);
			scanf("%d %d",&c,&d);
			if (b=='R'){
				for (j=0;j<n;j++){
					temp=x[c-1][j];
					x[c-1][j]=x[d-1][j];
					x[d-1][j]=temp;
				}
			}
			else {
				for (j=0;j<n;j++){
					temp=x[j][c-1];
					x[j][c-1]=x[j][d-1];
					x[j][d-1]=temp;
				}
			}
		}
		else {
			scanf("%c",&b);
			scanf("%d",&c);
			if (a=='D'&&b=='R'){
				if (c!=m){
				 for (j=c-1;j<m-1;j++){
					for (k=0;k<n+10;k++){
					x[j][k]=x[j+1][k];
				    }
				 }
				 for (k=0;k<n+10;k++)
					x[m][k]='\0';
			    }
				if (c==m){
					for (k=0;k<n+10;k++)
					x[c-1][k]='\0';
				}
			}
			if (a=='D'&&b=='C'){
				if (c!=n){
				 for (j=c-1;j<n-1;j++){
					for (k=0;k<m+10;k++){
					x[k][j]=x[k][j+1];
				    }
				 }
				 for (k=0;k<m+10;k++)
					x[k][n]='\0';
			    }
				if (c==n){
					for (k=0;k<m+10;k++)
					x[k][c-1]='\0';
				}
			}
			if (a=='I'&&b=='R'){
				for (j=m;j>=c;j--){
					for (k=0;k<n;k++){
					x[j][k]=x[j-1][k];
				    }
				}
				for (k=0;k<n;k++){
					x[c-1][k]=0;
				}
			}
			if (a=='I'&&b=='C'){
				for (j=n;j>=c;j--){
					for (k=0;k<m;k++){
					x[k][j]=x[k-1][j];
				    }
				}
				for (k=0;k<m;k++){
					x[k][c-1]=0;
				}
			}
		}
	}
	for (j=0;j<=m;j++){
		for (k=0;k<n-1;k++){
			printf("%d ",x[j][k]);//Êä³ö´æÔÚÈ±ÏÝ£» 
		}
		printf("\n");
		
	}
	return 0;
}
