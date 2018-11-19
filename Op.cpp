#include<stdio.h>

int main()
{
	long long int a,b,c;
	int t;
	scanf("%d",&t);
	for(int i=0; i<t; i++)
	{
		scanf("%lld %lld %lld",&a,&b,&c);
		printf("Kasus #%d: ",i+1);
		if(a+b==c)
		{
			printf("+\n");
			continue;
		}
		if(a-b==c)
		{
			printf("-\n");
			continue;
		}
		if(a*b==c)
		{
			printf("*\n");
			continue;
		}
		if(a/b==c)
		{
			printf("/\n");
			continue;
		}
		printf("TIDAK ADA SOLUSI\n");
	}
	return 0;
}
