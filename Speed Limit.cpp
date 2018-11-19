#include<stdio.h>

int main()
{
	int inputData,speed,distance,elapsedH,accuH;
	scanf("%d",&inputData);
	while(inputData!=-1)
	{
		distance = accuH = 0;
		for(int i=0; i<inputData; i++)
		{
			scanf("%d %d",&speed,&elapsedH);
			distance = distance + speed*(elapsedH-accuH);
			accuH = elapsedH;
		}
		printf("%d miles\n",distance);
		scanf("%d",&inputData);
	}
	return 0;
}
