#include<stdio.h>

int main()
{
	int testCase,sizeSh;
	char sym;
	scanf("%d",&testCase);
	for(int i=0; i<testCase; i++)
	{
		getchar();
		scanf("%c %d",&sym,&sizeSh);
		printf("Case #%d:\n",i+1);
		if(sym=='>')
		{
			for(int j=0;j<sizeSh; j++)
			{
				for(int k=0; k<sizeSh*2-1; k++)
				{
					if(k==2*(j-1)+2)
						printf("*");
					else
						printf(".");
				}
				printf("\n");
			}
			for(int j=0;j<sizeSh; j++)
			{
				for(int k=0; k<sizeSh*2-1; k++)
				{
					if(k==(sizeSh*2-1)-(2*(j-1)+2)-1)
						printf("*");
					else
						printf(".");
				}
				printf("\n");
			}	
		}
		else
		{
			for(int j=0;j<sizeSh; j++)
			{
				for(int k=0; k<sizeSh*2-1; k++)
				{
					if(k==(sizeSh*2-1)-(2*(j-1)+2)-1)
						printf("*");
					else
						printf(".");
				}
				printf("\n");
			}
			for(int j=0;j<sizeSh; j++)
			{
				for(int k=0; k<sizeSh*2-1; k++)
				{
					if(k==2*(j-1)+2)
						printf("*");
					else
						printf(".");
				}
				printf("\n");
			}
		}
		printf("\n");
	}
	return 0;
}
