#include<stdio.h>

int main()
{
	char c[110];
	scanf("%[^\n]",&c);
	printf("%c",c[0]);
	for(int i=1; c[i]!='\0'; i++)
	{
		if(c[i-1]=='-')
			printf("%c",c[i]);
	}
	return 0;
}
