#include<stdio.h>



long int isSemiJo(int n,int tujuh,int delapan)
{
	if(tujuh>n&&delapan>n)
		return 0;
	if(n%tujuh==0||n%delapan==0)
		return 1;
	return (isSemiJo(n, tujuh*10+7,delapan*10+8)||isSemiJo(n, tujuh*10+8,delapan*10+7));
}

int main()
{
	int testCase,n;
	scanf("%d",&testCase);
	for(int i=0; i<testCase; i++)
	{
		scanf("%d",&n);
		if(isSemiJo(n,7,8))
			printf("Case #%d: YES\n",i+1);
		else
			printf("Case #%d: NO\n",i+1);
	}
	return 0;
}
