//ʵ�ִ����ж�2��float�������

//��ȷ��ʱС�����5λ

#include <stdio.h>
#include <math.h>


int main()

{
    float m,x,c;
    
    printf("Enter a number m:");
    scanf("%f",&m);
    printf("Enter another number x:");
    scanf("%f",&x);
    
    
    if (fabs(x-m)<1e-5)
    {
    	printf("result: m=x\n");
	}
	else
	{
		printf("result: m!=x\n");
	}
    
	return 0;

}
