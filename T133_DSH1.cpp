//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<ctype.h>
//#include<Windows.h>
//int counterEntry=0;
//struct order
//{
//	char pelanggan[100];
//	char indomie[100];
//	char topping[100];
//	char level[100];
//	int jumlah, topPrice, indPrice;
//	int subTotal;
//	int totalPrice;
//	int discount;
//	order *next;
//}*head,*tail,*curr;
//void initOrd(char pelanggan[], char indomie[], char topping[], char level[], int jumlah, int discount,int totalPrice)
//{
//	curr = (order*)malloc(sizeof(order));
//	curr->jumlah = jumlah;
//	curr->discount = discount;
//	curr->totalPrice = totalPrice;
//	strcpy(curr->pelanggan,pelanggan);
//	strcpy(curr->indomie,indomie);
//	strcpy(curr->topping,topping);
//	strcpy(curr->level,level);
//	curr->next = NULL;
//}
//void pushTail(char pelanggan[], char indomie[], char topping[], char level[], int jumlah, int discount,int totalPrice)
//{
//	initOrd(pelanggan,indomie,topping,level,jumlah,discount,totalPrice);
//	if(head==NULL)
//	{
//		head = tail = curr;
//	}
//	else
//	{
//		tail->next = curr;
//		tail = curr;
//	}
//}
//void printAll()
//{
//	if(counterEntry==0)
//	{
//		printf("No Data to be Found");
//	}
//	else
//	{
//		printf("\t\t\t--- ORDER LIST ---\n\n");
//		printf("==========================================================================================================\n");
//		printf("| %-4s| %-30s| %-8s| %-10s| %-10s| %-5s| %-7s| %-15s|","NO","Name","Indomie","Topping","Lv Spicy","Qty","Diskon","Total Price");
//		printf("\n==========================================================================================================\n");
//		curr = head;
//		int counter=0;
//		while(curr!=NULL)
//		{
//			counter++;
//			printf("| %-4d| %-30s| %-8s| %-10s| %-10s| %-5d| %-7d| Rp.%-12d|\n",counter, curr->pelanggan,curr->indomie,curr->topping,curr->level,curr->jumlah,curr->discount,curr->totalPrice);
//			
//			curr = curr->next;
//		}
//		printf("==========================================================================================================\n");
//	}
//}
//void spacing()
//{
//	for(int i=0; i<25; i++)
//		printf("\n");
//}
//void newOrder()
//{
//	order orderan;
//	int flag=0;
//	int panjangKata;
//	//Nama Pelanggan
//	do
//	{
//		printf("Input Your name [Must be 2 words]\t\t\t: ");
//		scanf("%[^\n]",orderan.pelanggan);
//		fflush(stdin);
//		panjangKata = strlen(orderan.pelanggan);
//		for(int i=0; i<panjangKata; i++)
//		{
//			if(isspace(orderan.pelanggan[0]))
//			{
//				flag=0;
//				break;
//			}
//			else if(isspace(orderan.pelanggan[i])&&isalnum(orderan.pelanggan[i+1]))
//			{
//				flag=1;
//				break;
//			}
//			else
//			{
//				flag=0;
//			}
//		}
//	}while(flag==0);
//	//Tipe Indomie
//	printf("\n");
//	do
//	{
//		printf("Input Type of The Indomie [Goreng | Kuah]\t\t: ");
//		scanf("%s", orderan.indomie);
//		fflush(stdin);
//	}while(strcmp(orderan.indomie,"Goreng")!=0&&strcmp(orderan.indomie,"Kuah")!=0);
//	//Level
//	printf("\n");
//	do
//	{
//		printf("Input Spicy Lv of The Indomie [Normal | SOSO | Maniac]\t: ");
//		scanf("%s", orderan.level);
//		fflush(stdin);
//	}while(strcmp(orderan.level,"Normal")!=0&&strcmp(orderan.level,"SOSO")!=0&&strcmp(orderan.level,"Maniac")!=0);
//	//Jumlah
//	printf("\n");
//	do
//	{
//		printf("Input Quantity of The New Item [1..3]\t\t\t: ");
//		scanf("%d", &orderan.jumlah);
//		fflush(stdin);
//	}while(orderan.jumlah<1||orderan.jumlah>3);
//	//Topping
//	printf("\n");
//	do
//	{
//		printf("Input Topping of the Indomie [Telor | Kornet | Keju]\t: ");
//		scanf("%s", orderan.topping);
//		fflush(stdin);
//	}while(strcmp(orderan.topping,"Telor")!=0&&strcmp(orderan.topping,"Kornet")!=0&&strcmp(orderan.topping,"Keju")!=0);
//	//Topping Price
//	if(strcmp(orderan.topping,"Telor")==0)
//		orderan.topPrice=3000;
//	else if(strcmp(orderan.topping,"Kornet")==0)
//		orderan.topPrice=4000;
//	else if(strcmp(orderan.topping,"Keju")==0)
//		orderan.topPrice=5000;
//	//Indomie Price
//	switch(orderan.jumlah)
//	{
//	case 1: orderan.indPrice=7000; break;
//	case 2: orderan.indPrice=12000; break;
//	case 3: orderan.indPrice=20000; break;
//	}
//	//Discount
//	if(strcmp(orderan.level,"Normal")==0)
//		orderan.discount=0;
//	else if(strcmp(orderan.level,"SOSO")==0)
//		orderan.discount=10;
//	else if(strcmp(orderan.level,"Maniac")==0)
//		orderan.discount=25;
//	//SubTotal
//	orderan.subTotal = orderan.indPrice+orderan.topPrice;
//	orderan.totalPrice = orderan.subTotal - (orderan.subTotal * ((float)orderan.discount/100));
//	pushTail(orderan.pelanggan,orderan.indomie,orderan.topping,orderan.level,orderan.jumlah,orderan.discount,orderan.totalPrice);
//	printf("\n\n\n---SUCCESS---");
//	counterEntry++;
//}
//void popTail()
//{
//	if(head==NULL)
//	{
//		printf("No Data!");
//	}
//	else if(head==tail)
//	{
//		curr = head;
//		head = tail = NULL;
//		free(curr);
//	}
//	else
//	{
//		order *temp = head;
//		while(temp->next !=tail)
//		{
//			temp = temp->next;
//		}
//		curr = tail;
//		tail = temp;
//		tail->next = NULL;
//		free(curr);
//	}
//}
//void popHead()
//{
//	if(head==NULL)
//	{
//		printf("No data!");
//	}
//	else if(head==tail)
//	{
//		curr = head;
//		head = tail = NULL;
//		free(curr);
//	}
//	else
//	{
//		curr = head;
//		head = head->next;
//		curr->next;
//		free(curr);
//	}
//}
//void popSearch(char pelanggan[])
//{
//	if(head==NULL)
//	{
//		printf("No Data!");
//	}
//	else if(strcmp(pelanggan,head->pelanggan)==0)
//	{
//		//Head
//		popHead();
//	}
//	else if(strcmp(pelanggan,tail->pelanggan)==0)
//	{
//		//Tail
//		popTail();
//	}
//	else
//	{
//		order *temp = head;
//		while(strcmp(pelanggan,temp->next->pelanggan)!=0)
//		{
//			temp = temp->next;
//		}
//		curr = temp->next;
//		temp->next = curr->next;
//		curr->next=NULL;
//		free(curr);
//	}
//}
//void displayTitle()
//{
//	Sleep(100);
//	printf("_________ _        ______   _______  _______ _________ _______\n");
//	Sleep(100);
//	printf("\\__   __/( (    /|(  __  \\ (  ___  )(       )\\__   __/(  ____ \\\n");
//	Sleep(100);
//	printf("   ) (   |  \\  ( || (  \\  )| (   ) || () () |   ) (   | (    \\/\n");
//	Sleep(100);
//	printf("   | |   |   \\ | || |   ) || |   | || || || |   | |   | (__\n");
//	Sleep(100);
//	printf("   | |   | (\\ \\) || |   | || |   | || |(_)| |   | |   |  __)\n");
//	Sleep(100);
//	printf("   | |   | | \\   || |   ) || |   | || |   | |   | |   | (\n");
//	Sleep(100);
//	printf("___) (___| )  \\  || (__/  )| (___) || )   ( |___) (___| (____/\\\n");
//	Sleep(100);
//	printf("\\_______/|/    )_)(______/ (_______)|/     \\|\\_______/(_______/\n");
//	printf("\n\n\t\t\t\tENTER TO CONTINUE");
//}
//void mainMenu()
//{
//	
//	for(int i=1; i<=12; i++)
//	{
//		printf("=");
//	}
//	printf("\n|BuKanGoJek|\n");
//	for(int i=1; i<=12; i++)
//	{
//		printf("=");
//	}
//	printf("\n\n");
//}
//void goodbye()
//{
//	Sleep(50);
//	printf("_________                  _____     _________   ______              ___________________________\n");
//	Sleep(50);
//	printf("__  ____/_________________ __  /___________  /   ___  /______  __    ___  __/_<  /_|__  /_|__  /\n");
//	Sleep(50);
//	printf("_  /    __  ___/  _ \\  __ `/  __/  _ \\  __  /    __  __ \\_  / / /    __  /  __  /___/_ <___/_ < \n");
//	Sleep(50);
//	printf("/ /___  _  /   /  __/ /_/ // /_ /  __/ /_/ /     _  /_/ /  /_/ /     _  /   _  / ____/ /____/ / \n");
//	Sleep(50);
//	printf("\\____/  /_/    \\___/\\__,_/ \\__/ \\___/\\__,_/      /_.___/_\\__, /      /_/    /_/  /____/ /____/\n");
//	Sleep(50);
//	printf("                                                        /____/                                  \n");
//	printf("\n\n\t\t\Press ENTER to Continue...");
//}
//int main()
//{
//	int menuDirection, flag=0;
//	char nama[100];
//	displayTitle();
//	getchar();
//	do
//	{
//		system("cls");
//		spacing();
//		mainMenu();
//		printf("1. View Order\n");
//		printf("2. Order\n");
//		printf("3. Take Away\n");
//		printf("4. Exit\n");
//		printf(">> Input your choice : ");
//		scanf("%d", &menuDirection);
//		fflush(stdin);
//		switch(menuDirection)
//		{
//		case 1: //Print All Order
//			system("cls");
//			if(counterEntry==0)
//			{
//				spacing();
//				printf("No Data to be Found");
//			}
//			else
//			{
//				spacing();
//				printAll();			
//			}
//			getchar();
//			break;
//		case 2: //New Order
//			system("cls");
//			spacing();
//			newOrder();
//			getchar();
//			break;
//		case 3: //Delete Order
//			system("cls");
//			spacing();
//			if(counterEntry==0)
//			{
//				printf("No Data to be Found!");
//			}
//			else
//			{
//				printAll();
//				printf("\n");
//				do
//				{
//					flag=0;
//					printf("Input Customer Name to Take Away        : ");
//					scanf("%[^\n]", nama);
//					fflush(stdin);
//					order *temp = head;
//					for(int i=0; i<counterEntry&&temp!=NULL; i++)
//					{
//						if(strcmp(nama,temp->pelanggan)!=0)
//						{	
//							temp = temp->next;
//							flag=0;
//						}
//						else
//						{
//							flag=1;
//							break;
//						}
//					}
//				}while(flag==0);
//				popSearch(nama);
//				printf("\n\n---SUCCESS---");
//				counterEntry--;
//			}
//			getchar();
//			break;
//		}
//	}while(menuDirection!=4);
//	system("cls");
//	Sleep(30);
//	//Bye
//	goodbye();
//	getchar();
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>



struct Mhs {
	char nim_[101];
	char nama_[101];
	int nilai_;
};


int main()
{

	int data;
	int count = 0;
	struct Mhs mhs[101];
	struct Mhs temp_mhs;
	scanf("%d", &data);
	rewind(stdin);

	for (int i = 0; i < data; i++)
	{
		scanf("%s %s %d", &mhs[i].nim_, &mhs[i].nama_, &mhs[i].nilai_);
		rewind(stdin);
		count++;
	}

	if (count > 0) {
		temp_mhs = mhs[0];
	}
	for (int i = 1; i < count; i++)
	{
		if (temp_mhs.nilai_ < mhs[i].nilai_) {
			temp_mhs = mhs[i];
		}
		else if (temp_mhs.nilai_ == mhs[i].nilai_) {

			if (strcmp(temp_mhs.nama_, mhs[i].nama_) > 0) {
				temp_mhs = mhs[i];
			}
			else if (temp_mhs.nim_ > mhs[i].nim_) {
				temp_mhs = mhs[i];
			}

		}
	}
	printf("%s %s %d\n", temp_mhs.nim_, temp_mhs.nama_, temp_mhs.nilai_);

	getchar();
	return 0;
}