#include<stdio.h>

int main()
{
	long long int testCase,s,a,b,c,i;
	scanf("%lld",&testCase);
	for(i=0; i<testCase; i++)
	{
		scanf("%lld %lld %lld %lld",&s,&a,&b,&c);
		printf("%lld\n",s/c+((s/c)/a*b));
	}
	return 0;
}
