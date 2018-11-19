#include<stdio.h>
#include<string.h>

int main()
{
	int jumlahStu[1000],sumAy,sumBu = 0;
	int jumlahRu,ayuStart,budiStart,i,j;
	char arahAyu[100],arahBudi[100];
	scanf("%d",&jumlahRu);
	for(i=0; i<jumlahRu; i++)
	{
		scanf("%d",&jumlahStu[i]);
	}
	scanf("%d%s",&ayuStart,&arahAyu);
	scanf("%d%s",&budiStart,&arahBudi);
	j = ayuStart-1;
	if(strstr(arahAyu,"right"))
	{
		while(j<jumlahRu)
		{
			sumAy+=jumlahStu[j];
			j++;	
		}
	}
	else if(strstr(arahAyu,"left"))
	{
		while(j>=0)
		{
			sumAy+=jumlahStu[j];
			j--;	
		}
	}
	i = budiStart-1;
	if(strstr(arahBudi,"right"))
	{
		while(i<jumlahRu)
		{
			if(jumlahStu[i]==0)
				sumBu+=1;
			i++;	
		}
	}
	else if(strstr(arahBudi,"left"))
	{
		while(i>=0)
		{
			if(jumlahStu[i]==0)
				sumBu+=1;
			i--;	
		}
	}  
	printf("%d %d\n",sumAy,sumBu);
	return 0;
}
