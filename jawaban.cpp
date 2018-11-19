#include<stdio.h>

int main()
{
	int jumlahTeman,jumlahKue,tiapOrangDapatKueBerapa,sisaKueYangBibiMakan;
	scanf("%d %d", &jumlahKue, &jumlahTeman);
	tiapOrangDapatKueBerapa = jumlahKue/jumlahTeman;
	sisaKueYangBibiMakan = jumlahKue%jumlahTeman;
	printf("%d %d\n",tiapOrangDapatKueBerapa,sisaKueYangBibiMakan);
	return 0;
}