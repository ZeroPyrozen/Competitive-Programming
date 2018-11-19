#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	char x[100][100],temp[100];
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		getchar();
		scanf("%[^\n]",&x[i]);
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(j==0)
				strcpy(temp,x[j]);	
			if(j!=n-1)
				strcpy(x[j],x[j+1]);	
			else
				strcpy(x[j],temp);
		}
		for(int j=0; j<n; j++)
		{
			printf("%s ",x[j]);
		}
		printf("\n");
	}
	return 0;
}
