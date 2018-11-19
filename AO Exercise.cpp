#include<stdio.h>


int main() {

	//Latihan 1.1
	for (int i = 15; i >= 5; i--) { //for (inisialisasi, kondisi, increment/decrement)
		if (i % 3 == 0)//i modulus 3 = 0/ i habis dibagi 3
			printf("%d", i);//print i sebanyak 1
	}
	printf("\n");//new line
	//Latihan 1.2
	int i = 5;//inisialisasi variabel
	while (i <= 15) {//while(kondisi/syarat)
		if (i % 3 == 0)//i modulus 3 = 0
			printf("%d ", i);//cetak i sebanyak 1
		i++;//post-increment
	}
	printf("\n");

	//Latihan 2.1 (Persegi)
	int x;//karena minta input user
	scanf_s("%d", &x); //minta input angka dari user, mis x=3
	fflush(stdin); //menghapus memori buffer
	getchar();//menahan layar
	for (int a = 0; a < x; a++) {
		for (int i = 0; i < x; i++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n");
	
		//Latihan 2.2(Persegi Panjang)
		int baris, kolom;
		printf("masukkan nilai baris >> "); scanf_s("%d", &baris); fflush(stdin); getchar();
		printf("masukkan nilai kolom >> "); scanf_s("%d", &kolom); fflush(stdin); getchar();

		for (int y = 0; y < baris; y++) {
			for (int x = 0; x < kolom; x++) {
				printf("#\t");
			}
			printf("\n");
		}
		printf("\n");

		//Latihan 2.3()
		/*int x;//karena minta input user
		scanf_s("%d", &x); //minta input angka dari user, mis x=3
		fflush(stdin); //menghapus memori buffer
		getchar();//menahan layar*/
		for (int a = 0; a < x; a++) { //variable baris = a
			for (int i = 0; i < a + 1; i++) { //variable kolom = i
				printf("*");
			}
			printf("\n");
		}
		printf("\n");

		//Latihan 2.4 (Persegi Bolong)
		/*int x;
		scanf_s("%d", &x);
		fflush(stdin); getchar();*/
		int a;
		int y;
		for (y = 1; y <= x; y++) {
			for (a = 1; a <= x; a++) { //for kolom
				if (y == 1 || y == x || a == 1 || a == x) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
			printf("\n");
		}
		printf("\n");

		//Latihan 2.5 (Jajargenjang)
		/*int x;//karena minta input user
		scanf_s("%d", &x); //minta input angka dari user, mis x=3
		fflush(stdin); //menghapus memori buffer
		getchar();//menahan layar*/
		for (int a = 0; a < x; a++) { //variable baris = a
			for (int i = 0; i < x - a; i++) { //variable kolom = i, what the fuck?
				printf(" ");
			}
			for (int d = 0; d < 1 + (x - 1) * 2; d++) { //sementara
				printf("*");
			}
			printf("\n");
		}
		//Latihan 2.6 (Piramid)
		/*int x;//karena minta input user
		scanf_s("%d", &x); //minta input angka dari user, mis x=3
		fflush(stdin); //menghapus memori buffer
		getchar();//menahan layar*/
		for (int a = 0; a < x; a++) { //variable baris = a //percabangan
			for (int i = 0; i < x - a; i++) { //variable kolom = i, what the fuck? //cabang 1 (segitiga inverse)
				printf("=");
			}
			for (int d = 0; d < 1 + (a * 2); d++) { //cabang 2 (segitiga kelipatan ganjil)
				printf("*");
			}
			printf("\n");
		}
		//Latihan 2.7 (Bentuk X)
		/*int x;//karena minta input user
		scanf_s("%d", &x); //minta input angka dari user, mis x=3
		fflush(stdin); //menghapus memori buffer
		getchar();//menahan layar*/
		for (int i = 0; i < x; i++) {
			for (int j = 0; j < x; j++) {
				if ((j == i) || (j == (x - i - 1))) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}printf("\n");
		}
		/*for i in range(leng):
		for j in range(leng):
			if (i == j) | (i == leng-j-1):
				print('*', end='')
			else: print(' ', end='')
		print()*/
		//*****
		//****
		//***
		//**
		//*
		//syntaxnya lupa

		//* . *   * batas 1 == baris 1 >> for (int i=0;i<1;i++)
		//*   * . * batas 2 == baris 2 >> for (int i=0;i<2;i++)
		//*   *   * batas 3 == baris 3 >> for (int i=0;i<x;i++)

		/*for(int i=0;i<=10;i++){
		printf("%d x 8 = %d\n", i, i*8);
		}*/


		//Latihan 3
		/*int h=8;
		for (int i = 0; i <= 10; i++) {
			printf("%d x %d = %d\n", i, h, i*h);
		}*/

		//Latihan 4
		/*int g;
		scanf_s("%d", &g); fflush(stdin); getchar();
		for(int i=0;i<=10;i++){
		printf("%d x %d = %d\n", i, h, i*h);

		}*/

		//Latihan 5
		//int ammount;
		//char symbol;
		//printf("Ammount: \n");
		//scanf_s("%d", &ammount); fflush(stdin); getchar();
		//printf("Symbol: \n");
		//scanf_s("%c", &symbol); fflush(stdin); getchar();

		//for (int i = 0; i<ammount; i++)//ini artinya apa?
		//{
		//	printf("%c", symbol);
		//}
		//printf("\n");
		//Latihan 6.1 (Bilangan Prima(True or False))
		/*int calon_prima;
		printf("Masukkan angka yang dianggap prima: \n");
		scanf_s("%d", &calon_prima);
		if (calon_prima%calon_prima == 0 && calon_prima % 1 == 0) { //:thinking: for (int siprima = 0;
			printf("true");
		}
		else {
			printf("false");
		}
		printf("\n");*/
		//Latihan 6.2 (Bilangan Prima(Pencetakan Deret))
		/*int k, o, cek;
		printf("Masukkan Angka Terbesar: \n");
		scanf_s("%d", &o);
		printf("Masukkan Angka Terkecil: \n");
		scanf_s("%d", &k);
		for (int asumusiknyaanjir = o; asumusiknyaanjir >= k; asumusiknyaanjir--)//for (inisialisasi, kondisi, increment/decrement)
		{
			if (asumusiknyaanjir % 2 == 0 && asumusiknyaanjir%asumusiknyaanjir == 0 && ) {
				printf("%d", asumusiknyaanjir);
			}
			printf(" ");
		}*/
		/*int batas, asu, cek, dih;

		printf("PROGRAM UNTUK MENAMPILKAN DERET BILANGAN PRIMA\n\n");
		printf("Tampilkan Sampai Batas Atas : \n");
		scanf_s("%d", &batas);
		printf("\n");
		printf("Deret Bilangan Prima sampai angka %d adalah: ", batas);

		for (asu = 2; asu <= batas; asu++) {
			cek = 0;
			for (dih = 2; dih <= asu; dih++) { //kenapa di sini dipanggilnya si asu bukan si dih? oiya
				if (asu % dih == 0) {
					cek = 1;
				}
			}
			if (cek != 0) {
				printf("%d ", asu);
			}
		}*
		getchar();
	/*
	int main(){
	printf("Soal 1:\nBilangan Kelipatan 3 dari 5-15: ");
	for(int i=5;i<=15;i++){
	if(i%3==0){
	printf("%d ", i);
	}
	}

	printf("\nTekan Enter untuk melanjutkan ke soal berikutnya");
	getchar();

	int s;
	printf("\n\nSoal 2:\nInput sisi persegi: ");
	scanf("%d", &s); fflush(stdin);

	for(int i=0;i<s;i++){
	for(int j=0;j<s;j++){
	printf("*");
	}
	printf("\n");
	}

	printf("\nTekan Enter untuk melanjutkan ke soal berikutnya");
	getchar();


	printf("\nSoal 3:\nTabel perkalian 8: \n");
	for(int i=0;i<=10;i++){
	printf("%d x 8 = %d\n", i, i*8);
	}

	printf("\nTekan Enter untuk melanjutkan ke soal berikutnya");
	getchar();

	int x;
	printf("\nSoal 4:\nTabel perkalian berapa? ");
	scanf("%d", &x); fflush(stdin);
	for(int i=0;i<=10;i++){
	printf("%d x %d = %d\n", i, x, i*x);
	}

	printf("\nTekan Enter untuk melanjutkan ke soal berikutnya");
	getchar();

	char ch;
	printf("\nSoal 5:\nAmmount: ");
	scanf("%d", &x); fflush(stdin);
	printf("Symbol: ");
	scanf("%c", &ch); fflush(stdin);
	for(int i=0;i<x;i++){
	printf("%c", ch);
	}

	printf("\nSelesai ^.^");
	getchar();
	return 0;
	}
	*/

		int start, end, flag;
		printf("Input range [start end] >> "); //ini gimana cara bacanya? ooo
		scanf_s("%d %d", &start, &end); fflush(stdin); getchar();

		for (int i = start; i <= end; i++) {
			flag = 0;
			for (x = 1; x < i; x++) {
				if (i%x == 0) {
					flag++; //ini?
				}
			}
			if (flag == 1) {
				printf("%d ", i);
			}
		}

		getchar();
		return 0;
	}



