#include<stdio.h>

int main()
{
	int testCase,n,grade,count;
	scanf("%d",&testCase);
	for(int i=0; i<testCase;i++)
	{
		count = 0;
		scanf("%d",&n);
		for(int j=0; j<n; j++)
		{
			scanf("%d",&grade);
			if(grade<60&&grade>=0)
				count++;
		}
		printf("Case #%d: %d\n",i+1,count);
	}
	return 0;
}
