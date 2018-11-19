#include<stdio.h>

int main()
{
	int listData[11] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
	int counter = 0,data,flag = 0;
	for(int i=0; i<10; i++)
	{
		scanf("%d",&data);
		flag = 0;
		for(int j=0; j<counter; j++)
		{
			if(i==0)
			{
				listData[counter] = data%42;
				counter++;
				flag = 1;
			}
			else if(listData[j]==data%42)
			{
				flag = 1;
				break;
			}
		}
		if(flag==0)
		{
			listData[counter] = data%42;
			counter++;
		}	
	}
	printf("%d\n",counter);
	return 0;
}
