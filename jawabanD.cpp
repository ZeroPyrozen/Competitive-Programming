#include<stdio.h>
int main()
{
	int n,a;
	scanf("%d",&n);
	a = 1;
	for(int i=0; i<n; i++)
	{
		a*=2;
	}
	printf("%d\n",a-2);
	return 0;
}