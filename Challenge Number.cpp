#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int testCase,len,temp;
	char angka[20];
	scanf("%d",&testCase);
	for(int i=0; i<testCase; i++)
	{
		scanf("%s",&angka);
		len = strlen(angka);
		printf("Case #%d: %s",i+1,angka);
		while(len!=1)
		{
			temp = 0;
			for(int j=0; j<len; j++)
			{
				temp = temp + (angka[j] - '0');
			}
			itoa(temp,angka,10);
			len = strlen(angka);
			printf(" %s",angka);
		}
		printf("\n");
	}
	return 0;
}
