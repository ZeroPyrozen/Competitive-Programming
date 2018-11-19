#include<stdio.h>

int main()
{
	int testCase,a,b,start,end,gcd,lcm,temp;
	scanf("%d",&testCase);
	for(int i=0; i<testCase; i++)
	{
		scanf("%d %d",&a,&b);
		//GCD
		start = a<b?a:b;
		end = a>b?a:b;
		for(int j=1; j<=end; j++)
		{
			if(a%j==0&&b%j==0)
				gcd = j;
		}
		printf("GCD = %d\n",gcd);
		//LCM
		
		for(int j=end; j<=start*end; j++)
		{
			if(j%a==0&&j%b==0)
			{
				lcm = j;
				break;
			}
		}
		printf("LCM = %d\n",lcm);
	}
	return 0;
}
