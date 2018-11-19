#include<iostream>
#include<stdio.h>
using namespace std;
int dp[] = {};
int g(int n,int m)
{
	if(n==m)
		return 1;
	if(n<=1)
		return 0;
	if(dp[n]!= -1)
		return dp[n];
	dp[n] = (g(n-1,m)+g(n-2,m)) % 10000;
	return dp[n];
}
int main()
{
	int testCase,n,m;
	cin >> testCase;
	fflush(stdin);
	for(int i=0; i<testCase; i++)
	{
		cin >> n >> m;
		fflush(stdin);
		for(int j = 0; j<n; j++)
		{
			dp[n] = -1;
		}
		int x = g(n,m);
		cout << x <<endl;
	}
	getchar();
	return 0;
}
