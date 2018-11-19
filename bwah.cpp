#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Data
{
	char name[50];
	int angka;
	Data *next;
}*head = NULL,*tail = NULL;

void pushHead(char name[], int angka)
{
	Data *node = (Data*)malloc(sizeof(Data));
	//(*node).angka=angka;
	node->angka = angka;
	strcpy(node->name,name);
	if(head==NULL)
	{
		head = tail = node;
	}
	else
	{
		node->next = head;
		head = node;
	}
	tail->next = NULL;

}

void viewList()
{
	Data *temp;
	temp = head;
	while(temp!= NULL)
	{
		printf("%d->",temp->angka);
		temp = temp->next;
	}
	printf("NULL");
}

void pop(int a)
{
	//cek apakah ada data di list
	if(head)
	{
		//kalau ada data
		if(head->angka == a)
		{
			//kalau angka yang didelete ada di head
			if(head==tail)
			{
				//kalau datanya tinggal 1 di list
				free(head);
				head = tail = NULL;
			}
			else
			{
				//kalau datanya lebih dari 1 di list
				Data *temp = head;
				head = head->next;
				free(temp);
			}
		}
		else if(tail->angka == a)
		{//kalau angka yang mau di delete ada di tail
			Data *temp = head;
			while(temp->next!=tail)
			{
				temp = temp->next;
			}
			free(tail);
			tail = temp;
			tail->next = NULL;
		}
		else
		{
			//kalau angka yang mau di delete ada ditengah
			Data *temp = head;
			while(temp!=NULL && temp->angka!=a)
			{
				temp = temp->next;
			}
			if(temp!=NULL)
			{
				//kalau angka yang dicari ketemu
				Data *temp2 = head;
				while(temp2->next!=temp)
				{
					temp2 = temp2->next;
				}
				temp2->next = temp->next;
				free(temp);
			}
		}
	}
	else
	{
		//kalau tidak ada data di list
		printf("Data Kosong");
	}
}

void skip()
{
	for(int i=0;i<26;i++)
		printf("\n");
}

void viewOrder()
{
	skip();
	int i = 1;
	printf("                 --- ORDER LIST ---					\n");
	printf("-------+--------------------------------+-----------\n");
	printf("| No.  | Name of Parts                  | Quantity |\n");
	printf("-------+--------------------------------+-----------\n");
	Data *temp = head;
	while(temp != NULL)
	{
		printf("| %-5d| %-30s | %-3d	   |\n", i, temp->name, temp->angka);
		temp = temp->next;
		i++;
	}
	printf("-------+--------------------------------+-----------\n");
}

void del(int choice) {
	Data *temp = head;

	for (int i = 1; i < choice - 1; i++) {
		temp = temp->next;
	}

	Data *temp2 = temp->next;
	temp->next = temp2->next;
	free(temp2);
}
//[12]->[14]->[100]->[12]
//1		2		3		4
//temp
//		temp
//temp2 = 4 (temp->next)
//temp->next = temp2->next
int main()
{
	int menu;
	int quantity;
	int counter = 0;
	int input;
	char name[31];
	do{
		skip();
		printf("BLUE MOTORCYCLE PARTS\n");
		printf(".....................\n");
		printf("1. View Order List\n");
		printf("2. Add New Order\n");
		printf("3. Take Order\n");
		printf("4. Exit\n");
		printf(">> Input choice : ");
		scanf("%d",&menu);
		fflush(stdin);

		switch(menu)
		{
		case 1:
			viewOrder();
			getchar();
			break;
		case 2:
			do{
				printf("Input Name of Motorcycle's Part [3..30]: \n");
				scanf("%s",name);fflush(stdin);
			}while(strlen(name) < 3 || strlen(name) > 30 );
			do{
				printf("Input Quantity of The Motorcycle's Part [1..20]: \n");
				scanf("%d",&quantity);fflush(stdin);
			}while(quantity < 1 || quantity > 20);
			printf("--- Add New Order Success ---");
			pushHead(name, quantity);
			counter++;
			break;
		case 3:
			viewOrder();
			printf("Input Number of The Order [1..%d]: ", counter);
			scanf("%d", &input);
			fflush(stdin);
			del(input);
			printf("--- Take Order Success --- ");
			break;
		}

	} while(menu!=4);
	getchar();
	return 0;
}
