#include<stdio.h>

int main()
{
	int sizeArr,arrIdx[1001],arrVal[1001],arrRes[1001];
	scanf("%d",&sizeArr);
	for(int i=0; i<sizeArr; i++)
	{
		scanf("%d",&arrIdx[i]);
	}
	getchar();
	for(int j=0; j<sizeArr; j++)
	{
		scanf("%d",&arrVal[j]);
	}
	for(int k=0; k<sizeArr; k++)
	{
		arrRes[arrIdx[k]] = arrVal[k]; 
	}
	for(int l=0; l<sizeArr; l++)
	{
		printf("%d ",arrRes[l]);
	}
	return 0;
}
