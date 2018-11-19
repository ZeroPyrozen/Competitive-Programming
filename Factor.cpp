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
