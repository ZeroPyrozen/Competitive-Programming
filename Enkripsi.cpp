#include<stdio.h>
#include<string.h>

int main()
{
	int counter = 0,len;
	char kalimat[101],prev;
	scanf("%[^\n]",&kalimat);
	len = strlen(kalimat);
	prev = kalimat[0];
	printf("%c",kalimat[0]);
	for(int i=0; i<len; i++)
	{
		if(prev==kalimat[i])
			counter++;
		else
		{
			if(counter!=1)
				printf("%d",counter);
			counter = 0;
			printf("%c",kalimat[i]);
			prev = kalimat[i];
			counter++;
		}
	}
	printf("%d\n",counter);
	return 0;
}
