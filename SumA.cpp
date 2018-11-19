#include<stdio.h>


int array[1000001],answer[100001];
int main()
{
	int testCase,arraySize,question,questionStart,questionEnd,sum,temp;
	scanf("%d",&testCase);
	for(int i=0; i<testCase; i++)
	{
		scanf("%d %d",&arraySize,&question);
		for(int j=0; j<arraySize; j++)
		{
			scanf("%d",&array[j]);
		}
		for(int k=0; k<question;k++)
		{
			scanf("%d %d",&questionStart,&questionEnd);
			sum=0;
			if(questionStart>questionEnd)
			{
				temp = questionStart;
				questionStart = questionEnd;
				questionEnd = temp;
			}
			for(int j=questionStart-1; j<questionEnd;j++)
			{
				sum+=array[j];	
			}
			answer[k] = sum;
			
		}
		for(int j=0; j<question; j++)
		{
			printf("%d\n",answer[j]);
		}
	}
	return 0;
}
