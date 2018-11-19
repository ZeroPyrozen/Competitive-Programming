#include<stdio.h>

int main()
{
	int testCase,sizeArr,sizeQuestion,sum,arrayBuf[1001],start,end,temp;
	scanf("%d",&testCase);
	for(int i=0; i<testCase;i++)
	{
		scanf("%d %d",&sizeArr,&sizeQuestion);
		for(int j=0; j<sizeArr; j++)
		{
			scanf("%d",&arrayBuf[j]);
		}
		
		for(int k=0; k<sizeQuestion; k++)
		{
			sum = 0;
			//4 1
			//start = 4 + 1 = 5
			//end = 5 - 4 = 1
			//s
			//end = start - end = 5 - 1 = 4
			//start = start - end = 5 - 4 = 1
			scanf("%d %d",&start,&end);
			if(start>end)
			{
				temp = start;
				start = end;
				end = temp;
			}
			for(int l=start-1; l<end; l++)
			{
				sum+=arrayBuf[l];
			}
			printf("%d\n",sum);
		}
	}
	return 0;
}
