#include <stdio.h>
#include <iostream>
#include <time.h>

int main()
{
	int coun0 = 0;
	int coun1 = 0;

	int origin, x, y;
	printf("Masukan Jumlah Random Kuadrat: ");
	scanf("%d", &origin);fflush(stdin);
	srand(time(NULL));

	x = origin;
	y = origin;

	while (y>0)
	{
		while (x>0)
		{
			if (rand()%2 == 1)
			{
				printf("1");
				coun1++;
			}
			else
			{
				printf("0");
				coun0++;
			}
			
			
			x--;
		}
		printf("\n");
		x = origin;
		y--;
	}
	
	printf("\n Jumlah 0 = %d",coun0);
	printf("\n Jumlah 1 = %d",coun1);

	getchar();
	return 0;
}