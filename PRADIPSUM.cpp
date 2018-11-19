#include<stdio.h>

int main()
{
	int start,end,sum,i;
	while(scanf("%d %d",&start,&end)==2)
	{
		sum = 0;
		for(i=start; i<=end; i++)
		{
			sum+=i;
		}
		printf("%d\n",sum);
	}
	return 0;
}
