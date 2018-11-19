#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct dictionary
{
	char idWord[100];
	char enWord[100];
	int searchCount;
}dict[1010];

int readData()
{
	int i=0;
	FILE *f = fopen("dict.txt","r");
	int fileSize;
	if(f)
	{
		fseek(f,0L,SEEK_END);
		fileSize = ftell(f);
		fseek(f,0L,SEEK_SET);
		if(fileSize>0)
		{
			while(!feof(f))
			{
				fscanf(f,"%[^=]=%[^,],%d\n",&dict[i].enWord,&dict[i].idWord,&dict[i].searchCount);
				i++;
			}
		}
		fclose(f);
		return i;
	}
	else
	{
		perror("error load ");
		getchar();
		exit(1);
	}

}
void showTable(int counter)
{
	int i;
	printf("%-30s %-30s %15s\n\n","English","Indonesian","Search Count");
	for(i=0; i<counter; i++)
	{
		printf("%-30s %-30s %15d\n",dict[i].enWord,dict[i].idWord,dict[i].searchCount);
	}
	printf("\n");
}
void sortEnWord(int counter)
{
	int i,j,idx;
	struct dictionary temp;
	for(i=0; i<counter; i++)
	{
		idx = i;
		for(j=i; j<counter; j++)
		{
			if(strcmpi(dict[idx].enWord,dict[j].enWord)>0)
			{
				idx = j;
			}
		}
		temp = dict[i];
		dict[i] = dict[idx];
		dict[idx] = temp;
	}
}
void sortSeCount(int counter)
{
	int i,j,flag=0;
	struct dictionary temp;
	for(i=0; i<counter; i++)
	{
		if(flag==0)
		{
			for(j=counter-1; j>i; j--)
			{
				if(dict[j].searchCount>dict[j-1].searchCount)
				{
					temp = dict[j];
					dict[j] = dict[j-1];
					dict[j-1] = temp;
				}
			}
			flag=1;
		}
		else
		{
			for(j=0; j<counter-1; j++)
			{
				if(dict[j].searchCount<dict[j+1].searchCount)
				{
					temp = dict[j];
					dict[j] = dict[j+1];
					dict[j+1] = temp;
				}
			}
			flag=0;
		}
	}
}
int isExist(char key[],int counter)
{
	int i;
	for(i=0; i<counter; i++)
	{
		if(strcmpi(dict[i].enWord,key)==0)
		{
			return i;
		}
	}
	return -1;
}
void searchWord(int counter)
{
	int index;
	char key[100];
	printf("Input English word to be search: ");
	scanf("%[^\n]",&key);
	fflush(stdin);
	index = isExist(key,counter);
	if(index==-1)
	{
		printf("English is not found!!\n");
		getchar();
		return;
	}
	else
	{
		printf("%-30s %-30s %15d\nSuccessfully found data, search count is added by 1",dict[index].enWord,dict[index].idWord,dict[index].searchCount);
		dict[index].searchCount++;
		getchar();
	}
}
void newWord(int *counter)
{
	int flag,temp = (*counter);
	
	printf("Input English Word to be added: ");
	scanf("%[^\n]",&dict[temp].enWord);
	fflush(stdin);
	printf("Input Indonesian Word to be added: ");
	scanf("%[^\n]",&dict[temp].idWord);
	fflush(stdin);
	flag = isExist(dict[temp].enWord,temp);
	if(flag==-1)
	{
		dict[temp].searchCount = 0;
		(*counter)++;
		printf("Successfully add data");
		getchar();
	}
	else
	{
		printf("English word already exist!\n");
		getchar();
	}
}
void updateWord(int counter)
{
	int index;
	char key[100];
	printf("Input English word to be updated: ");
	scanf("%[^\n]",&key);
	fflush(stdin);
	index = isExist(key,counter);
	if(index==-1)
	{
		printf("English word is not found!!\n");
		getchar();
	}
	else
	{
		printf("Input New English word: ");
		scanf("%[^\n]",&dict[index].enWord);
		fflush(stdin);
		printf("Input New Indonesian word: ");
		scanf("%[^\n]",&dict[index].idWord);
		fflush(stdin);
		dict[index].searchCount = 0;
		printf("Successfully update data, search count back to 0");
		getchar();
	}
}
void deleteWord(int *counter)
{
	int index, temp,i;
	char key[100];
	temp = (*counter);
	printf("Input English word to be deleted: ");
	scanf("%[^\n]",&key);
	fflush(stdin);
	index = isExist(key,temp);
	if(index==-1)
	{
		printf("English word is not found!!");
		getchar();
	}
	else
	{
		for(i=index; i<temp; i++)
		{
			dict[i] = dict[i+1];
		}
		(*counter)--;
		printf("Successfully delete data");
		getchar();
	}
}
void writeData(int counter)
{
	int i;
	FILE *f = fopen("dict.txt","w");
	if(f)
	{
		for(i=0; i<counter; i++)
		{
			fprintf(f,"%s=%s,%d\n",dict[i].enWord,dict[i].idWord,dict[i].searchCount);
		}
		fclose(f);
	}

}
int main()
{
	int counter=0,menu;
	counter = readData();
	do
	{
		system("cls");
		if(counter==0)
			printf("No Data!\n");
		else
			showTable(counter);
		printf("1. Sort by English Word Asc\n2. Sort by Search Count Dsc\n3. Search Word\n4. Add Word\n5. Update Word\n6. Delete Word\n0. Exit\n\nInput menu: ");
		scanf("%d",&menu);
		fflush(stdin);
		switch(menu)
		{
		case 1:
			if(counter==0)
			{
				printf("Add new data first!\n");
				getchar();
			}
			else
				sortEnWord(counter);
			break;
		case 2:
			if(counter==0)
			{
				printf("Add new data first!\n");
				getchar();
			}
			else
				sortSeCount(counter);
			break;
		case 3:
			searchWord(counter);
			break;
		case 4:
			newWord(&counter);
			break;
		case 5:
			updateWord(counter);
			break;
		case 6:
			deleteWord(&counter);
			break;
		case 0:
			writeData(counter);
			exit(0);
			break;
		}
	}while(menu!=0);
	return 0;
}