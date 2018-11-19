#include<stdio.h>

int main()
{
	int testCase,N,i,j,x,isPrime = 0;
	scanf("%d",&testCase);
	for(i=0; i<testCase; i++)
	{
		scanf("%d",&N);
		printf("Case %d#:\n",i+1);
		for(j=1; j<=N; j++)
		{
			if(j==2)
			{
				printf("I will become a good boy.\n");
				continue;	
			}
			if(j % 2 == 0 && j!=2)
				continue;
			else
		   	{
		   		isPrime = 1;
		   		if(j<=1)
		           continue;
		       	else
		       	{
		       		for(x=2; x<j/2; x++)
		        	{
		            	if(j % x == 0)
		                {
		                	isPrime = 0;
		                	break;
						}
					} 
					if(isPrime==1)  
						printf("I will become a good boy.\n");
				} 	
			}	
		}
	}
	return 0;
}
