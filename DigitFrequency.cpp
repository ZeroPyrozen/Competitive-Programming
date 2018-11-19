#include<stdio.h>
#include<ctype.h>
int main()
{
	char s[1010],dig[10] = {0};
	scanf("%[^\n]",&s);
	for(int i=0;s[i]!='\0';i++)
	{
		if(isdigit(s[i]))
			dig[s[i]-'0']++;
	}
	for(int i=0; i<10; i++)
	{
		printf("%d ",dig[i]);
	}
	printf("\n");
	return 0;
}
