#include<stdio.h>

int main()
{
	//Sock Merchant
	int n,arr[101],isi[101] = {0},pair=0;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
		isi[arr[i]]++;
	}
	for(int i=0; i<101; i++)
	{
		if(isi[i]!=0)
		{
			pair+=isi[i]/2;
		}
	}
	printf("%d\n",pair);
	return 0;
}
