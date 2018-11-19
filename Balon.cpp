#include<stdio.h>

int main()
{
	long int N,P,b,counterBalon=0;
	scanf("%ld %ld",&N,&P);
	for(int i=0; i<N; i++)
	{
		scanf("%ld",&b);
		if(P>b)
			counterBalon++;
	}
	printf("%ld\n",counterBalon);
	return 0;
}
