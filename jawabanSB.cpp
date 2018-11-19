#include<stdio.h>
int main()
{
	int testCase,i;
	double a,b;
	double max = 0,sum = 0,min = 1 << 30;
	scanf("%d",&testCase);

	for(i=0; i<testCase; i++)
	{
		scanf("%lf %lf",&a,&b);
		sum+=(a/b);
		if(max<(a/b))
			max = (a/b);
		if(min>(a/b))
			min = (a/b);
	}

	printf("%.11lf %.11lf %.11lf\n",min,max,sum);

	return 0;
}