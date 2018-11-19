//#include<stdio.h>
//
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	
//	for(int i=0; i<=n; i++) //Diamond Row
//	{
//		if(i<n/2)
//		{
//			for(int j=0;j<n-i-1; j++)
//			{
//				if(j==n-i-2)
//					printf("*");
//				else
//					printf(" ");
//			}
//			for(int j=0;j<i; j++)
//			{
//				printf(" ");
//			}
//			for(int j=0; j<i; j++)
//			{
//				if(i-1==j)
//					printf("*");
//				else
//					printf(" ");
//			}	
//		}
//		else
//		{
//			for(int j=0; j<i; j++)
//			{
//				if(i-1==j)
//					printf("*");
//				else
//					printf(" ");
//			}
//			for(int j=0; j<n-i; j++)
//			{
//				printf(" ");
//			}
//			for(int j=0; j<n-i; j++)
//			{
//				if(j==n-i-1)
//					printf("*");
//				else
//					printf(" ");
//			}
//		}
//		printf("\n");	
//	}
//	return 0;
//}
#include <stdio.h>
 
int main()
{
    int number, i, k, count = 1;
 
    printf("Enter number of rows\n");
    scanf("%d", &number);
    count = number - 1;
    for (k = 1; k <= number; k++)
    {
        for (i = 1; i <= count; i++)
        {
        	printf(" ");
		}
        count--;
        for (i = 1; i <= 2 * k - 1; i++)
        {
        	if(i==1||i==2*k-1)
	        	printf("*");	
	        else
	        	printf(" ");
		} 
        printf("\n");
    }
     count = 1;
    for (k = 1; k <= number - 1; k++)
    {
        for (i = 1; i <= count; i++)
        {
        	printf(" ");
		}
		     
        count++;
        for (i = 1; i <= 2 *(number - k)- 1; i++)
        {
        	if(i==1||i==2*(number-k)-1)
	        	printf("*");	
	        else
	        	printf(" ");	
		}	
        printf("\n");
      }
      return 0;
}
