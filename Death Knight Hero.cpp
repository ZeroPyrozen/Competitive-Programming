#include<stdio.h>
#include<string.h>
int main()
{
	int n,count = 0;
	char c[1010];
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		getchar();
		scanf("%[^\n]",&c);
		if(strstr(c,"CD")==NULL)
			count++;
	}
	printf("%d\n",count);
	return 0;
}
