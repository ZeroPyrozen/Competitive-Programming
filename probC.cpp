#include<stdio.h>
int main()
{
	long long t,n,x,m,sum = 0;
	

	scanf("%lld",&t);
	for(int i = 1; i<=t ; i++){
		scanf("%lld %lld %lld",&n, &x , &m);
		printf("Case #%lld:\n",i);
			for(int j = 1; j<=n ; j++){
				//sum = (n*(1+n))/2;
				sum+=j;
				if(sum>x){
					printf("%lld\n",sum);
					while(sum>x){
						sum-=m;
					}
				}
			}
			sum = 0;
		}
		
		
	return 0;
}
