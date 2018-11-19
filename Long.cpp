#include<stdio.h>

int main()
{
	long long int n;
	scanf("%lld",&n);
	if(n<=2147483647||n>=-2147483648)
        printf("integer\n");
    else
        printf("long long\n");
	return 0;
}
