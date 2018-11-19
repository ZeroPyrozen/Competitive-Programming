#include<stdio.h>

int main()
{
	int testCase,arraySize;
	long long int array[32][32],result[32][32],sum,temp[32][32];
	scanf("%d",&testCase);
	for(int i=0; i<testCase; i++)
	{
		scanf("%d",&arraySize);
		for(int j=0; j<arraySize; j++)
		{
			for(int k=0; k<arraySize; k++)
			{
				scanf("%lld",&array[j][k]);	
			}
			getchar();
		}
		for(int j=0; j<arraySize; j++)
		{
			for(int k=0; k<arraySize; k++)
			{
				result[j][k] = array[j][k];	
			}
		}
		for(int l=1; l<arraySize; l++)
		{
			for(int j=0; j<arraySize; j++)
			{
				for(int k=0; k<arraySize; k++)
				{
					temp[j][k] = result[j][k];	
				}
			}
			for(int j=0; j<arraySize; j++)
			{
				for(int m=0; m<arraySize; m++)
				{
					sum = 0;
					for(int k=0; k<arraySize; k++)
					{
						sum += ((temp[j][k]%1000000007)*(array[k][m]%1000000007))%1000000007;
						
					}	
					result[j][m] = sum%1000000007;
				}
			}
		}
		printf("Case #%d:\n",i+1);
		for(int j=0; j<arraySize; j++)
		{
			for(int k=0; k<arraySize; k++)
			{
				printf("%lld ",result[j][k]);	
			}
			printf("\n");
		}
		
		
	}
	return 0;
}
