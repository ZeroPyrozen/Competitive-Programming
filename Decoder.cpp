#include<stdio.h>

int main()
{
	int banyakBaris,panjangPesan,testCase,decode;
	char decoder[10][30];
	char pesan[10000];
	scanf("%d",&testCase);
	for(int i=0; i<testCase; i++)
	{
		scanf("%d %d",&banyakBaris,&panjangPesan);
		for(int j=0; j<banyakBaris; j++)
		{
			scanf("%s",&decoder[j]);
		}
		printf("Masuk sini\n");
		scanf("%s",&pesan);
		printf("Selesai masukkin pesan\n");	
		for(int j=0; j<panjangPesan; j++)
		{
			scanf("%d",&decode);
			//UTF
			//U + B - A
			if(pesan[j]+decoder[decode][0]-'A'>'Z')
				pesan[j] = pesan[j]+(pesan[j]+decoder[decode][0]-'A')%'Z';
			else
				pesan[j] = pesan[j]+decoder[decode][0]-'A';
		}
		printf("Case #%d: %s\n",i+1,pesan);
		
	}
	return 0;
}
