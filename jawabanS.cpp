#include<stdio.h>
#include<cmath>
int main()
{
	int testCase;
	long double a,b;
	long double max = 0,sum = 0,min = 1 << 30;
	scanf("%d",&testCase);
	for(int i=0; i<testCase; i++)
	{
		scanf("%Lf %Lf",&a,&b);
		sum+=(a/b);
		if(max<(a/b))
			max = (a/b);
		if(min>(a/b))
			min = (a/b);
	}
	printf("%.11Lf %.11Lf %.11Lf\n",min,max,sum);
	return 0;
}