#include<stdio.h>
#include<ctype.h>
int main()
{
	int counterSpace,testCase,len;
	char buffer[110];
	scanf("%d",&testCase);
	for(int i=0; i<testCase; i++)
	{
		scanf("%d",&len);
		getchar();
		for(int j=0; j<len; j++)
		{
			scanf("%c",&buffer[j]);
		}
		counterSpace = 0;
		printf("Case #%d: ",i+1);
		for(int j=0; j<len; j++)
		{
			if(counterSpace%2==0)
				printf("%c",buffer[j]);
			if(isspace(buffer[j]))
				counterSpace++;	
		}
		printf("\n");
	}
	return 0;
}
