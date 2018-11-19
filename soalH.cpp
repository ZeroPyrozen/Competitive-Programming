#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	long long int start,end,i,j,odd = 0,even = 0,sementara;
	char bufferInt[101];
	scanf("%lld %lld",&start,&end);
	for(i=start; i<=end; i++)
	{
		sementara = i;
		if(sementara%2==1)
			odd+=1;
		else
		{
			while(sementara%10==0)
			{
				sementara/=10;
				
			}
			if(sementara%2==0)
				even+=1;
			else
				odd+=1;	
		}
	}
	printf("%lld %lld\n",odd,even);
	return 0;
}


