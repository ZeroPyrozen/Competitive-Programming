#include<stdio.h>
#include<math.h>
int isPrime(long int N)
{
	long int i;
	if(N%2==0&&N!=2)
		return 0;
	else if(N<=1)
		return 0;
	else
	{
		for(i=2; i<=sqrt((double)N); i++)
		{
			if(N%i==0)
				return 0;
		}
		return 1;
	}
}

int main()
{
	long int start,end,i,testCase,j;
	scanf("%ld",&testCase);
	for(i = 0; i<testCase; i++)
	{
		scanf("%ld %ld",&start,&end);
		for(j=start; j<=end; j++)
		{
			if(isPrime(j)==1)
				printf("%d\n",j);	
		}	
	}
	return 0;
}
