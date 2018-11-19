#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct motor
{
	char parts[31];
	int quantity;
	struct motor *next;
}*head=NULL,*tail=NULL;

void pushhead(char parts2[], int quantity2)
{
	struct motor *node = (struct motor *) malloc(sizeof(struct motor));
	strcpy(node->parts,parts2); 
	node->quantity = quantity2;

	if(head==NULL)
	{
		head=tail=node;
		
	}
	else
	{
		node->next=head;
		head=node;
	}
	tail->next = NULL;
}

void del(int angka)
{
	if(head)
	{
		if(angka==1)//jika angka adalah data pertama
		{
			motor *temp;
			temp=head;
			if(head==tail)
			{
				free(temp);
				head = tail = NULL;
			}
			else
			{
				head = head->next;//head->next ini adalah head yang menunjuk ke sebelum dia//head yang baru adalah...
				temp->next=NULL;
				free(temp);
			}
		}
		else
		{

		}
		
	}
}

void view()
{
	motor *temp;
	temp = head;
	
	if(temp)
	{
		int i = 1;
		printf("\n\n");
		printf("                  --- ORDER LIST ---              \n\n");
		printf("-------+--------------------------------+-----------\n");	
		printf("| No.  | Name of Parts                  | Quantity |\n");
		printf("-------+--------------------------------+-----------\n");
		for(temp = head; temp!=NULL; temp = temp->next)
		{
			printf("| %d.   | %-30s | %5d    |\n",i,temp->parts,temp->quantity);
			i++;
		}
		/*while(temp!=NULL)//kodingan looping oky
		{
			printf("| %d.   | %-30s | %5d    |\n",i,temp->parts,temp->quantity);
			i++;
			temp = temp->next; //Pointer temp sekarang menunjuk ke alamat next temp saat ini.
		}*/
		printf("-------+--------------------------------+-----------\n\n");
		
	}
	else
	{
		printf("\n\n");
		printf("                  --- ORDER LIST ---              \n\n");
		printf("-------+--------------------------------+-----------\n");	
		printf("| No.  | Name of Parts                  | Quantity |\n");
		printf("-------+--------------------------------+-----------\n");
		printf("                    NO DATA                        |\n");
		printf("-------+--------------------------------+-----------\n\n");
	}
}


int main()
{
	int menu,quantregis;
	char partregis[100];

	printf("BLUE MOTORCYCLE PARTS\n");
	printf(".....................\n");
	do
	{
		printf("1. View Order List\n");
		printf("2. Add New Order\n");
		printf("3. Take Order\n");
		printf("4. Exit\n\n");
		printf(">>Input Choice : ");
		scanf("%d",&menu);fflush(stdin);

		switch(menu)
		{
		case 1:
			view();
			break;
		case 2:
			
			do
			{
				printf("Input Name of Motorcycle's Part[3..30] : ");
				scanf("%s",&partregis);fflush(stdin);
			}while(strlen(partregis)<3 || strlen(partregis)>30);

			do
			{
				printf("Input Quantity of The Motorcycle's Part[1..20] : ");
				scanf("%d",&quantregis);fflush(stdin);
			}while(quantregis<1 || quantregis>20);

			printf("\n");
			printf("Add New Order Success\n\n");
			pushhead(partregis,quantregis);
			break;
		case 3:

			break;
		}
	}while(menu!=4);

	getchar();return 0;
}


//void pushHead(char part[],int quantity)
//{
//	struct Order *curr = (struct Order*)malloc(sizeof(struct Order));
//	curr->quantityMotor = quantity;//Dalam node curr ada quantity motor sekarang diassign dengan quantity
//	strcpy(curr->partMotor, part);
//	curr->next = NULL;
//	if(head==NULL)
//	{
//		head = tail = curr;
//	}
//	else
//	{
//		curr->next = head;
//		head = curr;
//	}
//	tail->next = NULL;
//}
//void addNewOrder()
//{
//	int tempQuantity;
//	char tempPart[100];
//	system("cls");
//	printf("\n\n\n\n\n\n");
//	do
//	{
//		printf("Insert Part Name [3..30] : ");
//		scanf("%[^\n]",&tempPart);
//		fflush(stdin);
//	}while(strlen(tempPart)<3||strlen(tempPart)>30);
//	puts("");
//	do
//	{
//		printf("Insert Quantity [1..20] : ");
//		scanf("%d",&tempQuantity);
//		fflush(stdin);
//	}while(tempQuantity>20||tempQuantity<1);
//	printf("\n\n\n\nSuccess!!\n");
//	pushHead(tempPart,tempQuantity);
//}
//void printAll()
//{
//	int i;
//	struct Order *temp;
//	printf("                  --- ORDER LIST ---\n\n");
//	printf("-------+--------------------------------+-----------\n");	
//	printf("| No.  | Name of Parts                  | Quantity |\n");
//	printf("-------+--------------------------------+-----------\n");
//	if(head)
//	{
//		i = 1;
//		for(temp = head; temp!=NULL; temp = temp->next)
//		{
//			printf("| %3d. | %-30s | %8d |\n",i,temp->partMotor,temp->quantityMotor);
//			i++;
//		}
//	}
//	printf("-------+--------------------------------+-----------\n");
//}
//struct Order* deleteOrder()
//{
//	struct Order *count;
//	struct Order *test;
//	int i;
//	int counter,index;
//	if(!head)
//	{
//		printf("\n\n\n --- There is No Order in The List ---\n");
//		getchar();
//		//return;
//	}
//	counter = 0;
//	count = head;
//	while(count!=NULL)
//	{
//		counter++;
//		count = count->next;
//	}
//	system("cls");
//	printAll();
//	do
//	{
//		printf("\n\n Input Number of The Order [1..%d]: ",counter);
//		scanf("%d",&index);
//		fflush(stdin);
//	}while(index<1||index>counter);
//	count = head;
//	for(i=1; i<index; i++)
//		count = count->next;
//	if(head==tail)
//	{
//		head = tail = NULL;
//		free(count);
//	}
//	else if(count==head)
//	{
//		count = head;
//		head = head->next;
//		count->next = NULL;
//		free(count);
//	}
//	else if(count==tail)
//	{
//		
//		test = head;
//		while(test->next!=tail)
//			test = test->next;
//		count = tail;
//		tail = test;
//		tail->next = NULL;
//		free(count);
//	}
//	else
//	{
//		//A -> B -> C
//		//B
//		//A -> C
//		//B -> C
//		//B -> NULL
//		//free(B);
//		test = head;
//		while(test->next!=count)
//			test = test->next;
//		test->next = count->next;
//		count->next = NULL;
//		free(count);
//	}
//	printf("\n\n\n --- Take Order Success ---\n");
//	return count;
//}
//int main()
//{
//	int menu;
//	do
//	{
//		printf("1. View Data\n2. Add Data\n3. Delete Data\n4. Exit\n\nChoose : ");
//		scanf("%d",&menu);
//		fflush(stdin);
//		switch(menu)
//		{
//		case 1:
//			printAll();
//			getchar();
//			break;
//		case 2:
//			addNewOrder();
//			getchar();
//			break;
//		case 3:
//			if(!head)
//			{
//				printf("There is no data!\n");
//				getchar();
//			}
//			else
//				deleteOrder();
//			break;
//		}
//	}while(menu!=4);
//	return 0;
//}