#include<stdio.h>
#include<Windows.h>
int main()
{
	int testCase,row,column,x,i,j;
	scanf("%d",&testCase);
	for(x=0; x<testCase; x++)
	{
		scanf("%d %d",&row,&column);
		for(i=0; i<row; i++)
		{
			for(j=0; j<column; j++)
			{
				
				if(i%2==0)
				{
					if(j%2==0)
						printf("*");
					else
						printf(".");
				}
				else
				{
					if(j%2==0)
						printf(".");
					else
						printf("*");
				}
			}
			printf("\n");	
		}	
	}
	
	return 0;
}
