#include<stdio.h>

int main()
{
	int numberOfSteps,steps[1010],numberOfStairs[1010];
	scanf("%d",&numberOfSteps);
	for(int i=0; i<numberOfSteps; i++)
	{
		scanf("%d",&steps[i]);
	}
	for(int i=0; i<numberOfSteps; i++)
	{
		if(steps[i+1]==1||i==numberOfSteps-1)
		{
			printf("%d ",steps[i]);
		}
	}
	printf("\n");
	return 0;
}
