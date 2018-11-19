#include<stdio.h>

int main()
{
	char x[101][101];
	int n,m,testCase,temp,adaKue,kueBaris,kueKolom,pengurang;
	scanf("%d",&testCase);
	for(int f=0; f<testCase; f++)
	{
		scanf("%d %d",&n,&m);
		getchar();
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
			{
				scanf("%c",&x[i][j]);
			}
			getchar();
		}
		kueBaris = 0;
		for(int i=0; i<n; i++)
		{
			adaKue = 0;
			for(int j=0; j<m; j++)
			{
				if(x[i][j]=='S')
				{
					adaKue = 1;
					break;
				}
			}
			if(adaKue == 0)
			{
				kueBaris+=m;
			}
		}
		kueKolom = 0;
		for(int i=0; i<m; i++)
		{
			adaKue = 0;
			for(int j=0; j<n; j++)
			{
				if(x[j][i]=='S')
				{
					adaKue = 1;
					break;
				}
			}
			if(adaKue == 0)
			{
				kueKolom+=n;
			}
		}
		pengurang = 0;
		if((kueKolom/n)>(kueBaris/m))
		{
			//pengurang = kueKolom/n;
			pengurang = kueKolom/n*kueBaris/m;
		}
		else
		{
			//pengurang = kueBaris/m;
			pengurang = kueKolom/n*kueBaris/m;
		}
		printf("Kue Kolom: %d\nKue Baris: %d\nPengurang: %d\n",kueKolom,kueBaris,pengurang);
		printf("Case #%d: %d\n",f+1,(kueKolom+kueBaris)-pengurang);
	}
	/*
		3 + 3 + 4 = 10 - 2 = 8
		S...
		....
		..S.		
	*/
//	for(int i=0; i<n; i++)
//	{
//		for(int j=0; j<m; j++)
//		{
//			printf("%c",x[i][j]);	
//		}
//		printf("\n");
//	}
	return 0;
}
