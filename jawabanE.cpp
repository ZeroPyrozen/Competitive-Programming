#include<stdio.h>
#include<string.h>
int main()
{
	char kalimat[100];
	scanf("%[^\n]",&kalimat);
	for(int i=0; kalimat[i]!='\0'; i++)
	{
		//a-z A-Z
		if(kalimat[i]<='z'&&kalimat[i]>='a'||
			kalimat[i]<='Z'&&kalimat[i]>='A')
		{
			printf("%c",kalimat[i]);
			if(kalimat[i+1]>='0'&&kalimat[i+1]<='9')
			{
				printf("\t");
			}
		}
		else if(kalimat[i]>='0'&&kalimat[i]<='9')
		{
			printf("%c",kalimat[i]);
			if(kalimat[i+1]<='z'&&kalimat[i+1]>='a'||
			kalimat[i+1]<='Z'&&kalimat[i+1]>='A')
				printf("\n");
		}
	}
	return 0;
}