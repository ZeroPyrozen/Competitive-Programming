#include<stdio.h>
 
int main()
{
    int num, rev=0, n, digit, input,sum= 0,mus = 0,testCase,i;
    scanf("%d",&testCase);
    for(i=0;i<testCase; i++)
    {
        scanf("%d", &num);
        rev = sum = mus = 0;
	    n = num;
	    while(n != 0)
	    {
	        digit = n%10;
	        rev = rev*10 + digit;
	        n = n/10;        
	    }
	    sum = num+rev;
	    n = sum;
	    while(n!=0)
	    {
	    	digit = n%10;
	        mus = mus*10 + digit;
	        n = n/10;  
		}
    	printf("Case #%d: %d %d %d %d\n", i+1,num,rev,sum,mus);
	}
    return 0;
}
