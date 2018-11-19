#include<stdio.h>

int main()
{
	int a,x,y;
	scanf("%d",&a);
	for(int i=0; i<a; i++)
	{
		scanf("%d %d",&x,&y);
		printf("Case #%d:\n",i+1);
		for(int j=0; j<x; j++)
		{
			for(int k = 0; k<y; k++)
			{
				if(j==0||j==x-1||k==0||k==y-1)
					printf("#");
				else
					printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}
