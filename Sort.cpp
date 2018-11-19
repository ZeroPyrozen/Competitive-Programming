#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void bubSort(int angka[], int batas)
{
	int temp;
	
	for(int i=0; i<batas; i++)
	{
		//printf("Iterasi ke %2d : \n",i+1);
		for(int j=0; j<batas-1; j++)
		{
			
			if(angka[j]>angka[j+1])
			{
				temp = angka[j];
				angka[j] = angka[j+1];
				angka[j+1] = temp;
			}
			
			if(j==batas-2)
			{
				//printf("%d %d", angka[j],angka[j+1]);
			}
			else
			{
				//printf("%d ", angka[j]);
			}
		}
		//printf("\n");
	}
}
void seleSort(int angka[], int batas)
{
	int minimal, temp;
	for(int i=0; i<batas; i++)
	{
		minimal = i;
		for(int j=i+1; j<batas; j++)
		{
			if(angka[minimal]>angka[j])
			{
				minimal = j;
			}
		}
		temp = angka[minimal];
		angka[minimal] = angka[i];
		angka[i] = temp;
	}
}
void inseSort(int angka[], int batas)
{
	int move, insert;
	for(int i=1; i<batas; i++)
	{
		move = i;
		insert = angka[i];
		while(move>0 && angka[move-1] > insert)
		{
			angka[move] = angka[move-1];
			--move;
		}
		angka[move] = insert;
	}
}
int main()
{
	srand(time(NULL));
	
	int angka[10001];
	int batas = 1000;
	int waktu1,waktu2,waktu3;
	printf("Sebelum Sorting : ");
	waktu1 = time(NULL);
	for(int i=0; i<batas; i++)
	{
		angka[i] = rand()%100+1;
		printf("%d ",angka[i]);
	}
	waktu2 = time(NULL);
	printf("\n\n");
	clock_t begin = clock();
	//bubSort(angka,batas);
	
	seleSort(angka,batas);
	//inseSort(angka,batas);
	waktu3 = time(NULL);
	clock_t end = clock();

    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Waktu :\nSebelum: %d\n Sesudah:%d Durasi:%d\n Waktu Counter: %lf\n",waktu1,waktu2,waktu3-waktu2, time_spent);
	printf("\n");printf("\n");
	
	printf("\n");printf("\n");
	printf("Setelah Sorting : ");
	for(int j=0; j<batas; j++)
	{
		printf("%2d ",angka[j]);
	}
	getchar();
	getchar();
	return 0;
}