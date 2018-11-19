#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<conio.h>
#include<math.h>
#include<time.h>
#include<string.h>

int main()
{
	int checkout = 0, checkout1 = 0, checkout2 = 0, checkout3 = 0, checkout4 = 0, menuDirection, payment;
	int inputQty[5] = { 0,0,0,0,0 };
	int counter1 = 0, counter2 = 0, counter3 = 0, counter4 = 0, change = 0, counter5 = 0;
	do {
		for (int spasi = 0; spasi <= 24; spasi++) {
			printf("\n"); //Spasi 25
		}
		printf("\t\t\t[Virtual Warteg]\t\t\t\t\t\t\t\t\n\n\n");
		printf("1. Rendang		[Rp 30.000,00]	[%d]\n", counter1);
		printf("2. Soto			[Rp 15.000,00]	[%d]\n", counter2);
		printf("3. Sate Ayam		[Rp 20.000,00]	[%d]\n", counter3);
		printf("4. Teh			[Rp  5.000,00]	[%d]\n", counter4);
		printf("5. Reset All\n");
		printf("0. Checkout\n");
		checkout = checkout1 + checkout2 + checkout3 + checkout4;
		printf("Total: Rp %d\n", checkout);
		printf("Input your choice here: ");
		scanf_s("%d", &menuDirection);
		switch (menuDirection) 
		{
		case 1: do { //Menu Rendang
			printf("\tRendang [Rp 30.000,00]\n");
			printf("\tInsert quantity: ");
			scanf_s("%d", &inputQty[0]);
			if (inputQty[0] == 0) { counter1 = inputQty[0] + 0; }
			else { counter1 += inputQty[0]; }
			checkout1 = counter1 * 30000;
		} while (counter1 < 0);
		break;
		case 2: do { //Menu Soto
			printf("\tSoto [Rp 15.000,00]\n");
			printf("\tInsert quantity: ");
			scanf_s("%d", &inputQty[1]);
			if (inputQty[1] == 0) { counter2 = inputQty[1] + 0; }
			else { counter2 += inputQty[1]; }
			checkout2 = counter2 * 15000;
		} while (counter2 < 0);
		break;
		case 3: do { //Menu Sate Ayam
			printf("\tSate Ayam [Rp 20.000,00]\n");
			printf("\tInsert quantity: ");
			scanf_s("%d", &inputQty[2]);
			if (inputQty[2] == 0) { counter3 = inputQty[2] + 0; }
			else { counter3 += inputQty[2]; }
			checkout3 = counter3 * 20000;
		} while (counter3 < 0);
		break;
		case 4: do { //Menu Teh
			printf("\tTeh [Rp 5.000,00]\n");
			printf("\tInsert quantity: ");
			scanf_s("%d", &inputQty[3]);
			if (inputQty[3] == 0) { counter4 = inputQty[3] + 0; }
			else { counter4 += inputQty[3]; }
			checkout4 = counter4 * 5000;
		} while (counter4 < 0);
		break;
		case 5: do { //Reset Data
			printf("Reset All? [0]No|Yes[1] : ");
			scanf_s("%d", &inputQty[5]);
			if (inputQty[5] == 1) {
				counter1 = 0, counter2 = 0, counter3 = 0, counter4 = 0;
				}
			} while (counter5 < 0);
			break;
		}
		system("cls");
	} while (menuDirection != 0);
	printf("[Summary] \n\n");
	printf("Rendang		%dx		: Rp %d\n", counter1, checkout1);
	printf("Soto		%dx		: Rp %d\n", counter2, checkout2);
	printf("Sate Ayam	%dx		: Rp %d\n", counter3, checkout3);
	printf("Teh		%dx		: Rp %d\n", counter4, checkout4);
	printf("\n=================================================\n\n");
	checkout = checkout1 + checkout2 + checkout3 + checkout4;
	printf("Total: %d\n\n", checkout);

	do {
		printf("Payment: ");
		scanf_s("%d", &payment);
		change = payment - checkout;
		if (payment < checkout) {
			printf("\n\t\t\t\t\tInsufficient Money...\n");
		}
	} while (payment < checkout);
	printf("\nChange: %d\n", change);
	printf("\t\t\tThank you, please come again.");
	getchar();
	getchar();
	return 0;
}

/*Buat menu registrasi akun*/

//int n, reversedInteger = 0, remainder, originalInteger;

//printf("Enter an integer: ");
//scanf_s("%d", &n);

//originalInteger = n;

//// reversed integer is stored in variable 
//while (n != 0)
//{
//	remainder = n % 10;
//	reversedInteger = reversedInteger * 10 + remainder;
//	n /= 10;
//}

//// palindrome if orignalInteger and reversedInteger are equal
//if (originalInteger == reversedInteger)
//	printf("%d is a palindrome.", originalInteger);
//else
//	printf("%d is not a palindrome.", originalInteger);
