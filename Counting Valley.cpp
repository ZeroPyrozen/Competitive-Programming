#include<stdio.h>

int main()
{
	int x,val=0,height=0;
	char buff;
	scanf("%d",&x);
	getchar();
	for(int i=0; i<x; i++)
	{
		scanf("%c",&buff);
		if(buff=='U')
			height++;
		else if(buff=='D')
			height--;
		if(height==0&&buff=='U')
			val++;
	}
	printf("%d\n",val);
	return 0;
}
