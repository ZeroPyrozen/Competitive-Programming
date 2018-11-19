#include<stdio.h>

int main()
{
	int a,b,revA = 0,revB = 0;
	scanf("%d %d",&a,&b);
	while(a!=0)
	{
		revA*=10;
		revA+=a%10;
		a/=10;
	}
	while(b!=0)
	{
		revB*=10;
		revB+=b%10;
		b/=10;
	}
	printf("%d\n",revA>revB?revA:revB);
	return 0;
}
