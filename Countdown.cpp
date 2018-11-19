#include<stdio.h>

int main()
{
	int testCase, input;
	//scanf("%d",&testCase);
	testCase = 10;
	for(int i=0; i<testCase; i++)
	{
		//scanf("%d",&input);
		input = 10000;
		printf("Case #%d:\n",i+1);
		for(int j=input;j>=1; j--)
		{
			if(j==input||j==60||j==5||j==30||j==10)
				printf("%d SECONDS TILL NEW YEAR!!\n",j);
			else
				printf("%d\n",j);		
		}
	}
	return 0;
}
