#include<stdio.h>

int main()
{
	int record,max,min,score,countMin,countMax;
	min = max = record = countMin = countMax = 0;
	scanf("%d",&record);
	for(int i=0; i<record; i++)
	{
		scanf("%d",&score);
		if(i==0)
			min = max = score;
		else
		{
			if(min>score)
			{
				countMin++;
				min = score;
			}
			if(max<score)
			{
				countMax++;
				max = score;
			}
		}
	}
	printf("%d %d\n",countMax,countMin);
	return 0;
}
