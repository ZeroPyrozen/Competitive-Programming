#include<stdio.h>
#include<Windows.h>

#define x printf
int main()
{

	//5
	/*
	*
	**
	***
	****
	*****
	*/
	/*for(int i=0; i<inputUser; i++)
	{
	for(int j = 0; j<inputUser; j++)
	{
	Sleep(100);
	printf("*");
	}
	printf("\n");
	}*/

	/*for(int i=0; i<inputUser; i++)
	{
	for(int j = 0; j<i+1; j++)
	{
	printf(" ");
	}
	for(int k = inputUser-i; k>0; k--)
	{
	Sleep(100);
	printf("*");
	}
	printf("\n");
	}*/
	/*

	*
	***
	*****
	***
	*
	*/
	int N =5;
	for (int i = 0; i <= 2 * N; i++) //10 Baris Ke bawah
	{

		for (int j = 0; j <= 2 * N; j++) //10 Baris kesamping
		{
			if (i <= N) //5 Baris pertama - Piramid ke atas
			{
				/*
				 --*
				 -***
				 *****
				*/
				if (j < N - i || j > N + i)//Buat spacing selama j bukan N -i atau N+i
				{
					Sleep(100);
					x(" ");
				}
				else //j==N
				{
					Sleep(100);
					x("*");
				}
			}
			else //5 baris terakhir - Piramid kebawah
			{
				/*
					***
					 *
				*/
				if (j < i - N || j > 3 * N - i) //Buat spacing selama j bukan N
				{
					Sleep(100);
					x(" ");
				}
				else 
				{
					Sleep(100);
					x("*");
				}
			}
		}
		x("\n");
	}
	
	getchar();
	return 0;
}