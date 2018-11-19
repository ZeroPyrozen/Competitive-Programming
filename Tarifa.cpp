#include<stdio.h>

int main()
{
	int limit,data,extra,a,used = 0;
	scanf("%d",&limit);
	scanf("%d",&data);
	for(int i=0; i<data; i++)
	{
		scanf("%d",&a);
		used+=a;
	}
	printf("%d\n",limit*data - used + limit);
	return 0;
}
