#include<stdio.h>


int factorial(int n)
{
	if(n<=1)
		return 1;
	return n*factorial(n-1);
}
int main()
{
	int n,x;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&x);
		printf("%d\n",factorial(x)%10);
	}
	return 0;
}
