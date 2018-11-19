#include<stdio.h>

void swap(int cup[],int x,int y)
{
	int temp = cup[x];
	cup[x] = cup[y];
	cup[y] = temp;
}

int main()
{
	int cup[3] = {1,0,0};
	char x[100];
	scanf("%[^\n]",&x);
	for(int i=0; x[i]!='\0'; i++)
	{
		if(x[i]=='A')
			swap(cup,0,1);
		else if(x[i]=='B')
			swap(cup,1,2);
		else if(x[i]=='C')
			swap(cup,0,2);
	}
	for(int i=0; i<3; i++)
	{
		if(cup[i]==1)
		{
			printf("%d\n",i+1);
			break;
		}
	}
	return 0;
}


