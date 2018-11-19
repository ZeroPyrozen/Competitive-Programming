#include<stdio.h>

int main()
{
	long long int min,max,N,a,b,i,j;
	scanf("%lld",&N);
	min = 1000000001;
	max = 0;
	for(i=0; i<N; i++)
	{
		scanf("%lld %lld",&a,&b);
		if(b==0)
		{
			if(max<a)
				max = a;
		}
		else if(b==1)
		{
			if(min>a)
				min = a;
		}
	}
	printf("%lld %lld\n",max+1,min);
	return 0;
}
