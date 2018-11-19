#include<stdio.h>
#include<string.h>
int main()
{
	char c[100];
	scanf("%[^\n]",&c);
	if(strcmp(c,"DEC 25")==0||strcmp(c,"OCT 31")==0)
		printf("yup\n");
	else
		printf("nope\n");
	return 0;
}


