#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
int counterEntry=0;
struct phone
{
	char name[100];
	char vendor[100];
	char battery[100];
	int bat;
	int storage;
	float cam;
	int price;
	phone *next, *prev;
}*head,*tail;
void spacing()
{
	for(int i=0;i<25;i++)
		printf("\n");
}
void pushBack(char name[], char vendor[], char battery[], int storage, float cam, int price)
{
	struct phone *curr = (phone*)malloc(sizeof(phone));
	curr->storage = storage;
	curr->cam = cam;
	curr->price = price;
	
	strcpy(curr->name,name);
	strcpy(curr->vendor,vendor);
	strcpy(curr->battery,battery);
	curr->next = NULL;
	curr->prev = NULL;
	if(!head)
	{
		head = tail = curr;
	}
	else
	{
		tail->next = curr;
		curr->prev = tail;
		tail = curr;
	}
}
void pushFront(char name[], char vendor[], char battery[], int storage, float cam, int price)
{
	phone *curr = (phone*)malloc(sizeof(phone));
	curr->storage = storage;
	curr->cam = cam;
	curr->price = price;
	
	strcpy(curr->name,name);
	strcpy(curr->vendor,vendor);
	strcpy(curr->battery,battery);
	curr->next = NULL;
	curr->prev = NULL;
	if(!head)
	{
		head = tail = curr;
	}
	else
	{
		curr->next = head;
		head->prev = curr;
		head = curr;
	}
}
void newPhone()
{
	phone hp;
	int flag=0, panjangKata;
	//Phone Name
	do
	{
		printf("Input phone name [at least two words] : ");
		scanf("%[^\n]",hp.name);
		fflush(stdin);
		panjangKata = strlen(hp.name);
		for(int i=0; i<panjangKata; i++)
		{
			if(isspace(hp.name[0]))
			{
				flag=0;
				break;
			}
			else if(isspace(hp.name[i])&&isalnum(hp.name[i+1]))
			{
				flag=1;
				break;
			}
			else
			{
				flag=0;
			}
		}
	}while(flag==0);
	//Phone Vendor
	do
	{
		flag=0;
		printf("Input phone vendor [alphabet only] : ");
		scanf("%[^\n]", hp.vendor);
		fflush(stdin);
		panjangKata = strlen(hp.vendor);
		for(int i=0; i<panjangKata; i++)
		{
			if(isalpha(hp.vendor[i])||isspace(hp.vendor[i]))
			{
				flag=1;
			}
			else
			{
				flag=0;
			}
		}
	}while(flag==0);
	//Battery
	do
	{
		flag=0;
		printf("Input phone battery capacity [numeric only|must end with 'mAh' or ' mAh'](case-sensitive) : ");
		scanf("%[^\n]",hp.battery);
		fflush(stdin);

			flag=1;
		
	}while(flag==0);
	//Storage
	do
	{
		flag=0;
		printf("Input phone storage [must greater than zero] :");
		scanf("%d", &hp.storage);
		fflush(stdin);
		if(hp.storage>0)
		{
			flag=1;
		}
	}while(flag==0);
	//Camera
	do
	{
		flag=0;
		printf("Input phone main camera resolution [floating number accepted, must not zero] : ");
		scanf("%f",&hp.cam);
		fflush(stdin);
		if(hp.cam>0)
		{
			flag=1;
		}
	}while(flag==0);
	//Price
	do
	{
		flag=0;
		printf("Input phone price [500000 - 15000000] : ");
		scanf("%d",&hp.price);
		fflush(stdin);
		if(hp.price>=500000&&hp.price<=15000000)
		{
			flag=1;
		}
	}while(flag==0);
	pushBack(hp.name,hp.vendor,hp.battery,hp.storage,hp.cam,hp.price);
	counterEntry++;
	printf("New phone data successfully inserted!");
	printf("Press Enter to continue...");
}
void printAll()
{
	if(counterEntry==0){printf("No Data!");}
	else
	{
		if(head)
		{
			printf("=====================================================================================================\n");
			printf("| %-4s | %-15s | %-15s | %-15s | %-10s | %-10s | %-10s |\n","No.","Vendor","Name","Battery Cap.","Storage","Main Cam.","Price");
			printf("=====================================================================================================\n");
			phone *curr = head;
			int counter=0;
			while(curr!=NULL)
			{
				counter++;
				printf("| %-4d | %-15s | %-15s | %-12d%-3s | %-7d GB | %-8.2fMP | %-10d |\n", counter, curr->vendor, curr->name, curr->bat,curr->battery, curr->storage, curr->cam, curr->price);
				curr = curr->next;
			}
			printf("=====================================================================================================\n");
		}
	}

}
void pushMid(char name[], char vendor[], char battery[], int storage, float cam, int price)
{
	if(!head)
	{
		pushBack(name[],vendor[],batter[],storage,cam,price);
	}
	else
	{
		if(value>tail->value)
		{
			pushBack(name[],vendor[],batter[],storage,cam,price);
		}
		else if(value<head->value)
		{
			pushFront(name[],vendor[],batter[],storage,cam,price);
		}
		else
		{
			phone *temp = (phone*)malloc(sizeof(phone));
			strcpy(temp->name,name);
			temp->next = NULL;
			temp->prev = NULL;
			phone *curr = head->next;
			while(curr->value<value)
			{
				curr = curr->next;
			}
			//Insert
			temp->next = curr;
			temp->prev = curr->prev;
			curr->prev->next = temp;
			curr->prev=temp;
		}
	}

}
phone *popFront()
{
	if(head)
	{
		phone *curr = (phone*)malloc(sizeof(phone));
		curr = head;
		if(head==tail)
		{
			free(head);
			head = tail = NULL;
		}
		else
		{
			head = head->next;
			free(head->prev);
			head->prev = NULL;
		}
		return curr;
	}
	else
	{
		return NULL;
	}
}
phone *popBack()
{
	if(head)
	{
		phone *curr = (phone*) malloc(sizeof(phone));
		curr = tail;
		if(head==tail)
		{
			curr = head;
			free(head);
			head = tail = NULL;
		}
		else
		{
			tail = tail->prev;
			free(tail->next);
			tail->next = NULL;
		}
		return curr;
	}
	return NULL;
}
phone *popSearch(int counter)
{
	int count=1;
	if(head)
	{
		phone *curr = head;
		while(count<counter)
		{
			curr = curr->next;
			count++;
		}
		if(curr->prev == NULL){return popFront();}
		else if(curr->next==NULL){return popBack();}
		else
		{
			phone *temp = (phone*)malloc(sizeof(phone));
			temp = curr;
			curr->prev->next = curr->next;
			curr->next->prev = curr->prev;
			free(curr);
			return temp;
		}
	}
	return NULL;
}

void updatePhone(char nama[])
{
	phone hp;
	int flag=0, panjangKata;
	//Phone Name
	do
	{
		printf("Input phone name [at least two words] : ");
		scanf("%[^\n]",hp.name);
		fflush(stdin);
		panjangKata = strlen(hp.name);
		for(int i=0; i<panjangKata; i++)
		{
			if(isspace(hp.name[0]))
			{
				flag=0;
				break;
			}
			else if(isspace(hp.name[i])&&isalnum(hp.name[i+1]))
			{
				flag=1;
				break;
			}
			else
			{
				flag=0;
			}
		}
	}while(flag==0);
	//Phone Vendor
	do
	{
		flag=0;
		printf("Input phone vendor [alphabet only] : ");
		scanf("%[^\n]", hp.vendor);
		fflush(stdin);
		panjangKata = strlen(hp.vendor);
		for(int i=0; i<panjangKata; i++)
		{
			if(isalpha(hp.vendor[i])||isspace(hp.vendor[i]))
			{
				flag=1;
			}
			else
			{
				flag=0;
			}
		}
	}while(flag==0);
	//Battery
	do
	{
		flag=0;
		printf("Input phone battery capacity [numeric only|must end with 'mAh' or ' mAh'](case-sensitive) : ");
		scanf("%[^\n]",hp.battery);
		fflush(stdin);
	
			flag=1;
		
	}while(flag==0);
	//Storage
	do
	{
		flag=0;
		printf("Input phone storage [must greater than zero] :");
		scanf("%d", &hp.storage);
		fflush(stdin);
		if(hp.storage>0)
		{
			flag=1;
		}
	}while(flag==0);
	//Camera
	do
	{
		flag=0;
		printf("Input phone main camera resolution [floating number accepted, must not zero] : ");
		scanf("%f",&hp.cam);
		fflush(stdin);
		if(hp.cam>0)
		{
			flag=1;
		}
	}while(flag==0);
	//Price
	do
	{
		flag=0;
		printf("Input phone price [500000 - 15000000] : ");
		scanf("%d",&hp.price);
		fflush(stdin);
		if(hp.price>=500000&&hp.price<=15000000)
		{
			flag=1;
		}
	}while(flag==0);
	pushMid(hp.name,hp.vendor,hp.battery,hp.storage,hp.cam,hp.price);
	printf("Phone data successfully inserted!");
	printf("Press Enter to continue...");
}
int main()
{
	int menuDirection, flag=0, index;
	char nama[100];
	do
	{
		system("cls");
		spacing();
		printf("1. Add Phone\n");
		printf("2. Update Phone\n");
		printf("3. Delete Phone\n");
		printf("4. View Phone\n");
		printf("5. Exit\nChoose : ");
		scanf("%d",&menuDirection);
		fflush(stdin);
		switch(menuDirection)
		{
		case 1:
			//New Phone
			system("cls");
			newPhone();
			getchar();
			break;
		case 2:
			//Update Phone
			system("cls");
			spacing();
			if(counterEntry==0){printf("No Data");}
			else
			{
				printAll();
				printf("\n\n");
				do
				{
					flag=0;
					printf("Input phone name you want to update : ");
					scanf("%[^\n]", nama);
					fflush(stdin);
					phone *temp = head;
					for(int i=0; i<counterEntry&&temp!=NULL; i++)
					{
						if(strcmp(nama,temp->name)!=0)
						{	
							temp = temp->next;
							flag=0;
						}
						else
						{
							flag=1;
							printf("Phone data found!\n\n");
							break;
						}
					}

				}while(flag==0);
				updatePhone(nama);
			
			}
			getchar();
			break;
		case 3:
			//Delete Phone
			system("cls");
			spacing();
			if(counterEntry==0){printf("No Data");}
			else
			{
				printAll();
				printf("\n\n");
				do
				{
					printf("\nInput index of phone data you want to delete [1 - %d] : ", counterEntry);
					scanf("%d", &index);
					fflush(stdin);
					if(index>0&&index<=counterEntry)
					{
						flag=1;
					}
				}while(flag==0);
				popSearch(index);
				counterEntry--;
			}
			getchar();
			break;
		case 4:
			//View Phone
			system("cls");
			spacing();
			if(counterEntry==0){printf("No Data");}
			else
			{
				printAll();
			}
			getchar();
			break;
		}
	}while(menuDirection!=5);
	getchar();
	return 0;
}