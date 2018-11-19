//Problem A
//#include<stdio.h>
//
//int main()
//{
//	int nilaiCari = 26,maxCari = 26,jumlahPecahan = 3,koin[4];
//	char memo[27];
//	koin[1] = 5;
//	koin[2] = 7;
//	koin[3] = 12;
//	//26
//	//5 + 5 + 7
//	for(int i=0; i<=maxCari; i++)
//	{
//		memo[i] = 'X';	
//	}
//	for(int i=1; i<=jumlahPecahan; i++)
//	{
//		memo[koin[i]] = 'B';	
//	}
//	for(int i=1; i<=maxCari; i++)
//	{
//		for(int j=1; j<=jumlahPecahan; j++)
//		{
//			if(i-koin[j]>=1)
//			{
//				if(memo[i-koin[j]]=='B')
//					memo[i] = 'B';	
//			}	
//		}	
//	}
//	for(int i=1; i<=maxCari; i++)
//	{
//		printf("%c\n",memo[i]);
//	}
//	if(memo[nilaiCari]=='B')
//		printf("YES");
//	else
//		printf("NO"); 
//	return 0;
//}

//Problem B
//#include<stdio.h>
//
//int main()
//{
//	int nilaiCari = 24,maxCari = 26,jumlahPecahan = 3,koin[4],memo[27];
//	koin[1] = 5;
//	koin[2] = 7;
//	koin[3] = 12;
//	//26
//	//5 + 5 + 7
//	for(int i=0; i<=maxCari; i++)
//	{
//		memo[i] = 0;	
//	}
//	for(int i=1; i<=jumlahPecahan; i++)
//	{
//		memo[koin[i]] = 1;	
//	}
//	for(int i=1; i<=maxCari; i++)
//	{
//		for(int j=1; j<=jumlahPecahan; j++)
//		{
//			if(i-koin[j]>=1&&memo[i-koin[j]]>0)
//			{
//				if(memo[i]==0||(memo[i]>(1+memo[i-koin[j]])))
//					memo[i] = memo[i-koin[j]]+1;	
//			}	
//		}	
//	}
//	for(int i=1; i<=maxCari; i++)
//	{
//		printf("%d\n",memo[i]);
//	}
//	if(memo[nilaiCari]>0)
//		printf("YES: %d",memo[nilaiCari]);
//	else
//		printf("NO"); 
//	return 0;
//}

//Problem C
#include<stdio.h>

int main()
{
	int nilaiCari = 24,maxCari = 26,jumlahPecahan = 3,koin[4],memo[27];
	koin[1] = 5;
	koin[2] = 7;
	koin[3] = 12;
	for(int i=0; i<=maxCari; i++)
	{
		memo[i] = 0;	
	}
	for(int i=1; i<=jumlahPecahan; i++)
	{
		memo[koin[i]] = 1;	
	}
	for(int i=1; i<=maxCari; i++)
	{
		for(int j=1; j<=jumlahPecahan; j++)
		{
			if(i-koin[j]>=1)
				memo[i] += memo[i-koin[j]];	
				
		}	
	}
	for(int i=1; i<=maxCari; i++)
	{
		printf("%d\n",memo[i]);
	}
	if(memo[nilaiCari]>0)
		printf("YES: %d",memo[nilaiCari]);
	else
		printf("NO"); 
	return 0;
}



