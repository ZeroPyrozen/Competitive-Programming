#include<iostream>
#include<stdio.h>
#include<math.h>
#include<time.h>
#include<ctype.h>
#include<string.h>
using namespace std;

int main()
{
	//Latihan 1 (1234...)
	/*int n;
	int m;
	int a = 1;
	cin>>n>>m;
	for (int i = 0; i<n; i++) {
		if (a == m) {
			cout << a;
		}
		else { cout << a << ' '; }
		if (a<m) {
			a++;
		}
		else {
			cout << endl;
			a = 1;
		}
	}*/


	//Latihan 2 (Remedial)
	/*int testCase, studentAmount, studentGrade, remedialCounter = 0;
	cin >> testCase;
	for (int i = 1; i <= testCase; ++i)
	{
		cin >> studentAmount;
		for (int j = 1; j <= studentAmount; j++)
		{
			cin >> studentGrade;
			if (studentGrade<60)
			{
				++remedialCounter;
			}
		}
		cout << "Case #" << i << ": " << remedialCounter << endl;
		remedialCounter = 0;
	}*/

	//Latihan (Money Denomination)
	/*int inputUser, sisaUang, outSeratusR, outLimaPR, outDuaPR, outSepuluhR, outLimaR, outDuaR, outSeR, outLimaRat, outDuaRat, outSeRat;
	cout << "Masukkan Uang yang akan dibagi = ";
	cin >> inputUser;
	

	//Rp 100.000
	outSeratusR = inputUser / 100000;
	sisaUang = inputUser % 100000;
	//Rp 50.000
	outLimaPR = sisaUang / 50000;
	sisaUang = sisaUang % 50000;
	//Rp 20.000
	outDuaPR = sisaUang / 20000;
	sisaUang = sisaUang % 20000;
	//Rp 10.000
	outSepuluhR = sisaUang / 10000;
	sisaUang = sisaUang % 10000;	
	//Rp 5.000
	outLimaR = sisaUang / 5000;
	sisaUang = sisaUang % 5000;
	//Rp 2.000
	outDuaR = sisaUang / 2000;
	sisaUang = sisaUang % 2000;
	//Rp 1.000
	outSeR = sisaUang / 1000;
	sisaUang = sisaUang % 1000;
	//Rp 500
	outLimaRat = sisaUang / 500;
	sisaUang = sisaUang % 500;
	//Rp 200
	outDuaRat = sisaUang / 200;
	sisaUang = sisaUang % 200;
	//Rp 100
	outSeRat = sisaUang / 100;
	sisaUang = sisaUang % 100;
	
	cout << "Seratus Ribu ada : " << outSeratusR << endl << "Lima Puluh Ribu ada : " << outLimaPR << endl << "Dua Puluh Ribu ada : " << outDuaPR << endl << "Sepuluh Ribu ada : " << outSepuluhR << endl << "Lima Ribu ada : " << outLimaR << endl << "Seribu ada : " << outSeR << endl << "Lima Ratus ada : " << outLimaRat << endl << "Dua Ratus ada : " << outDuaRat << endl << "Seratus ada : " << outSeRat << endl;
	*/

	//Latihan 2.1 (Persegi)
	/*int x;//karena minta input user
	scanf_s("%d", &x); //minta input angka dari user, mis x=3
	fflush(stdin); //menghapus memori buffer
	getchar();//menahan layar
	for (int a = 0; a < x; a++) {
		for (int i = 0; i < x; i++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");*/

	//Truth Table 
	/*int P, Q;
	printf("===============================\n");
	printf("P Q P or Q P and Q Not P P xor Q\n");
	printf("===============================\n");
	for (P = 1; P >= 0; P--)
		for (Q = 1; Q >= 0; Q--)
			printf("%4d %4d %4d %4d %4d %4d\n", P, Q, P || Q, P&&Q, !P, P^Q);
	while (getchar() != '\n');*/
	/*int b, k, tes1 = 0, tes2 = 0;


	printf("Input kolom\n");
	scanf_s("%d", &k);
	printf("Input baris\n");
	scanf_s("%d", &b);

	for (int tes1 = 0; tes1 < k; tes1++) {
		for (int tes2 = 0; tes2 < b; tes2++) {
			printf("#\t");
		}
		printf("\n");
	}
	printf("\n");
	long bound;
	cout << "Enter a positive integer: ";*/

//Latihan (Detik Converter)
//long long int inputDetik, sisaWaktu, tahun, bulan, minggu, hari, jam, menit, detik;
//printf("Masukkan Detik: ");
//scanf_s("%lld", &inputDetik);
////Tahun
//tahun = inputDetik / 31557600;
//sisaWaktu = inputDetik % 31557600;
////Bulan
//bulan = sisaWaktu / 2629743;
//sisaWaktu = sisaWaktu % 2629743;
////Minggu
//minggu = sisaWaktu / 604800;
//sisaWaktu = sisaWaktu % 604800;
////Hari
//hari = sisaWaktu / (1 * 60 * 60 * 24 * 7);
//sisaWaktu = sisaWaktu % (1 * 60 * 60 * 24);
////Jam
//jam = sisaWaktu / (1 * 60 * 60);
//sisaWaktu = sisaWaktu % (1 * 60 * 60);
////Menit
//menit = sisaWaktu / (1 * 60);
//sisaWaktu = sisaWaktu % (1 * 60);
////Detik
//detik = sisaWaktu / 1;
//sisaWaktu = sisaWaktu % 1;
//
//printf("Sisa waktu anda sebesar %lld tahun %lld bulan %lld minggu %lld hari, %lld jam, %lld menit, %lld detik.\n", tahun, bulan, minggu, hari, jam, menit, detik);

//Fibonacci
/*int a=0, b=1, c,n;
printf("Input n number of fibonacci: ");
scanf_s("%d", &n);
printf("\nThe first %d number of fibonacci: ", n);
for (int i = 1; i <= n; i++) {
	c = a + b;
	printf("%d ", c);
	a = b;
	b = c;
}*/
	/*int checkout = 0, checkout1 = 0, checkout2 = 0, checkout3 = 0, checkout4 = 0, menuDirection, exitPoint, payment;
	int inputQty[4] = { 0,0,0,0 };
	int counter1 = 0, counter2 = 0, counter3 = 0, counter4 = 0, change = 0;
	do {

		printf("1. Rendang [Rp 30.000,00] [%d]\n", counter1);
		printf("2. Soto [Rp 15.000,00] [%d]\n", counter2);
		printf("3. Sate Ayam [Rp 20.000,00] [%d]\n", counter3);
		printf("4. Teh [Rp 5.000,00] [%d]\n", counter4);
		printf("5. Reset All\n");
		printf("0. Checkout\n");
		checkout = checkout1 + checkout2 + checkout3 + checkout4;
		printf("Total: %d\n", checkout);
		printf("Input your choice here >>");
		scanf_s("%d", &menuDirection);
		switch (menuDirection)
		{
		case 1: do {
			printf("Insert quantity: \n");
			scanf_s("%d", &inputQty[0]);
			if (inputQty[0] == 0) { counter1 = inputQty[0] + 0; }
			else { counter1 += inputQty[0]; }
			checkout1 = counter1 * 30000;
		} while (counter1 < 0);
		break;
		case 2: do {
			printf("Insert quantity: \n");
			scanf_s("%d", &inputQty[1]);
			if (inputQty[1] == 0) { counter2 = inputQty[1] + 0; }
			else { counter2 += inputQty[1]; }
			checkout2 = counter2 * 15000;
		} while (counter2 < 0);
		break;
		case 3: do {
			printf("Insert quantity: \n");
			scanf_s("%d", &inputQty[2]);
			if (inputQty[2] == 0) { counter3 = inputQty[2] + 0; }
			else { counter3 += inputQty[2]; }
			checkout3 = counter3 * 20000;
		} while (counter3 < 0);
		break;
		case 4: do {
			printf("Insert quantity: \n");
			scanf_s("%d", &inputQty[3]);
			if (inputQty[3] == 0) { counter4 = inputQty[3] + 0; }
			else { counter4 += inputQty[3]; }
			checkout4 = counter4 * 5000;
		} while (counter4 < 0);
		break;
		}

	} while (menuDirection != 0);
	printf("Summary: \n\n");
	printf("Rendang %dx : %d\n", counter1, checkout1);
	printf("Soto %dx : %d\n", counter2, checkout2);
	printf("Sate Ayam %dx : %d\n", counter3, checkout3);
	printf("Teh %dx : %d\n", counter4, checkout4);
	printf("\n----------------------------------------------------------------\n\n");
	checkout = checkout1 + checkout2 + checkout3 + checkout4;
	printf("Total: %d\n\n", checkout);

	do {
		printf("Payment: ");
		scanf_s("%d", &payment);
		change = payment - checkout;
	} while (payment < checkout);
	printf("\nChange: %d\n", change);
	printf("\t\t\tThank you, please come again.");*/

	//cara gue
	/*int menuQty[4] = { 0, 0, 0, 0 };
	int total, menu, paymentt, temp;
	do {
		total = 30000 * menuQty[0] + 15000 * menuQty[1] + 20000 * menuQty[2] + 5000 * menuQty[3];
		do {
			printf("1. Rendang [Rp 30.000,00] [%d]\n", menuQty[0]);
			printf("2. Soto [Rp 15.000,00] [%d]\n", menuQty[1]);
			printf("3. Sate Ayam [Rp 20.000,00] [%d]\n", menuQty[2]);
			printf("4. Teh [Rp 5.000,00] [%d]\n", menuQty[3]);
			printf("0. Checkout\n");
			printf("Total payment: %d\n", total);
			printf("Input your choice here >>");
			scanf_s("%d", &menu);
		} while (menu > 4 || menu < 0);
		if (menu >= 1 && menu <= 4) {
			do {
				printf("Insert quantity: \n");
				scanf_s("%d", &temp);
				if (menuQty[menu - 1] + temp >= 0) menuQty[menu - 1] += temp;
			} while (menuQty[menu - 1] + temp < 0);
		}
	} while (menu!=0);
	printf("Total: %d\n\n", total);
	do {
		printf("Payment: ");
		scanf_s("%d", &paymentt);
	} while (paymentt < total);
	printf("\nChange: %d\n", paymentt-total);
	printf("\t\t\tThank you, please come again.");*/

//1 − 2 + 3 − 4 + ⋯
	/*int maxNumber, result=0,odd=0,even=0, test;
	cin >> maxNumber;
	for (int ave = 1; ave <= maxNumber; ave++) {
		result += pow(-1, ave+1)*ave;
	}
	cout << result<<endl;
	for (int ave = 1; ave <= maxNumber; ave++) {
		if (1==ave % 2) {
			odd+= ave;
		}
		else
		{
			even += ave;
		}
	}
	test = odd-even;
	cout << test;*/
	
	//Choosing a Smartphone https://pandaoj.com/problem/INC2014A
	/*int testCase, aplikasiMemori, sum=0, data;
	cin >> testCase;
	for (int counter1 = 1; counter1 <= testCase; ++counter1)
	{
		cin >> data;
		for (int batasan = 1; batasan <= data; batasan++) {
			cin >> aplikasiMemori;
			sum += aplikasiMemori;
			
		}
		if (sum <= 16000) {
			cout << "Case #" << counter1 << ": 16GB" << endl;
		}
		else if (sum <= 32000) {
			cout << "Case #" << counter1 << ": 32GB"<<endl;
		}
		else if (sum <= 64000) {
			cout << "Case #" << counter1 << ": 64GB"<<endl;
		}
		else if (sum <= 128000) {
			cout << "Case #" << counter1 << ": 128GB" << endl;
		}
		sum = 0;
	}*/
	
	//Print N number
	/*int inputn, inputlimit, max=1, count=1;
	cin >> inputn >> inputlimit;
	for (int i = 1; i <= inputn; i++) {
			if (max <= 1) 
			{
				max += 2;
			}
			else if (max >= inputlimit)
			{
				max -= 1;
			}
		cout << max << endl;
	}*/
	/*int n, b, swing = 1, toggle = 1;
	scanf_s("%d %d", &n, &b); fflush(stdin);
	for (int i = 1; i <= n; i++) {
		printf("%d", swing);

		if (swing>b) toggle = 0;

		if (toggle == 1) swing += 2;
		else if (swing == 1) {
			toggle = 1;
			swing += 2;
		}
		else swing--;
		if (i != n) {
			printf("\n");
		}
	}*/



	/*int sum = 1, lim;
	cin >> lim;
	for (int i = 1; i <= lim; i++) {
		cout << sum;
		sum += i;
		if (i != lim) cout << " ";
		else cout << "\n";
	}*/
	//Maximum Wealth (Hampir bener tapi runtime error)
	/*int jumlahOrkay, hartanyaOrkay, max;
	cin >> jumlahOrkay;
	max = hartanyaOrkay;
	for (int counter1 = 0; counter1 < jumlahOrkay; counter1++) {
		cin >> hartanyaOrkay;
		if (hartanyaOrkay > max) {
			max = hartanyaOrkay;
		}
	}
	cout << max << endl;*/
	
	
	getchar();
	getchar();
	return 0;
}