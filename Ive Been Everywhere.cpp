#include<stdio.h>
#include<string.h>

int main()
{
	char listData[110][21],data[21];
	int counter = 0,flag = 0,testCase,sentence;
	scanf("%d",&testCase);
	for(int x = 0; x<testCase; x++)
	{
		counter = 0;
		scanf("%d",&sentence);
		for(int i=0; i<sentence; i++)
		{
			getchar();
			scanf("%[^\n]",&data);
			flag = 0;
			for(int j=0; j<counter; j++)
			{
				if(i==0)
				{
					strcpy(listData[counter],data);
					counter++;
					flag = 1;
				}
				else if(strcmp(data,listData[j])==0)
				{
					flag = 1;
					break;
				}
			}
			if(flag==0)
			{
				strcpy(listData[counter],data);
				counter++;
			}	
		}
		printf("%d\n",counter);
	}
	
	return 0;
}
