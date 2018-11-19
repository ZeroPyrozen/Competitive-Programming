/*
5 30
1 2 3 4 5
A B C D E
Selisih Nilai Max dan Min = 5 - 1 = 4
5 30
1S 2 3 4 100 -> Cari Max dan Min
Range = Max - Min
IF Range > Batas
Print Tidak Boleh
ELSE
Print Boleh
ENDIF
A B C D E
Selisih Nilai Max dan Min = 100 - 1 = 99
*/

#include<stdio.h>

int main()
{
	int testCase,jumlahPlayer;
	long long int levelPlayer,max,min,batasLevel;
	scanf("%d",&testCase);
	for(int i=0; i<testCase; i++)
	{
		scanf("%d %lld",&jumlahPlayer,&batasLevel);
		max = min = 0;
		for(long long int j=0; j<jumlahPlayer; j++)
		{
			scanf("%lld",&levelPlayer);
			if(j==0)
			{
				max = min = levelPlayer;
				continue;
			}
			if(max<levelPlayer)
				max = levelPlayer;
			if(min>levelPlayer)
				min = levelPlayer;
		}
		if(batasLevel>=max-min)
			printf("Case #%d: YES\n",i+1);
		else
			printf("Case #%d: NO\n",i+1);
	}
	return 0;
}


#include <iostream>
using namespace std;

int main()
{
	int banyak;
	cin >> banyak;
	for (int i = 1;i <= banyak;i++)
	{
		int panjang;
		cin >> panjang;
		
		int besar[1001] = {0};
		for (int j = 2;j <= panjang;j++)
		{
			int tmp = j;
			int pembagi = 2;
			while (tmp > 1)
			{
				while (tmp%pembagi == 0)
				{
					tmp = tmp/pembagi;
					besar[pembagi]++;
				}
				pembagi++;
			}
		}
		cout << "Case #" << i << ":\n";
		for (int j = 2;j <= panjang;j++)
		{
			if (besar[j] > 0)
			{
				cout << j << " " << besar[j] <<"\n";
			}
		}	
	}
}