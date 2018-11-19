#include<stdio.h>

int getMid(int a,int b,int c)
{
	if(a>b&&a<c||a>c&&a<b)
		return a;
	else if(b>a&&b<c||b<a&&b>c)
		return b;
	else if(c>a&&c<b||c>b&&c<a)
		return c;
}

int main()
{
	int testCase,i,a,b,c;
	scanf("%d",&testCase);
	for(i=0; i<testCase; i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		printf("Case %d: %d\n",i+1,getMid(a,b,c));
	}
	return 0;
}
