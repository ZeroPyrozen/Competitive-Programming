#include <stdio.h>
#include <stdlib.h>
#define plong getchar(); fflush(stdin); 
//step 1 invalid preprocessor command 'incude‟ change it to include 
//step 2 expected a filename, found 'identifier‟ change it to <stdio.h>

int main()
{
	/*printf("halo gan"); //biar programnya ga langsung terminate, kita minta buffer dulu
	getchar(); //jadi minta enter dulu baru programnya keluar, skrg baru coba debug*/
	/*int alas;
	int tinggi;
	int luas;

	printf("ISI ALAS GBLK >> ");
	scanf("%d", &alas);
	fflush(stdin);

	printf("ISI TINGGINYA WOE >> ");
	scanf("%d", &tinggi);
	fflush(stdin);

	luas=(alas*tinggi)/2; //:^)

	printf("Luas s3 dengan alas %d dan tinggi %d adalah %d",alas, tinggi, luas);
	//hackerman ea
	getchar();//what the fuck?*/
	/*char ID[127];
	int age;
	printf("ID = ");
	scanf("%s", ID); plong;
	printf("Age = ");
	scanf("%d", &age); plong;
	printf("Hi!Binusian!!\n");
	printf("Your ID = %s \n", ID);
	printf("Your Age = %d \n", age);
	getchar();
	getchar();
	return 0;*/

	/*char name[25];//karakter nama
	char addr[50];//karakter alamat
	printf("Name : "); //nama
	scanf("%[^\n]", name); plong;//input
	printf("Addr : "); //alamat
	scanf("%[^\n]", addr); plong; //input
	//hasil dibawah
	printf("Data you've inputted: \n");
	printf("Name : %s \n", name);
	printf("Addr : %s \n", addr);
	getchar();
	getchar();
	return 0;*/
	
	/*char grade;
	printf("Ya'll grade:");//input nilai lu
	grade = getchar();
	printf("ini nilai lu = %c \n", grade);
	getchar();
	getchar();*/

	/*char a; printf("a = "); 
	scanf("%c", &a); 
	fflush(stdin); 
	printf("Data you have inputed : "); 
	putchar('\n');//menampilkan 1 karakter dan tidak mengandung escape sequence 
	putchar(a); 
	getchar();
	getchar();
	return 0;*/

	/*char name[25] = "Sky"; //Latihan 2
	printf("\t\t========================== = \n");
	//step 3 newline in constant add “ after printf( 
	printf("\t\t%%Welcome to Bina Nusantara%%\n"); 
	//step 4 output shows that we need to add % behind to print % (%% = %) 
	printf("\t\t===========================\n"); 
	printf("\n\r======================================================"); 
	
	printf("\nWish u have a cool\excellent programming skill, %s!!!\n", name); 
	//step 5 'ame' : undeclared identifier change it to name 
	printf("======================================================\n"); 
	//step 6 'pritf': identifier not found change it to printf 
	printf("\n\nPress ENTER to exit!!%c %c Algoritm !!!",1,3); 
	getchar(); 
	//step 7 gethar: identifier not found change it to getchar return 0;*/

		/*char name[100];//Latihan 3
		printf("\t\t\t\t\tBina Nusantara Library System\t\t\t\n");
		printf("\t\t\t\t\t\t*-*-*-*-*-*-*-*-*\t\t\t\t\t\n\n");
		printf("Please enter your name : ");
		scanf("%[^\n]", name);
		fflush(stdin);
		printf("\n\nHi! %s, This is a quote for you.....\n\n", name);
		getchar();
		printf("\n\nTrying to forget someone you love is like trying to remember someone you never knew\n\n", 3);
		printf("Press Enter to other quotes...\n\n");
		getchar();
		printf("\n\nEventually, all the pieces will fall into place.Until then..laugh at the confusion, live for the moment, and know that everything happens for the reason\n\n" ,  3);
		printf("\n\nIf everything happened when and how we wanted it to, nothing would be worth waiting for..\n\n",3);
		printf("Welcome to C language... Good Luck!!!!");
		getchar();
		return 0;*/

	char name[100] = "Sky";
		printf("\nhalo %s", name);
		getchar();
}