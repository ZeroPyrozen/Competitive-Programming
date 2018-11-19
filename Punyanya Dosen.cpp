#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
using namespace std;

int main() {
	//Maximum Wealth (Masih Salah)
	/*int jumlahOrkay, hartanyaOrkay[100], max;
	cin >> jumlahOrkay;
	max = hartanyaOrkay[0];
	for (int counter1 = 1; counter1<=jumlahOrkay; counter1++) {
		cin >> hartanyaOrkay[counter1];
		for (int counter2 = 0; counter2 <= jumlahOrkay; counter2++) {
			if (hartanyaOrkay[counter1] > max)
				max = hartanyaOrkay[counter1];
		}
	}
	cout << max << endl;*/

	//A+B..
	/*int i, jumlahData, Datanya, jumlahnya=0;
	scanf_s("%d", &jumlahData);
	for (i = 0; i <=jumlahData; i++)
	{
		scanf_s("%d", &Datanya);
		jumlahnya += Datanya;
	}
	printf("%d", jumlahnya);
*/
	//int inputA, inputB, testCase, multi;
	//scanf_s("%d", &testCase);
	////cin >> testCase;
	//for (int a = 1; a <= testCase; a++)
	//{
	//	scanf_s("%d %d", &inputA, &inputB);
	//	//cin >> inputA >> inputB;
	//	multi = inputA*inputB;
	//	printf("Kasus #%d: %d\n", a,multi);
	//	//cout << "Kasus #" << a << ": " << multi << endl;
	//}
	

	//1-2+3-4...
	/*int counter, inputLimit, ganjil=0, genap=0, hasil;
	scanf_s("%d", &inputLimit);
	for (counter = 1; counter <= inputLimit; counter++)
	{
		if (counter % 2 == 1)
		{
			ganjil += counter;
		}
		else
		{
			genap += counter;
		}
	}
	hasil = ganjil - genap;
	printf("%d", hasil);*/

	//Maximum Wealth (Hampir bener tapi runtime error)
	/*int jumlahOrkay, hartanyaOrkay[100], max;
	cin >> jumlahOrkay;
	max = hartanyaOrkay[0];
	for (int counter1 = 1; counter1 <= jumlahOrkay; counter1++) {
		cin >> hartanyaOrkay[counter1];
		for (int counter2 = 0; counter2 <= jumlahOrkay; counter2++) {
			if (hartanyaOrkay[counter1] > max)
				max = hartanyaOrkay[counter1];
		}
	}
	cout << max << endl;
*/
	//Maximum Wealth
	/*int jumlah;
	int kekayaan;
	int i;
	int j;
	int max;
	scanf_s("%d", &jumlah);
	for (i = 0; i < jumlah; i++)
	{
		scanf_s("%d", &kekayaan);
		if (i == 0) {
			max = kekayaan;
		}
		else {
			if (max < kekayaan) 
			{
				max = kekayaan;
			}
		}
	}
	printf("\n%d", max);*/
	getchar();
	getchar();
	return 0;
}