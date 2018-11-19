#include<stdio.h>

int main()
{
	int inet,x,a,sum,isContinue = 0,max;
	scanf("%d",&inet);
	sum = 0;
	x = 0;
	max = 0;
	for(int i=1; i<=inet; i++)
	{
		scanf("%d",&a);
		sum+=a;
		//New Sequence
		if(sum>=i*100&&isContinue==0)
		{
			x = 0;
			isContinue=1;
			x++;
		}
		//During Sequence
		if(sum>=i*100&&isContinue==1)
		{
			x++;
		}
		//End Sequence
		if(isContinue==1 && sum<i*100)
		{
			isContinue=0;
			if(max<x)
				max = x;
		}
			
	}
	if(max==inet)
		printf("%d\n",max-1);
	else
		printf("%d\n",max);
	return 0;
}
