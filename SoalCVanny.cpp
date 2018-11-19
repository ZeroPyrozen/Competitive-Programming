#include<stdio.h>

int main()
{
	int arr[11] = {0,0,0,0,0,0,0,0,0,0,0};
	int testCase,buff,x;
	//scanf("%d",&testCase);
	testCase = 100;
	for(int i=0; i<testCase; i++)
	{
		//scanf("%d",&buff);
		buff = 1000000;
		for(int j=0; j<11; j++)
		{
			arr[j] = 0;
		}
		
		for(int j=1; j<=buff; j++)
		{
			x = j;
			while(x!=0)
			{
				arr[x%10]++;
				x/=10;
			}
		}
		printf("Case #%d:",i+1);
		for(int j=0; j<10; j++)
		{
			printf(" %d",arr[j]);
		}
		printf("\n");
	}
	return 0;
}

