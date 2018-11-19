#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main()
{
	char x[100];
	long long int testCase,bin,dec;
	scanf("%lld",&testCase);
	for(long long int i=0; i<testCase; i++)
	{
		getchar();
		scanf("%s",&x);
		bin = dec = 0;
		//11111111111111111111111111111111
		for(long long int j=strlen(x); j>=0; j--)
		{
			if(isdigit(x[j]))
			{
				if(x[j]=='0')
					bin++;
				else if(x[j]=='1')
				{
					if(x[j-1]=='-')
						dec-=(long long int)pow(2.0,(float)bin);
					else
						dec+=(long long int)pow(2.0,(float)bin);
					bin++;
				}	
			}	
		}
		printf("Case #%lld: %lld\n",i+1,dec);	
	}

	return 0;
}
