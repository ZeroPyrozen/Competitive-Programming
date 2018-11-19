#include<stdio.h>

int main()
{
	double hargaSatuan, yangHarusDibayar, diskonMulti, barangYangDibeli, limitDiskon;
	int testCase;
	scanf("%d",&testCase);
	for(int i=0; i<testCase; i++)
	{
		getchar();
		yangHarusDibayar = 0;
		diskonMulti = 1;
		scanf("%lf %lf %lf",&hargaSatuan,&limitDiskon,&barangYangDibeli);
		for(long int j=1; j<=barangYangDibeli; j++)
		{
			
			if((hargaSatuan/diskonMulti)<limitDiskon)
			{
				yangHarusDibayar+=(limitDiskon*(barangYangDibeli-j+1));
				break;
			}
			else
				yangHarusDibayar+=(hargaSatuan/diskonMulti);
			diskonMulti*=2;
		}
		printf("Case #%d: %.3lf\n",i+1,yangHarusDibayar);
	}
	return 0;
}
