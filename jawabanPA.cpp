#include<stdio.h>
#include<cmath>
int main()
{
	int testCase;
	long double a,b;
	double max = 0,sum = 0,min = 1 << 30;
	scanf("%d",&testCase);
	for(int i=0; i<testCase; i++)
	{
		scanf("%lf %lf",&a,&b);
		sum+=(double)(a/b);
		if(max<(double)(a/b))
			max = (double)(a/b);
		if(min>(double)(a/b))
			min = (double)(a/b);
	}
	printf("%.12lf %.12lf %.12lf\n",min,max,sum);
	return 0;
}