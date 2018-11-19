/*#include<math.h>
#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
*/
//int sum(int budiKampret);
//
//bool even(int a) {
//	if (a % 2 == 0) return true;
//	return false;
//}
//
//#define nama fflush(stdout); fflush(stdin); getchar();

/*int main()
{*/
	//Latihan A
	/*int inputUser, Ans, inputAmount;
	cin >> inputAmount;
	for (int j = 1; j <= inputAmount; j++) {
		cin >> inputUser;
		Ans = inputUser * 50;
	}
	cout << Ans;*/

	//Latihan B https://pandaoj.com/problem/AB
	/*int max, arr, sum, lama;
	cin >> max;
	for (int a = 1; a <= max; a++)
	{
		cin >> arr;
		if (a==1)
		{
			sum = arr + 0;
			lama = sum;
		}
		else
		{
			arr += lama;
			lama = arr;
		}
	}
	cout << lama;*/

	//Latihan C https://pandaoj.com/problem/BNPCHS2015QB
	/*int testCase, inputCinta;
	cin >> testCase;
	for (int counterA = 1; counterA <= testCase; counterA++)
	{
		cin >> inputCinta;
		if (1 == inputCinta % 2)
		{
			cout << "Case #" << counterA << ": Throw" << endl;
		}
		else
		{
			cout << "Case #" << counterA << ": Don't Throw" << endl;
		}
	}*/

	//Latihan D https://pandaoj.com/problem/BNPCHS2015QA
	/*int budiKampret=0, temp;
	temp = sum(budiKampret);
	printf("\n%d %d", budiKampret, temp);*/
	/*bool flag;
	int angka = 19;
	flag = even(angka);
	if (flag == true) cout << "Genap";
	else cout << "Ganjil";
*/
	//int x;//karena minta input user
	//scanf_s("%d", &x); //minta input angka dari user, mis x=3
	//for (int i = 0; i < x; i++) {
	//	for (int j = 0; j < x; j++) {
	//		if ((j == i) || (j == (x - i - 1))) {
	//			printf("*");
	//		}
	//		else {
	//			printf(" ");
	//		}
	//	}printf("\n");
	//}

/*
	getchar();
	getchar();
	return 0;
}*/

//int sum(int budiKampret) {
//	int inputA, inputB, testCase;
//	cin >> testCase;
//	for (int counterA = 1; counterA <= testCase; counterA++)
//	{
//		cin >> inputA >> inputB;
//		budiKampret = inputA*inputB;
//		cout << "Kasus #" << counterA << ": " << budiKampret << endl;
//	}
//	
//	return budiKampret;
//}


#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>
#include<ctype.h>

using namespace std;

int main()
{
	//Question 1 [Calculation of Sequence Numbers]
	/*int counter, inputLimit, ganjil = 0, genap = 0, hasil;
	scanf("%d", &inputLimit);
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

	//Question 2 [Displaying X Figure]
	//int x; //Variable Input
	//scanf_s("%d", &x); //Input




	//for (int i = 0; i < x; i++) {
	//	for (int j = 0; j < x; j++) {
	//		if ((j == i) || (j == (x - i - 1))) {
	//			printf("@");
	//		}
	//		else {
	//			printf("=");
	//		}
	//	}printf("\n");
	//}

	//Question 3 [Word Palindrome] *Caranya si Han
	//char input[100];
	//int charlength;     //Menghitung Jumlah panjang string
	//int countercompare = 0;   //Mengecek karakter dalam String
	//int checkPalindrom = 1;   //misalkan benar

	//						  //Input ke Char Array
	//scanf_s("%[^\n]", input); fflush(stdin);

	////hitung char length
	//charlength = strlen(input);

	////Bandingkan Palindromnya (Bandingkan dari depan ke belakang)
	//while (countercompare <= charlength - 1)
	//{
	//	if (input[countercompare] != input[charlength - 1 - countercompare])   //Kalau Depan dan Belakang beda, maka Salah
	//	{
	//		checkPalindrom = 0;
	//		break;
	//	}
	//	countercompare++;
	//}

	////Check Hasil True or False
	//if (checkPalindrom == 1)
	//{
	//	printf("Palindrome");
	//}
	//else
	//{
	//	printf("Bukan Palindrome");
	//}

	//Question 4 [The Smallest Number]
	/*int angka1, angka2, angka3, min;
	scanf("%d %d %d", &angka1, &angka2, &angka3);
	min = angka1;
	if (min > angka2) min = angka2;
	if (min > angka3) min = angka3;
	printf("%d", min);*/

	//Question 5 [Convert All Lowercase to Uppercase]
	/*char sentence[10001];
	int counter, wordLenght;
	scanf_s("%s", sentence);
	wordLenght = strlen(sentence);
	for (counter = 0; counter < wordLenght; counter++)
	{
		if (islower(sentence[counter]))
			sentence[counter] = toupper(sentence[counter]);
	}
	printf("%s", sentence);*/
	/*char kata[10001];
	int counter, wordLenght;
	cin >> kata;
	wordLenght = strlen(kata);
	for (counter = 0; counter < wordLenght; counter++) {
		if (islower(kata[counter])) {
			if (kata[counter] = 'a') {
				kata[counter] = 'A';
			}
			else if (kata[counter] = 'b') {
				kata[counter] = 'B';
			}
			else if (kata[counter] = 'c') {
				kata[counter] = 'C';
			}
			else if (kata[counter] = 'd') {
				kata[counter] = 'D';
			}
			else if (kata[counter] = 'e') {
				kata[counter] = 'E';
			}
			else if (kata[counter] = 'f') {
				kata[counter] = 'F';
			}
			else if (kata[counter] = 'g') {
				kata[counter] = 'G';
			}
			else if (kata[counter] = 'h') {
				kata[counter] = 'H';
			}
			else if (kata[counter] = 'i') {
				kata[counter] = 'I';
			}
			else if (kata[counter] = 'j') {
				kata[counter] = 'J';
			}
			else if (kata[counter] = 'k') {
				kata[counter] = 'K';
			}
			else if (kata[counter] = 'l') {
				kata[counter] = 'L';
			}
			else if (kata[counter] = 'm') {
				kata[counter] = 'M';
			}
			else if (kata[counter] = 'n') {
				kata[counter] = 'N';
			}
			else if (kata[counter] = 'o') {
				kata[counter] = 'O';
			}
			else if (kata[counter] = 'p') {
				kata[counter] = 'P';
			}
			else if (kata[counter] = 'q') {
				kata[counter] = 'Q';
			}
			else if (kata[counter] = 'r') {
				kata[counter] = 'R';
			}
			else if (kata[counter] = 's') {
				kata[counter] = 'S';
			}
			else if (kata[counter] = 't') {
				kata[counter] = 'T';
			}
			else if (kata[counter] = 'u') {
				kata[counter] = 'U';
			}
			else if (kata[counter] = 'v') {
				kata[counter] = 'V';
			}
			else if (kata[counter] = 'w') {
				kata[counter] = 'W';
			}
			else if (kata[counter] = 'x') {
				kata[counter] = 'X';
			}
			else if (kata[counter] = 'y') {
				kata[counter] = 'Y';
			}
			else if (kata[counter] = 'z') {
				kata[counter] = 'Z';
			}
		}
	}*/

	int menuDirection;
	printf("\t\t\t\t\t\t===========================\n\t\t\t\t\t\t\tFigure Builder\n\t\t\t\t\t\t===========================\n\n");
	do {
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("1. Bentuk Segitiga Siku-siku\n");
		printf("2. Bentuk Persegi\n");
		printf("3. Bentuk X\n");
		printf("4. Bentuk Segitiga Sama Sisi\n");
		printf("5. Bentuk Persegi Bolong\n");
		printf("0. Keluar\n");
		printf("Input your choice>> ");
		scanf_s("%d", &menuDirection);
		switch (menuDirection) {
		case 1:	int barisSegitiga, inputLimitS, kolomSegitiga;
				printf("Masukkan Nilai Limit Akhir>> ");
				scanf_s("%d", &inputLimitS);
				for (barisSegitiga = 1; inputLimitS >= barisSegitiga; barisSegitiga++) {
					for (kolomSegitiga = 1; kolomSegitiga <= barisSegitiga; kolomSegitiga++) {
						printf("*");
					}
					printf("\n");
				}
				break;
		case 2: int inputLimitP, barisPersegi, kolomPersegi;
				printf("Masukkan Nilai Limit Akhir>> ");
				scanf_s("%d", &inputLimitP);
				for (barisPersegi = 1; barisPersegi <= inputLimitP; barisPersegi++) {
					for (kolomPersegi = 1; kolomPersegi <= inputLimitP; kolomPersegi++) {
						printf("*");
					}
					printf("\n");
				}
				break;
		case 3: int inputX, barisX, kolomX;
				scanf_s("%d", &inputX);
				for (barisX = 0; barisX < inputX; barisX++) {
					for (kolomX = 0; kolomX < inputX; kolomX++) {
						if ((kolomX == barisX) || (kolomX == (inputX - barisX - 1))) {
							printf("*");
						}
						else {
							printf(" ");
						}
					}
					printf("\n");
				}
				break;
		case 4: int inputSegitigaS, barisSegitigaS, spasiSegitigaS, kolomSegitigaS;
				scanf_s("%d", &inputSegitigaS);
				for (barisSegitigaS = 0; barisSegitigaS < inputSegitigaS; barisSegitigaS++) {
					for (spasiSegitigaS = 0; spasiSegitigaS < inputSegitigaS - barisSegitigaS; spasiSegitigaS++) { 
						printf(" ");
					}
					for (kolomSegitigaS = 0; kolomSegitigaS < 1 + (barisSegitigaS * 2); kolomSegitigaS++) { 
						printf("*");
					}
					printf("\n");
				}
				}
		
	} while (menuDirection != 0);
	getchar();
	getchar();
	return 0;
}


