#include<stdio.h>

int isPrime(int n)
{
	if(n%2==0&&n!=2||n<2)
		return 0;
	else if(n==2)
		return 1;
	else
	{
		for(int i=2; i<n/2; i++)
		{
			if(n%i==0)
				return 0;
		}
		return 1;
	}
}

int main()
{
	int input,pembagi=2;
	scanf("%d",&input);
	printf("Faktor: ");
	while(input!=0)
	{
		if(isPrime(pembagi))
		{
			if(input%pembagi==0)
			{
				printf("%d ",pembagi);
				input/=pembagi;	
			}		
			else
				pembagi++;
		}
		else
			pembagi++;
	}
	return 0;
}
