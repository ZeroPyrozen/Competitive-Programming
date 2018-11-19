#include<stdio.h>

int main()
{
	int testCase,N,arr[100001];
	scanf("%d",&testCase);
	for(int i=0; i<testCase; i++)
	{
		scanf("%d",&N);
		//Input
		for(int j=0; j<N; j++)
		{
			scanf("%d",&arr[j]);
		}
		//Sort
		int min,swap,count;
		for(int j=0; j<N; j++)
		{
			min = j;
			for(int k=j; k<N; k++)
			{
				if(arr[min]>arr[k])
					min = k;
			}
			swap = arr[min];
			arr[min] = arr[j];
			arr[j] = swap;
		}
		//Show
		printf("Case #%d:\n",i+1);
		min = arr[0];
		count = 1;
		for(int j=0; j<N; j++)
		{
			if(min!=arr[j+1]||j==N-1)
			{
				printf("%d %d\n",min,count);
				min = arr[j+1];
				count = 0;
			}
			count++;
		}
		//1 2 3
	}
	return 0;
}
