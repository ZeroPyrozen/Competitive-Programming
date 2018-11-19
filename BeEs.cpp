#include<stdio.h>

int main()
{
	int testCase,input,counterSwitch = 0,lantai[20],i,j,jumlahOrang,x;
	scanf("%d",&testCase);	
	for(i=0; i<testCase; i++)
	{
		counterSwitch=0;
		scanf("%d",&jumlahOrang);
		for(x=0; x<20; x++)
		{
			lantai[x] = 0;
		}
		for(j=0; j<jumlahOrang; j++)
		{
			input = 0;	
			scanf("%d",&input);
			if(lantai[input+1]==0&&lantai[input-1]==0&&lantai[input]==0)
			{
				lantai[input]=1;
				counterSwitch++;
			}	
		}
		printf("Case #%d: %d\n",i+1,counterSwitch);
	}
	return 0;
}
