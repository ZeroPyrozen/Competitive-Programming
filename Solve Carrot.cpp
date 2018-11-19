#include<stdio.h>

int main()
{
	int n,i;
	char x[1010];
	scanf("%d %d",&n,&i);
	for(int j=0; j<n; j++)
	{
		scanf("%[^\n]",&x);
	}
	printf("%d\n",i);
	return 0;
}
