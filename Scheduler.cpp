#include<string.h>
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
struct Subject
{
	char subjectName[100];
	struct Subject *next,*prev;
}*start=NULL,*end=NULL;
struct Schedule
{
	char dayName[10];
	bool hasList ;
	struct Subject *start,*end;
	struct Schedule *next,*prev;
}*head=NULL,*tail=NULL;
void pushDay(char day[])
{
	Schedule *curr = (Schedule*)malloc(sizeof(Schedule));
	curr->prev = curr->next = NULL;
	strcpy(curr->dayName,day);
	curr->hasList  = false;
	if(!head)
		head = tail = curr;
	else
	{
		tail->next = curr;
		curr->prev = tail;
		tail = curr;
	}
}
void printAll()
{
	Schedule *printNode;
	Subject *printNest;
	if(!head)
		cout << "No Data!"<<endl;
	else
	{
		printNode = head;
		while(printNode!=NULL)
		{
			printf("[ %-5s ]\n",printNode->dayName);
			if(printNode->hasList==true)
			{
				printNest = printNode->start;
				printf("	==========================\n");
				while(printNest!=NULL)
				{
					printf("	|| %-20s ||\n",printNest->subjectName);
					printNest = printNest->next;
				
				}
				printf("	==========================\n");
			}
			else
				printf("\n#Empty#\n");
			printf("\n\n");
			printNode = printNode->next;
		}
	}
}
void currentSchedule(Schedule *printNode)
{
		int i;
		Subject *printNest;
		printf("[ %-5s ]\n",printNode->dayName);
		if(printNode->hasList==true)
		{
			i=1;
			printNest = printNode->start;
			while(printNest!=NULL)
			{
				printf("|| %-2d %-17s ||\n",i,printNest->subjectName);
				printNest = printNest->next;
				i++;
			}
		}
		else
			printf("\n#Empty#\n");
}
void insertNewSchedule()
{
	int dayNum;
	char tempS[100];
	Schedule *node;
	do
	{
		cout << "Select Day" << endl << "1. Monday"<<endl<<"2. Tuesday"<<endl<<"3. Wednesday"<<endl<<"4. Thursday"<<endl<<"5. Friday"<<endl<<"Choose [1..5] : ";
		cin >> dayNum;
		fflush(stdin);
	}while(dayNum<1||dayNum>5);
	node = head;
	while(dayNum!=1)
	{
		node = node->next;
		dayNum--;
	}
	currentSchedule(node);
	do
	{
		printf("Insert New Subject : ");
		gets(tempS);
		fflush(stdin);
	}while(strlen(tempS)<2);
	Subject *nest = (Subject*)malloc(sizeof(Subject));
	strcpy(nest->subjectName,tempS);
	nest->next = nest->prev = NULL;
	if(node->hasList == false)
	{
		node->start = node->end = nest;
		node->hasList = true;
	}
	else
	{
		node->end->next = nest;
		nest->prev = node->end;
		node->end = nest;
	}
	cout << "Successfully add new subject at "<<node->dayName<<"."<<endl<<"Press Enter to Continue...";
	cin.get();
}
void updateSchedule()
{
	int dayNum,subNum,counter;
	char tempS[100];
	Schedule *node;
	Subject *temp;
	do
	{
		cout << "Select Day" << endl << "1. Monday"<<endl<<"2. Tuesday"<<endl<<"3. Wednesday"<<endl<<"4. Thursday"<<endl<<"5. Friday"<<endl<<"Choose [1..5] : ";
		cin >> dayNum;
		fflush(stdin);
	}while(dayNum<1||dayNum>5);
	node = head;
	while(dayNum!=1)
	{
		node = node->next;
		dayNum--;
	}
	if(node->hasList == false)
	{
		printf("Current day doesn\'t have any subject, please add it first.\nPress Enter to Continue...");
	}
	else
	{
		currentSchedule(node);
		temp = node->start;
		counter = 0;
		while(temp!=NULL)
		{
			counter++;
			temp = temp->next;
		}
		printf("\n");
		do
		{
			printf("Select Subject [1..%d]: ",counter);
			scanf("%d",&subNum);
			fflush(stdin);
		}while(subNum<1||subNum>counter);
		temp = node->start;
		while(subNum!=1)
		{
			temp = temp->next;
			subNum--;
		}
		do
		{
			printf("Insert New Subject : ");
			gets(temp->subjectName);
			fflush(stdin);
		}while(strlen(temp->subjectName)<2);
		cout << "Successfully update subject at "<<node->dayName<<"."<<endl<<"Press Enter to Continue...";
	}
}
void deleteASubject()
{
	int dayNum,subNum,counter,idx;
	char tempS[100];
	Schedule *node;
	Subject *temp,*del;
	do
	{
		cout << "Select Day" << endl << "1. Monday"<<endl<<"2. Tuesday"<<endl<<"3. Wednesday"<<endl<<"4. Thursday"<<endl<<"5. Friday"<<endl<<"Choose [1..5] : ";
		cin >> dayNum;
		fflush(stdin);
	}while(dayNum<1||dayNum>5);
	node = head;
	while(dayNum!=1)
	{
		node = node->next;
		dayNum--;
	}
	if(node->hasList == false)
	{
		printf("Current day doesn\'t have any subject, please add it first.\nPress Enter to Continue...");
	}
	else
	{
		currentSchedule(node);
		temp = node->start;
		counter = 0;
		while(temp!=NULL)
		{
			counter++;
			temp = temp->next;
		}
		printf("\n");
		do
		{
			printf("Select Subject [1..%d]: ",counter);
			scanf("%d",&subNum);
			fflush(stdin);
		}while(subNum<1||subNum>counter);
		temp = node->start;
		idx = subNum;
		while(subNum!=1)
		{
			temp = temp->next;
			subNum--;
		}
		if(counter==1)
		{
			del = node->start;
			node->start = node->end = NULL;
			del->next = del->prev = NULL;
			free(del);
			node->hasList = false;
		}
		else 
		{
			if(idx==1)
			{
				del = node->start;
				node->start = node->start->next;
				node->start->prev = del->next = del->prev = NULL;
				free(del);
			}
			else if(idx==counter)
			{
				del = node->end;
				node->end = node->end->prev;
				node->end->next = del->next = del->prev = NULL;
				free(del);
			}
			else
			{
				del = temp;
				temp->prev->next = temp->next;
				temp->next->prev = temp->prev;
				del->next = del->prev = temp->next = temp->prev = NULL;
				free(del);
				free(temp);
			}
		}
		cout << "Successfully delete a subject at "<<node->dayName<<"."<<endl<<"Press Enter to Continue...";
	}
}
int main()
{
	char day[100];
	int menu;
	for(int i=0; i<5; i++)
	{
		switch(i)
		{
		case 0:
			strcpy(day,"Monday");
			break;
		case 1:
			strcpy(day,"Tuesday");
			break;
		case 2:
			strcpy(day,"Wednesday");
			break;
		case 3:
			strcpy(day,"Thursday");
			break;
		case 4:
			strcpy(day,"Friday");
			break;
		}
		pushDay(day);
	}
	do
	{
		system("cls");
		cout << "Scheduler 1.0"<<endl<<"1. View Current Schedule"<<endl<<"2. Add New Subject"<<endl<<"3. Update Current Schedule"<<endl<<"4. Delete a Subject"<<endl<<"0. Exit"<<endl<<"Choose : ";
		scanf("%d",&menu);
		fflush(stdin);
		puts("");
		switch(menu)
		{
		case 1:
			printAll();
			cin.get();
			break;
		case 2:
			insertNewSchedule();
			break;
		case 3:
			updateSchedule();
			cin.get();
			break;
		case 4:
			deleteASubject();
			cin.get();
			break;
		}
	}while(menu!=0);
	return 0;
}