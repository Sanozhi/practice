#include<stdio.h>
int main (void)
{
	int height,width,length,volume,weight;
	
	printf("height:");
	scanf("%d",&height);
	printf("length:");
	scanf("%d",&length);
	printf("width:");
	scanf("%d",&width);
	volume=height*width*length;
	weight=(volume+165)/166;
	
	printf("Volume(cubic inches):%d\n",volume);
	printf("Dimension weight (pounds):%d\n",weight);
	
	return 0;
} 
 
