#include<stdio.h>

int main()
{
	int T,N,A,countOdd,countEven;
	scanf("%d",&T);
	for(int i=0; i<T; i++)
	{
		scanf("%d",&N);
		countOdd = countEven = 0;
		for(int j=0;j<N; j++)
		{
			scanf("%d",&A);
			if(A%2==0)
				countEven++;
			else
				countOdd++;
		}
		printf("Odd group : %d integer(s).\nEven group : %d integer(s).\n",countOdd,countEven);
	}
	return 0;
}

