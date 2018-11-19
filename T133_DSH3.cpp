#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<Windows.h>
struct order
{
	int priority;
	char pelanggan[100];
	char martabak[100];
	char topping[100];
	int price;
	char prioritas[100];
	order *next, *prev;
} *head,*tail,*curr;
int counterEntry=0;
void pushTail(int priority, char pelanggan[],char martabak[],char topping[],int price, char prioritas[])
{
	curr = (order*)malloc(sizeof(order));
	curr->priority = priority;
    curr->price = price;
    strcpy(curr->pelanggan, pelanggan);
    strcpy(curr->martabak,martabak);
    strcpy(curr->topping,topping);
    strcpy(curr->prioritas,prioritas);
	curr->next = curr->prev = NULL;
	if(!head)
	{
		head = tail = curr;
	}
	else
	{
		tail->next = curr;
		curr->prev = tail;
		tail = curr;
		tail->next=NULL;
	}
}
void pushTail(order *curr)
{
	tail->next = curr;
	curr->prev = tail;
	tail = curr;
	tail->next=NULL;
}
void pushHead(int priority, char pelanggan[],char martabak[],char topping[],int price, char prioritas[])
{
	curr = (order*)malloc(sizeof(order));
	curr->priority = priority;
    curr->price = price;
    strcpy(curr->pelanggan, pelanggan);
    strcpy(curr->martabak,martabak);
    strcpy(curr->topping,topping);
    strcpy(curr->prioritas,prioritas);
	curr->next = curr->prev = NULL;
	if(!head)
	{
		head = tail = curr;
	}
	else
	{
		head->prev = curr;
		curr->next = head;
		head = curr;
		head->prev=NULL;
	}
}
void pushHead(order *curr)
{
	head->prev = curr;
	curr->next = head;
	head = curr;
	head->prev=NULL;
}
void pushMid(int priority, char pelanggan[],char martabak[],char topping[],int price, char prioritas[])
{
	curr = (order*)malloc(sizeof(order));
	curr->priority = priority;
    curr->price = price;
    strcpy(curr->pelanggan, pelanggan);
    strcpy(curr->martabak,martabak);
    strcpy(curr->topping,topping);
    strcpy(curr->prioritas,prioritas);
	curr->next = curr->prev = NULL;
	if(!head)
	{
		head=tail=curr;
	}
	else
	{
		if (head==tail) 
		{		
			pushTail(curr);
		}
		else 
		{
			if (head->priority==0)
			{
				if (priority==1) pushHead(curr);
				else pushTail(curr);
			}
			else if (head->priority==1);
			{
				if (priority==0) {pushTail(curr);}

				else 
				{
					
					struct order *temp = (order*)malloc(sizeof(order));
					temp = head;
					while(temp->priority!=0) {temp=temp->next;}
					curr->next=temp;
					curr->prev=temp->prev;
					temp->prev->next=curr;
					temp->prev = curr;
				}
			}
		}
	}
}
void newOrder()
{
	int flag=0, panjangKata;
	order order;
	printf("--Insert Customer's Order--\n\n");
	//Nama Pelanggan
	do
	{
		flag=0;
		printf("Customer's Name [5..30]: ");
		scanf("%[^\n]", order.pelanggan);
		fflush(stdin);
		panjangKata = strlen(order.pelanggan);
		if(panjangKata>=5&&panjangKata<=30)
		{
			flag=1;
		}
	}while(flag==0);
	//Nama Martabak
	do
	{
		flag=0;
		printf("Martabak's Name [5..30]: ");
		scanf("%[^\n]", order.martabak);
		fflush(stdin);
		panjangKata = strlen(order.martabak);
		if(panjangKata>=5&&panjangKata<=30)
		{
			flag=1;
		}
	}while(flag==0);
	//Topping
	do
	{
		printf("Martabak's Topping [Mozarella|Ovomaltine|Red Velvet Oreo]: ");
		scanf("%[^\n]", order.topping);
		fflush(stdin);
	}while(strcmp(order.topping,"Mozarella")!=0&&strcmp(order.topping,"Ovomaltine")!=0&&strcmp(order.topping,"Red Velvet Oreo")!=0);
	//Martabak Price
	do
	{
		printf("Martabak's Price [Can't be lower than 10000]: ");
		scanf("%d", &order.price);
		fflush(stdin);
	}while(order.price<10000);
	//Priority Set
	do
	{	
		flag=0;
		printf("Customer's Priority [VIP|REGULAR][Case Sensitive]: ");
		scanf("%s",order.prioritas);
		fflush(stdin);
		if(strcmp(order.prioritas,"VIP")==0||strcmp(order.prioritas,"REGULAR")==0)
		{
			flag=1;
		}
	}while(flag==0);
	if(strcmp(order.prioritas,"VIP")==0)
	{
		order.priority=1;
	}
	else if(strcmp(order.prioritas,"REGULAR")==0)
	{
		order.priority=0;
	}
	counterEntry++;
	pushMid(order.priority,order.pelanggan,order.martabak,order.topping,order.price,order.prioritas);
	printf("\nOrder success !");
}
void spacing()
{
	for(int i=1; i<=25; i++)
	{
		printf("\n");
	}
}
void popHead()
{
	curr = (order*)malloc(sizeof(order));
	if(head==NULL)
	{
		printf("No Data");
	}
	else
	{
		if(head==tail)
		{
			head = tail = NULL;
		}
		else
		{
			head = head->next;
			free(head->prev);
			head->prev = NULL;
		}
	}
}
void printAll()
{
	if(counterEntry==0)
	{
		printf("--No Waiting List--");
	}
	else
	{
		
		curr = head;
		int counter=0;
		while(curr!=NULL)
		{
			counter++;
			printf("%d.\n", counter);
			printf("-------------------------\n");
			printf("Customer's Name: %s\n", curr->pelanggan);
			printf("Martabak's Name: %s\n", curr->martabak);
			printf("Martabak's Topping: %s\n", curr->topping);
			printf("Martabak's Price: %d\n", curr->price);
			printf("Customer's Priority: %s\n\n",curr->prioritas);
			curr = curr->next;
		}
		
	}
}
void printFirst()
{
		if(counterEntry==0)
	{
		printf("-- There's no martabak data in the menu --");
	}
	else
	{
		curr=head;
		printf("Finish baking martabak..\n\n");
		printf("Customer's Name: %s\n", curr->pelanggan);
		printf("Martabak's Name: %s\n", curr->martabak);
		printf("Martabak's Topping: %s\n", curr->topping);
		printf("Martabak's Price: %d\n", curr->price);
		printf("Customer's Priority: %s\n\n",curr->prioritas);
		printf("\npress ENTER to continue..");
		counterEntry--;
		popHead();
	}
}
void goodbye()
{
	Sleep(50);
	printf("_________                  _____     _________   ______              ___________________________\n");
	Sleep(50);
	printf("__  ____/_________________ __  /___________  /   ___  /______  __    ___  __/_<  /_|__  /_|__  /\n");
	Sleep(50);
	printf("_  /    __  ___/  _ \\  __ `/  __/  _ \\  __  /    __  __ \\_  / / /    __  /  __  /___/_ <___/_ < \n");
	Sleep(50);
	printf("/ /___  _  /   /  __/ /_/ // /_ /  __/ /_/ /     _  /_/ /  /_/ /     _  /   _  / ____/ /____/ / \n");
	Sleep(50);
	printf("\\____/  /_/    \\___/\\__,_/ \\__/ \\___/\\__,_/      /_.___/_\\__, /      /_/    /_/  /____/ /____/\n");
	Sleep(50);
	printf("                                                        /____/                                  \n");
	printf("\n\n\t\t\Press ENTER to Continue...");
}
void welcome()
{
	Sleep(100);
	printf(" __  __          _        _          _     ___ _\n");
	Sleep(100);
	printf("|  \\/  |__ _ _ _| |_ __ _| |__  __ _| |__ / __| |_  ___ _ __\n");
	Sleep(100);
	printf("| |\\/| / _` | \'_|  _/ _` | \'_ \\/ _` | / / \\__ \\ \' \\/ _ \\ \'_ \\\n");
	Sleep(100);
	printf("|_|  |_\\__,_|_|  \\__\\__,_|_.__/\\__,_|_\\_\\ |___/_||_\\___/ .__/\n                                                       |_|\n\n\n\t\t\tpress ENTER to continue");
}
int main()
{
	int menuDirection;
	welcome();
	getchar();
	do
	{
		system("cls");
		spacing();
		printf("---Martabak Shop---\n\n1. Insert order\n");
		printf("2. View waiting list\n");
		printf("3. Finish waiting\n");
		printf("4. Exit\n>> ");
		scanf("%d", &menuDirection);
		fflush(stdin);
		switch(menuDirection)
		{
		case 1://New Order
			system("cls");
			spacing();
			newOrder();
			getchar();
			break;
		case 2://View
			system("cls");
			spacing();
			printAll();
			getchar();
			break;
		case 3://Delete
			system("cls");
			spacing();
			printFirst();
			getchar();
			break;
		}
	}while(menuDirection!=4);
	system("cls");
	goodbye();
	getchar();
	return 0;
}