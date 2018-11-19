#include <stdio.h>
#define MOD 1000000007
 
long long int power (long long int a, long long int b) {
    long long int ans=1ll;
    while(b) 
	{
        if(b&1)
			ans=(ans*a)%MOD;
        a=(a*a)%MOD;
        b=b/2;
    }
    return ans;
}
 
int main(void) 
{
	int testCase;
	long long int a,b;
	scanf("%d",&testCase);
	for(int i=0;i<testCase; i++)
	{
		scanf("%lld %lld",&a,&b);
		printf("%lld\n",(power(2,a)*power(3,b))%MOD);		
	}
    return 0;
}
