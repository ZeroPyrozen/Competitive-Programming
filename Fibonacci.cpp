//#include<stdio.h>
//
//int main()
//{
//	int f1 = 0;
//	int f2 = 1,temp;
//	for(int i=1; i<=10; i++)
//	{
//		printf("%d ",f2);
//		temp = f1+f2;
//		f1 = f2;
//		f2 = temp;
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int memo[100001];
//
//int fibonacci(int n)
//{
//	if(n<=1)
//		return n;
//	else
//	{
//		if(memo[n]==0)
//		{
//			return memo[n] = fibonacci(n-1)+fibonacci(n-2);	
//		}
//		else
//			return memo[n];
//	}
//}
//void init()
//{
//	for(int i=0; i<100001; i++)
//	{
//		memo[i] = 0;
//	}
//}
//int main()
//{
//	init();
//	printf("%d",fibonacci(8));
//	return 0;
//}

#include<stdio.h>

bool adaAtauTidak(int yangDicari,int koinA,int koinB,int koinC)
{
	if(yangDicari==koinA||yangDicari==koinB||yangDicari==koinC)
		return true;
	else if(yangDicari<0)
		return false;
	else
		return (adaAtauTidak(yangDicari-koinA,koinA,koinB,koinC)||adaAtauTidak(yangDicari-koinB,koinA,koinB,koinC)||adaAtauTidak(yangDicari-koinC,koinA,koinB,koinC));
}

int main()
{
	int koinA = 3,koinB = 5,koinC = 12;
	int koinYangDicari = 23;
	printf("%d",adaAtauTidak(koinYangDicari,koinA,koinB,koinC));
	return 0;
}


