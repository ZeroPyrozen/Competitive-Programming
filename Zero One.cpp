#include<stdio.h>

int main()
{
	int testCase,length,maxZero,maxOne,tempZero,tempOne;
	char buff[100001];
	scanf("%d",&testCase);
	for(int i=0; i<testCase; i++)
	{
		scanf("%d",&length);
		scanf("%s",&buff);
		maxZero = maxOne = tempZero = tempOne = 0;
		for(int j=0; j<length; j++)
		{
			if(buff[j]=='0')
			{
				tempZero++;
				if(maxZero<tempZero)
					maxZero = tempZero;
				if(buff[j+1]=='1')
					tempZero = 0;
			}
			else if(buff[j]=='1')
			{
				tempOne++;
				if(maxOne<tempOne)
					maxOne = tempOne;
				if(buff[j+1]=='0')
					tempOne = 0;
			}
		}
		printf("Case #%d: %d %d\n",i+1,maxOne>maxZero?1:0,maxOne>maxZero?maxOne:maxZero);
	}
	return 0;
}
