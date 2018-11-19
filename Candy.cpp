#include<stdio.h>
#include<math.h>
int main()
{
	long long int n,m,count;
	scanf("%lld",&n);
	for(long long int i=0; i<n; i++)
	{
		count = 0;
		scanf("%lld",&m);
		for(long long int j=1; j<=sqrt(m); j++)
		{
			if(m%j==0)
			{
				printf("%d %d ",j,m/j);
				if(m/j==j)
					count++;
				else
					count+=2;
			}
		}
		printf("\n");
		printf("Case #%lld: %lld\n",i+1,count);
	}
	return 0;
}
