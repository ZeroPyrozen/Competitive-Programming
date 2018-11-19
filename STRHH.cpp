#include<stdio.h>
#include<string.h>
int main()
{
	int testCase,i,j,len;
	char kata[1010];
	scanf("%d",&testCase);
	for(i=0; i<testCase; i++)
	{
		scanf("%s",&kata);
		len = strlen(kata);
		for(j=0; j<len/2; j+=2)
		{
			printf("%c",kata[j]);
		}
		printf("\n");
	}
}
