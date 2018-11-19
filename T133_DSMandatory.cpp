#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

struct data
{
	char nama[100], desk[300];
	data *next,*prev;
}*head,*tail,*curr;

int counterEntry=0;

void push(char nama[], char desk[])
{
	curr = (data*)malloc(sizeof(data));
	strcpy(curr->nama,nama);
	strcpy(curr->desk,desk);
	curr->next = curr->prev = NULL;
	if(!head)
	{
		head = tail = curr;
	}
	else
	{
		if(head->nama[0]>curr->nama[0])
		{
			head->prev = curr;
			curr->next = head;
			head = curr;
		}
		else if(tail->nama[0]<=curr->nama[0])
		{
			tail->next = curr;
			curr->next = tail;
			tail = curr;
		}
		else
		{
			data *temp = head;
			while(temp)
			{
				if(temp->nama[0]>curr->nama[0])
				{
					break;
				}
				temp = temp->next;
			}
			curr->next = temp;
			curr->prev = temp->prev;
			curr->prev->next = curr;
			temp->prev = curr;
		}
	}
}

void printAll()
{
	curr=head;
	printf("Items :\n");
	while(curr)
	{
		printf(">> %s\n", curr->nama);
		curr = curr->next;
	}
}
bool validation(char name[])
{
	curr = (data*)malloc(sizeof(data));
	curr = head;
	int flag=0;
	while(curr)
	{
		if(strcmp(curr->nama,name)==0)
		{
			flag=1;
			return false;
		}
		curr = curr->next;
	}
	if(flag==0)
	{
		return true;
	}
}

void search()
{
	int flag=0;
	char search[100];
	do
	{
		flag=0;
		printf("Search by name[\"Exit\" to quit] : ");
		scanf("%s", search);
		fflush(stdin);
		if(strcmp(search,"Exit")!=0)
		{
			if(validation(search)==false)
			{
				printf(">> %s\n", curr->nama);
				printf("[ %s\n", curr->desk);
				getchar();
				flag=0;
				system("cls");
			}
			else
			{
				printf("Data is not available\n");
				flag=0;
			}
		}
		else
		{
			flag=1;
		}
	}while(flag==0);
}
void newData()
{
	data data;
	int flag=0, panjangKata,i;
	//Item Name
	do
	{
		flag=0;
		printf("Item Name [1-100] : ");
		scanf("%[^\n]", data.nama);
		fflush(stdin);
		panjangKata = strlen(data.nama);
		if(panjangKata>0&&panjangKata<=100)
		{
			for(i=0; i<panjangKata; i++)
			{
				if(!isalpha(data.nama[i]))
				{
					flag=0;
					break;
				}
				else
				{
					flag=1;
				}
			}
			if(flag==0)
			{
				if(isspace(data.nama[i]))
				{
					printf("\nItem Name Cannot Contain Spaces!\n");
				}
				else if(isdigit(data.nama[i]))
				{
					printf("\nItem Name Must Be Alphabet Only!\n");
				}
				else
				{
					printf("Item Name Cannot Contain Special Characters!\n");
				}
			}		
			else
			{
				//Reserved for Searching
				if(validation(data.nama)==true)
				{
					flag=1;
				}
				else
				{
					printf("Please Input Another Data\n");
					flag=0;
				}
			}
		}
		else
		{
			flag=0;
		}
	}while(flag==0);
	//Item Description
	do
	{
		flag=0;
		printf("Item description [10-200 Characters] : ");
		scanf("%[^\n]", data.desk);
		fflush(stdin);
		panjangKata = strlen(data.desk);
		if(panjangKata<10||panjangKata>200)
		{
			flag=0;
		}
		else
		{
			flag=1;
		}
	}while(flag==0);
	push(data.nama,data.desk);
	counterEntry++;
	printf("Insert Sucess!");
}
void popSearch(char name[])
{
	bool found = false;
	curr = head;
	while(curr)
	{
		if(strcmp(curr->nama,name))
		{
			found = true;
			break;
		}
		curr = curr->next;
	}
	if(found)
	{
		if(curr==head && curr==tail)
		{
			free(head);
			head = tail = NULL;
		}
		else if(curr==head)
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
		else if(curr==tail)
		{
			if(head==tail)
			{
				head = tail = NULL;
			}
			else
			{
				tail = tail->prev;
				free(tail->next);
				tail->next = NULL;
			}
		}
		else
		{
			curr->prev->next = curr->next;
			curr->next->prev = curr->prev;
			free(curr);
		}
	}
	else
	{
		printf("Not Found");
	}
}
void update(char name[])
{

	
}
int main()
{
	int menuDirection, flag=0, i;
	char name[100];
	do
	{
		system("cls");
		printf("1. Insert New Item\n");
		printf("2. Find New Item\n");
		printf("3. Update Item\n");
		printf("4. Delete Item\n");
		printf("5. Exit\nChoose : ");
		scanf("%d", &menuDirection);
		fflush(stdin);
		switch(menuDirection)
		{
		case 1:
			//New Data
			system("cls");
			newData();
			getchar();
			break;
		case 2:
			//Find
			system("cls");
			search();
			break;
		case 3:
			//Update the Item
			system("cls");
			do
			{
				flag=0;
				scanf("%[^\n]", name);
				fflush(stdin);
				if(!validation(name))
				{
					flag=1;
				}
				else
				{
					for(i=0; i<strlen(name); i++)
					{
						if(!isalpha(name[i]))
						{
							flag=0;
							break;
						}
						else
						{
							flag=1;
						}
					}
					if(flag==0)
					{
						if(isspace(name[i]))
						{
							printf("\nItem Name Cannot Contain Spaces!\n");
						}
						else if(isdigit(name[i]))
						{
							printf("\nItem Name Must Be Alphabet Only!\n");
						}
						else
						{
							printf("Item Name Cannot Contain Special Characters!\n");
						}
					}
					flag=0;
				}
			}while(flag==0);

			break;
		case 4:
			system("cls");
			do
			{
				flag=0;
				scanf("%[^\n]", name);
				fflush(stdin);
				if(!validation(name))
				{
					flag=1;
				}
				else
				{
					for(i=0; i<strlen(name); i++)
					{
						if(!isalpha(name[i]))
						{
							flag=0;
							break;
						}
						else
						{
							flag=1;
						}
					}
					if(flag==0)
					{
						if(isspace(name[i]))
						{
							printf("\nItem Name Cannot Contain Spaces!\n");
						}
						else if(isdigit(name[i]))
						{
							printf("\nItem Name Must Be Alphabet Only!\n");
						}
						else
						{
							printf("Item Name Cannot Contain Special Characters!\n");
						}
					}
					flag=0;
				}
			}while(flag==0);
			popSearch(name);
			printf("Deleted!\n");
			counterEntry--;
			getchar();
			break;
		}
	}while(menuDirection!=5);
	system("cls");
	printf("Thank You for Using this App");
	getchar();
	return 0;
}