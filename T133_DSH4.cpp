#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

struct bakmi
{
	int price;
	char namaBakmi[100];
	struct bakmi *right, *left,*next;
}*root=NULL;

int flag=0;
int entryKamus=0;
char kamus[100][100];
void popAll(bakmi *popCurr)
{
	if(popCurr==NULL)
	{
		
	}
	else
	{
		popAll(popCurr->left);
		popAll(popCurr->right);
		free(popCurr);
		flag=0;
	}
	root = NULL;
}
void push(bakmi **currLevel,char namaBakmi[], int price)
{
	if(*currLevel==NULL)
	{
		*currLevel = (bakmi*)malloc(sizeof(bakmi));
		(*currLevel)->price = price;
		strcpy((*currLevel)->namaBakmi,namaBakmi);
		(*currLevel)->right = NULL;
		(*currLevel)->left = NULL;
		flag=1;
	}
	else if((*currLevel)->price<=price)
	{
		push(&(*currLevel)->right,namaBakmi,price);
	}
	else if((*currLevel)->price>price)
	{
		push(&(*currLevel)->left,namaBakmi,price);
	}
}

void preOrder(bakmi *initPosition)
{
	if(initPosition == NULL)
	{
		if(flag==0)
		{
			printf("No Data");
		}
	}
	else
	{
		printf("- %-30s <%d>\n", initPosition->namaBakmi,initPosition->price);
		preOrder(initPosition->left);
		preOrder(initPosition->right);
	}
}
void spacing()
{
	for(int i=0; i<25; i++)
	{
		printf("\n");
	}
}
void inOrder(bakmi *initPosition)
{
	if(initPosition == NULL)
	{
		if(flag==0)
		{
			printf("No Data");
		}
	}
	else
	{
		preOrder(initPosition->left);
		printf("- %-30s <%d>\n", initPosition->namaBakmi,initPosition->price);
		preOrder(initPosition->right);
	}
}
void postOrder(bakmi *initPosition)
{
	if(initPosition == NULL)
	{
		if(flag==0)
		{
			printf("No Data");
		}
	}
	else
	{
		preOrder(initPosition->left);
		preOrder(initPosition->right);
		printf("- %-30s <%d>\n", initPosition->namaBakmi,initPosition->price);
	}
}
void newData()
{
	bakmi bakmi;
	int mark=0, panjangKata;
	//Nama Bakmi
	do
	{
		mark=0;
		printf("Input Menu's Name [6..30 | Starts with 'Bakmi ' | Case Insensitive]: ");
		scanf("%[^\n]",bakmi.namaBakmi);
		fflush(stdin);
		panjangKata = strlen(bakmi.namaBakmi);
		if(strstr(bakmi.namaBakmi,"Bakmi ")&&panjangKata>=6&&panjangKata<=30)
		{
			if(entryKamus==0)
			{
				strcpy(kamus[entryKamus],bakmi.namaBakmi);
				entryKamus++;
				mark=1;
			}
			else
			{
				for(int i=0; i<entryKamus; i++)
				{
					if(strcmp(bakmi.namaBakmi,kamus[i])==0)
					{
						printf("\n\n * Menu cannot be the same, input another one *");
						printf("\n");
						mark=0;
						break;
					}
					else
					{
						strcpy(kamus[entryKamus],bakmi.namaBakmi);
						mark=1;
					}
				}
			}
		}
		else
		{
			mark=0;
		}
	}while(mark==0);
	//Harga Bakmi
	do
	{
		mark=0;
		printf("Input Menu's Price [13000 - 25000]: ");
		scanf("%d", &bakmi.price);
		fflush(stdin);
		if(bakmi.price<13000||bakmi.price>25000)
		{
			mark=0;
		}
		else
		{
			mark=1;
		}
	}while(mark==0);
	push(&root, bakmi.namaBakmi,bakmi.price);
	
	printf("\n\n\n --- Add Menu Success ---");
}
void popSearch(bakmi *currNode, int value)
{
	if(currNode == NULL){
		printf("Data Not Found");
	}
	else if(currNode->price == value)
	{
		//Reserved for Pop
		popAll(currNode);
	}
	else if(currNode->price>value)
	{
		popSearch(currNode->left,value);
	}
	else if(currNode->price<value)
	{
		popSearch(currNode->right,value);
	}
}

int main()
{
	int menuDirection, price;
	do
	{
		system("cls");
		spacing();
		printf("Bakmi Bukan Effata\n=============================\n\n");
		printf("1. View All Menu\n");
		printf("2. Add Menu\n");
		printf("3. Remove Menu\n");
		printf("4. Show Menu in  [Inorder | Preorder | Postorder]\n");
		printf("5. Exit and Remove All\n\n>> Input choice : ");
		scanf("%d",&menuDirection);
		fflush(stdin);
		switch(menuDirection)
		{
		case 1:
			//View All Menu
			system("cls");
			spacing();
			if(flag==0)
			{
				printf(" --- There is No Menu in The Tree ---\n");
			}
			else
			{
				printf("Menu List :\n");
				preOrder(root);
			}
			getchar();
			break;
		case 2:
			//Add Menu
			system("cls");
			spacing();
			newData();
			getchar();
			break;
		case 3:
			system("cls");
			spacing();
			if(flag==0)
			{
				printf(" --- There is No Menu in The Tree ---\n");
			}
			else
			{
				preOrder(root);
				printf("Input Menu's Price that You want to be Removed : ");
				scanf("%d", &price);
				popSearch(root,price);
			}
			//Remove Menu
			getchar();
			break;
		case 4:
			system("cls");
			spacing();
			if(flag==0)
			{
				printf(" --- There is No Menu in The Tree ---\n");
			}
			else
			{
				printf("PreOrder:\n");
				preOrder(root);
				printf("\nPress any key to view InOrder...");
				getchar();
				printf("InOrder:\n");
				inOrder(root);
				printf("\nPress any key to view PostOrder...");
				getchar();
				postOrder(root);
				printf("\nPress any key to back to menu...");
			}
			//Show Menu
			getchar();
			break;
		}
	}while(menuDirection!=5);
	return 0;
}