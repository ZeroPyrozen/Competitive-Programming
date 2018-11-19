#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
	int n,k,a[10000];
	cin >> n >>k;
	for(int i=0; i<n; i++)
	{
		cin >> a[i];
	}
	sort(a,a+n);
	cout << abs(a[0] - a[n-k+1]);
	return 0;
}