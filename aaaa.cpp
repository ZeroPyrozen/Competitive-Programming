#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

struct Data{
	int jumlah;
	char nama[100];
	char nama1[100];
	Data *next;
	Data *prev;
}*head = NULL, *tail = NULL, *current = NULL, *temp = NULL;

void viewOrder(){
	int i=1;
	Data *temp;
	temp = head;
	
	printf("                         Queue View                                  ");
	printf("\n-------+-------------------------+-----------------------+--------\n");
	printf(":No.   : Customer Name           : Dress Name            : Price :\n");
	if(head != NULL)
	{
		while(temp!=NULL){
			printf(":%6d:%-20s:%-20s:$%5d", i, temp->nama, temp->nama1, temp->jumlah);
			temp = temp->next;
			i++;
		}
	}
	printf("\n------+-------------------------+-----------------------+--------\n");

}

void pushHead(int jumlah, char nama[100], char nama1[100]){
	Data *node = (Data *) malloc(sizeof(Data));
	//(*node).angka = angka;
	node->jumlah = jumlah;
	strcpy(node->nama, nama);
	if(head==NULL){
		head = tail = node;
	}
	else 
	{
		head->prev = node;
		node->next = head;
		head = node;
	}
	tail->next = NULL;
	head->prev = NULL;
	tail->next = NULL;
}

void popHead()
{
	if(head)
	{
		if(tail == head)
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
	}
}

int main(){
	int menu;
	int tempJuml;
	int counter=0;
	int x;
	char tempNama[100];
	char tempNama1[100];
	do{
		printf("BLUE DRESS SHOP CASHIER QUEUE\n");
		printf("#############################\n");
		printf("\n");
		printf("1. View Queue\n");
		printf("2. Add Customer to Queue\n");
		printf("3. Serve Customer\n");
		printf("4. Exit\n\n");
		printf(">> Input Choice: ");
		scanf("%d", &menu);fflush(stdin);
		switch(menu){
		case 1:
			viewOrder();
			break;
		case 2:
			if(counter!=10) {
				do{
					printf("Input Customer's Name[3...20][must be in alphabets]: ");
					scanf("%[^\n]", &tempNama);fflush(stdin);
				} while (strlen(tempNama)<3||strlen(tempNama)>20);
				
				do{
					printf("Input Dress Name[3...20]: ");
					scanf("%[^\n]", &tempNama1);fflush(stdin);
				} while (strlen(tempNama1)<3||strlen(tempNama1)>20);

				do{
					printf("Input Dress Price [$50..$999 Kg(s)]: $");
					scanf("%d", &tempJuml);fflush(stdin);
					printf("\n");
				} while (tempJuml<50||tempJuml>999);
				printf("\n\n---Success to Add Customer into Queue List---\n\n");
				pushHead(tempJuml, tempNama, tempNama1);
				counter++; 
			}
			else {printf("---Maximum Customer in a Queue is 10---\n\n");}
			getchar();
			break;
		case 3:
			if(counter==0){
				printf("---There is No Customer in Queue---\n\n");}
			else{
				printf("---%[^\n] Has Been Served---", tempNama);
				popHead();
			}
			getchar();
			break;
		} 

	}while(menu!=4);
	return 0;
}