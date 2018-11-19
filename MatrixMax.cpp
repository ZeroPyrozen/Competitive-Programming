#include<stdio.h>

int main()
{
	int arraySize,testCase,array[101][101];
	scanf("%d",&testCase);
	for(int i=0; i<testCase; i++)
	{
		scanf("%d",&arraySize);
		for(int j=0; j<arraySize; j++)
		{
			for(int k=0; k<arraySize; k++)
			{
				scanf("%d",&array[j][k]);
			}
			getchar();
		}
		printf("Case #%d:\nRow :",i+1);
		int max;
		for(int j=0; j<arraySize; j++)
		{
			max = array[j][0];
			for(int k=0; k<arraySize; k++)
			{
				if(max<array[j][k])
					max = array[j][k];
			}
			printf(" %d",max);
		}	
		printf("\nCol :");
		for(int j=0; j<arraySize; j++)
		{
			max = array[0][j];
			for(int k=0; k<arraySize; k++)
			{
				if(max<array[k][j])
					max = array[k][j];
			}
			printf(" %d",max);
		}
		printf("\n");
	}
	return 0;
}
