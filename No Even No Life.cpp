#include<stdio.h>

int main()
{
	int testCase;
	long long int arraySize,liliScore,jojoScore,buffer;
	scanf("%d",&testCase);
	for(int i=0; i<testCase; i++)
	{
		scanf("%lld",&arraySize);
		liliScore = jojoScore = 0;
		for(int j=0; j<arraySize; j++)
		{
			scanf("%d",&buffer);
			if(buffer%2==0&&j%2==0)
				jojoScore++;
			else if(buffer%2==1&&j%2==1)
				liliScore++;
		}
		printf("Case #%d: ",i+1);
		if(jojoScore%2==0&&liliScore%2==1||jojoScore%2==1&&liliScore%2==0)
		{
			printf(":|\n");
		}
		else if(jojoScore%2==0&&liliScore%2==0)
		{
			printf(":)\n");
		}
		else if(jojoScore%2==1&&liliScore%2==1)
		{
			printf(":(\n");
		}
		getchar();
	}
	return 0;
}
