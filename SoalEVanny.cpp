/*
2 2 5
A = 2
B = 2
N = 5
X -> Y -> Z -> A -> B
0 -> 1 -> 2 -> 3 -> 4
X = (2*2^0)%5 = 2
Y = (2*2^1)%5 = 4
Z = (2*2^2)%5 = 3
A = (2*2^3)%5 = 1
B = (2*2^4)%5 = 2

(A*B^i)%N -> (A*B^i)%N
2 -> 4 -> 3 -> 1 -> 2.
*/

#include<stdio.h>
#include<math.h>
int main()
{
	int testCase,a,b,n,awal,akhir,count;
	scanf("%d",&testCase);
	for(int i=0; i<testCase; i++)
	{
		scanf("%d %d %d",&n,&a,&b);
		count = 0;
		for(int j=0; j<n; j++)
		{
			if(j==0)
				awal = a%n;
			else
			{
				akhir = (a*(int)pow((double)b,(double)j))%n;
				if(awal==akhir)
					break;
			}
			count++;
		}
		printf("Case #%d: %d\n",i+1,count);
	}
	return 0;
}
