#include<stdio.h>

int main()
{
	int test;
	float result = 0,a,b;
	scanf("%d",&test);
	for(int i=0; i<test; i++)
	{
		scanf("%f %f",&a,&b);
		result += a*b;
	}
	printf("%.3f\n",result);
	return 0;
}


