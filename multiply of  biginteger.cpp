#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* multiply(char* num1, char* num2) {
    int* sum = (int*)calloc(1000, sizeof(int));
    int l1 = strlen(num1);
    int l2 = strlen(num2);
    int i = 0, j = 0, t = 0, index = 0;
    for(i = 0; i < l1; i++) {
        for(j = 0; j < l2; j++) {
            sum[i + j] += (num1[i] - '0') * (num2[j] - '0');
        }
    }
    for(i = l1 + l2 - 2; i >= 0; i--) {
        sum[i] += t;
        if(sum[i] >= 10) {
            t = sum[i] / 10;
            sum[i] = sum[i] % 10;
        }
        else
            t = 0;
    }
    int len = 2 + (t ? l1 + l2 - 1 : l1 + l2 - 2);
    char* result = (char*)malloc(len * sizeof(char));
    if(t)
        result[index++] = '0' + t;
    for(i = 0; i <= l1 + l2 - 2; i++)
        result[index++] = sum[i] + '0';
    result[index] = 0;
    free(sum);
    return result;
}


int main()
{
	int i,n;
	char a[512],b[512];
	char* c;
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%s %s",a,b);
		c=multiply(a,b);
		printf("%s\n",c);
	}
		return 0;
	
 } 
