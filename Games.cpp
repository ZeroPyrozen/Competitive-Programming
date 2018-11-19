#include<stdio.h>

int main()
{
	int testCase,length,counterL,counterB;
	char q;
	scanf("%d",&testCase);
	for(int i=0; i<testCase; i++)
	{
		counterL = counterB = 0;
		scanf("%d",&length);
		getchar();
		for(int j=0; j<length; j++)
		{
			scanf("%c",&q);
			if(q=='L')
				counterL++;
			else if(q=='B')
				counterB++;
		}
		if(counterL==counterB)
		{
			printf("None\n");
		}
		else if(counterL>counterB)
		{
			printf("Lili\n");
		}
		else if(counterL<counterB)
		{
			printf("Bibi\n");
		}
	}
	return 0;
}

