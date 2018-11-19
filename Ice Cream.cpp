#include<stdio.h>

int main()
{
	int voteBallot[3],testCase,voters;
	char vote;
	scanf("%d",&testCase);
	for(int i=0; i<testCase; i++)
	{
		for(int j=0; j<3; j++)
		{
			voteBallot[j] = 0;
		}
		scanf("%d",&voters);
		for(int j=0; j<voters; j++)
		{
			getchar();
			scanf("%c",&vote);
			switch(vote)
			{
				case 'c':
					voteBallot[0]++;
					break;
				case 's':
					voteBallot[1]++;
					break;
				case 'v':
					voteBallot[2]++;
					break;
			}
		}
		printf("Case #%d:\n",i+1);
		int max = voteBallot[0];
		for(int j=0; j<3; j++)
		{
			if(max<voteBallot[j])
				max = voteBallot[j];
		}
		if(max==voteBallot[0])
			printf("chocolate\n");
		if(max==voteBallot[1])
			printf("strawberry\n");
		if(max==voteBallot[2])
			printf("vanilla\n");
	}
	return 0;
}
