#include<stdio.h>

int main()
{
	int x;
	char f = 'A';
	
	scanf("%d",&x);
	for(int i=0,count = 1; i<x; i++,count+=2)
	{
		for(int j=0; j<x-i-1; j++)
		{
			printf(" ");
		}
		for(int k=0; k<count; k++)
		{
			if(k%2==0)
			{
				if(f+i<='Z')
					printf("%c",f+i);
				else
					printf("%c",i%26+f);	
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
