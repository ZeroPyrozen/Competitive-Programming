#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void print();
struct Order
{
	char orderName[40],indomieType[30],indomieTopping[30],indomieLevel[10];
	int quantity,diskon,totalPrice;
	struct Order *next;
}*head=NULL,*tail=NULL;
void pushTail(char orderName[40],char indomieType[30],
	char indomieTopping[30],char indomieLevel[10],
	int quantity,int diskon,int totalPrice)
{
	struct Order *curr = (struct Order*)malloc(sizeof(struct Order));
	curr->next = NULL;
	curr->diskon = diskon;
	curr->quantity = quantity;
	curr->totalPrice = totalPrice;
	strcpy(curr->orderName,orderName);
	strcpy(curr->indomieType,indomieType);
	strcpy(curr->indomieTopping,indomieTopping);
	strcpy(curr->indomieLevel,indomieLevel);
	if(head==NULL)
		head = tail = curr;
	else
	{
		tail->next = curr;
		tail = curr;
	}
	tail->next = NULL;
}
void insertOrder()
{
	char tempName[100],tempType[100],tempLevel[100],tempTopping[100];
	int quantity,diskon,price,flag,i;
	do
	{
		flag=0;
		printf("Input Your name [Must be 2 Words]                      : ");
		scanf("%[^\n]",&tempName);
		fflush(stdin);
		if(isspace(tempName[0]))
			flag = 0;
		else
		{
			for(i=0; i<strlen(tempName); i++)
			{
				if(isspace(tempName[i]))
				{
					flag = 1;
					if(!isalnum(tempName[i+1]))
					{
						flag = 0;
						break;
					}
				}
			}
		}
	}while(flag==0);
	do
	{
		printf(" Input Type of The Indomie [Goreng | Kuah]              : ");
		scanf("%s",&tempType);
		fflush(stdin);
	}while(strcmp(tempType,"Kuah")!=0&&strcmp(tempType,"Goreng")!=0);
	do
	{
		printf(" Input Spicy Lv of The Indomie [Normal | SOSO | Maniac] : ");
		scanf("%s",&tempLevel);
		fflush(stdin);
	}while(strcmp(tempLevel,"Normal")!=0&&strcmp(tempLevel,"SOSO")!=0&&strcmp(tempLevel,"Maniac")!=0);

	do
	{
		printf(" Input Quantity of The New Item [1..3]                  : ");
		scanf("%d",&quantity);
		fflush(stdin);
	}while(quantity<1||quantity>3);
	do
	{
		printf(" Input Topping of the Indomie [Telor | Kornet | Keju]   : ");
		scanf("%s",&tempTopping);
		fflush(stdin);
	}while(strcmp(tempTopping,"Telor")!=0&&strcmp(tempTopping,"Kornet")!=0&&strcmp(tempTopping,"Keju")!=0);
	if(strcmp(tempTopping,"Telor")==0)
	{
		price = 3000;
	}
	else if(strcmp(tempTopping,"Kornet")==0)
	{
		price = 4000;
	}
	else if(strcmp(tempTopping,"Keju")==0)
	{
		price = 5000;
	}
	if(quantity==1)
	{
		price+=7000;
	}
	else if(quantity==2)
	{
		price+=12000;
	}
	else if(quantity==3)
	{
		price+=20000;
	}
	if(strcmp(tempLevel,"Normal")==0)
	{
		diskon=0;
	}
	else if(strcmp(tempLevel,"SOSO")==0)
	{
		diskon=10;
	}
	else if(strcmp(tempLevel,"Maniac")==0)
	{
		diskon=25;
	}
	price *= ((float)(100-diskon)/100);
	pushTail(tempName,tempType,tempTopping,tempLevel,quantity,diskon,price);
	printf("\n\n --- Sukses ---\n\n");
	getchar();
}
void viewOrder()
{
	struct Order *temp;
	int i;
	system("cls");
	print();
	if(!head)
	{
		printf("No Data to be Found\n");
	}
	else
	{
		temp = head;
		i = 1;
		printf("                 --- ORDER LIST ---\n");
		printf("\n");
		printf("=============================================================================\n");
		printf("| NO | Name     | Indomie | Topping | Lv Spicy | Qty | Diskon | Total Price |\n");
		printf("=============================================================================\n");
		while(temp!=NULL)
		{
			printf("| %-2d | %-5s | %-7s | %-7s | %-8s | %-3d | %-6d | Rp %-8d |\n",i,temp->orderName,temp->indomieType,temp->indomieTopping,temp->indomieLevel,temp->quantity,temp->diskon,temp->totalPrice);
			temp = temp->next;
			i++;
		}
		printf("=============================================================================\n");
		
	}
}
void deleteOrder()
{
	struct Order *del,*delNo;
	char keyWord[100];
	viewOrder();
	if(!head)
		return;
	else
	{
		del = NULL;
		printf("\n");
		do
		{
			printf("Input Customer Name to Take Away        : ");
			scanf("%[^\n]",keyWord);
			fflush(stdin);
			delNo = head;
			while(delNo!=NULL)
			{
				if(strcmp(delNo->orderName,keyWord)==0)
				{
					del = delNo;
					break;
				}
				delNo = delNo->next;
			}
		}while(del == NULL);
		if(head==tail)
		{
			head = tail = NULL;
			free(del);
		}
		else if(del == head)
		{
			head = head->next;
			del->next = NULL;
			free(del);
		}
		else if(del == tail)
		{
			delNo = head;
			while(delNo->next!=tail)
			{
				delNo = delNo->next;
			}
			tail = delNo;
			tail->next = NULL;
			free(del);
		}
		else
		{
			delNo = head;
			while(delNo->next !=del)
			{
				delNo = delNo->next;
			}
			delNo->next = del->next;
			del->next = NULL;
			free(del);
		}
		printf("Sudah dibawa pulang\n");
		getchar();
	}
}
int main()
{
	int menu;
	do
	{
		system("cls");
		print();
		printf(" ==================\n");
		printf("  BLUEJEK INDOMIE\n");
		printf(" ==================\n");
		printf("\n");
		printf(" 1. View Order\n");
		printf(" 2. Order\n");
		printf(" 3. Take Away\n");
		printf(" 4. Exit\n");
		printf(" >> Input your choice : ");
		scanf("%d",&menu);
		fflush(stdin);
		switch(menu)
		{
		case 1:
			viewOrder();
			getchar();
			break;
		case 2:
			insertOrder();
			break;
		case 3:
			deleteOrder();
			getchar();
			break;
		}
	}while(menu!=4);
	return 0;
}