/*
===A
==B*B
=C*C*C
*/
#include<stdio.h>
#include<Windows.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n-i-1;j++)
		{
			printf(" ");
		}
		for(int j=0; j<i*2+1; j++)
		{
			if(j%2==0)
			{
				printf("%c",'A'+i%26);//27%26 = 1
			}
			else
				printf(" ");
		}
		printf("\n");

	}
}
