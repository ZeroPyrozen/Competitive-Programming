#include<stdio.h>

int main()
{
	long long int testCase,L,v,l,r,i,j,temp;
	scanf("%lld",&testCase);
	for(i=0; i<testCase; i++)
	{
		
		scanf("%lld %lld %lld %lld",&L,&v,&l,&r);
		if(l>r)
		{
			temp = l;
			l = r;
			r = temp;
		}
		if(r-l!=0)
			printf("%lld\n",L/v-(r-l+1)/v);
		else
			printf("%lld\n",L/v-(r-l)/v -1);
	}
	return 0;
}
