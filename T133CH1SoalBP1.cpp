#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<time.h>

void flush(){
	while(getchar() != '\n');
}

struct player
{
	char name[100];
	int hand[15];
	int flag[15];
	int rankCard[15];
	int rankNumber[15];
	char suites[15][20];
}player[5];

void shuffleCard()
{
	srand(time(NULL));
	int angka[52];
	int temp,j,i,rCard[52],rNumber[52],a=1,b=1;
	for(i=1; i<=52; i++)
	{
		if(a==5)
		{
			a=1;
		}
		if(b==14)
		{
			b=1;
		}
		angka[i-1] = i;
		rCard[i-1] = a;
		rNumber[i-1] = b;
		a++;
		b++;
	}
	for(i=0; i<52; i++)
	{
		j=rand()%52;
		if(i==j)
			continue;
		else
		{
			temp = angka[i];
			angka[i] = angka[j];
			angka[j] = temp;
			temp = rCard[i];
			rCard[i] = rCard[j];
			rCard[j] = temp;
			temp = rNumber[i];
			rNumber[i] = rNumber[j];
			rNumber[j] = temp;
		}
	}
	int loop=0,x=0;
	for(i=0; i<13; i++)
	{
		player[0].hand[i] = angka[x];
		player[0].rankCard[i] = rCard[x];
		player[0].rankNumber[i] = rNumber[x];
		//printf("Kartu %c %2d : %d\n",'A',i+1, player[0].hand[i]);
		x++;
	}
	for(i=0; i<13; i++)
	{
		player[1].hand[i] = angka[x];
		player[1].rankCard[i] = rCard[x];
		player[1].rankNumber[i] = rNumber[x];
		//printf("Kartu %c %2d : %d\n",'B',i+1, player[1].hand[i]);
		x++;
	}
	for(i=0; i<13; i++)
	{
		player[2].hand[i] = angka[x];
		player[2].rankCard[i] = rCard[x];
		player[2].rankNumber[i] = rNumber[x];
		//printf("Kartu %c %2d : %d\n",'C',i+1, player[2].hand[i]);
		x++;
	}
	for(i=0; i<13; i++)
	{
		player[3].hand[i] = angka[x];
		//printf("Kartu %c %2d : %d\n",'D',i+1, player[3].hand[i]);
		x++;
	}
}

void displayHand(int x)
{
	int i;
	system("cls");
	for(i=0; i<13; i++)
	{
		printf("Kartu %2d : %d\n",i+1, player[x].hand[i]);
	}
}
void displayName()
{
	printf("======================\t\t======================\n");
	printf("|%-10s %10s|\t\t|%-10s %10s\n",player[0].name,"13 Cards",player[1].name,"13 Cards");
	printf("======================\t\t======================\n\n");
	printf("======================\t\t======================\n");
	printf("|%-10s %10s|\t\t|%-10s %10s\n",player[2].name,"13 Cards",player[3].name,"13 Cards");
	printf("======================\t\t======================\n\n");
}
void displayPlayer()
{
	printf("1. %-10s\n",player[0].name);
	printf("2. %-10s\n",player[1].name);
	printf("3. %-10s\n",player[2].name);
	printf("4. %-10s\n\n\n\n",player[3].name);
}
void updateName()
{
	int select,nameValid=0;
	do
	{
		system("cls");
		displayPlayer();
		printf("Select[0 to return]: ");
		scanf("%d",&select);
		fflush(stdin);
		switch(select)
		{
		case 1:
			do
			{
				printf("Input player name : ");
				nameValid=0;
				scanf("%[^\n]",&player[0].name);
				fflush(stdin);
				if(strlen(player[0].name)<1||strlen(player[0].name)>14)
					printf("Name must be between 1 and 14 characters!");
				else
					nameValid=1;
			}while(nameValid==0);
			break;
		case 2:
			do
			{
				nameValid=0;
				printf("Input player name : ");
				scanf("%[^\n]",&player[1].name);
				fflush(stdin);
				if(strlen(player[1].name)<1||strlen(player[1].name)>14)
					printf("Name must be between 1 and 14 characters!");
				else
					nameValid=1;
			}while(nameValid==0);
			break;
		case 3:
			do
			{
				nameValid=0;
				printf("Input player name : ");
				scanf("%[^\n]",&player[2].name);
				fflush(stdin);
				if(strlen(player[2].name)<1||strlen(player[2].name)>14)
					printf("Name must be between 1 and 14 characters!");
				else
					nameValid=1;
			}while(nameValid==0);
			break;
		case 4:
			do
			{
				nameValid=0;
				printf("Input player name : ");
				scanf("%[^\n]",&player[3].name);
				fflush(stdin);
				if(strlen(player[2].name)<1||strlen(player[2].name)>14)
					printf("Name must be between 1 and 14 characters!");
				else
					nameValid=1;
			}while(nameValid==0);
			break;
		}
	}while(select!=0);
}
int isFirst()
{
	for(int i=0;i<4; i++)
	{
		for(int j=0; j<13; j++)
		{
			if(player[i].hand[j]==5)
			{
				return i;
			}
		}
	}
}
int isWin(int p1, int p2, int p3, int p4)
{
	int flag, win;
	if(p1==0)
		flag++;
	if(p2==0)
		flag++;
	if(p3==0)
		flag++;
	if(p4==0)
		flag++;
	if(flag==3)
		return 1;
	else
		return 0;
}
void peekHand(int index,int track)
{
	for(int i=0; i<track; i++)
	{
		printf("%d ", player[index].hand[i]);
	}
}
void play()
{
	int trackP1=13,trackP2=13,trackP3=13,trackP4=13,firstPlay,discard=0, end,turn=0,firstTime=0,firstMenu,tick=0,confirm=0;
	system("cls");
	do
	{
		if(firstTime==0)
		{
			firstPlay = isFirst();
			do
			{
				confirm=0;
				do
				{
					printf("1. Challenge\n\n>>");
					scanf("%d",&firstMenu);
					fflush(stdin);
				}while(firstMenu!=1);
				switch(firstPlay)
				{
					case 0:
						peekHand(firstPlay,trackP1);
						break;
					case 1:
						peekHand(firstPlay,trackP2);
						break;
					case 2:
						peekHand(firstPlay,trackP3);
						break;
					case 3:
						peekHand(firstPlay,trackP4);
						break;
				}
				tick=0;
				do
				{
					
				}while(tick<5);
			}while(confirm==0);
		}
		end = isWin(trackP1,trackP2,trackP3,trackP4);
	}while(end==0);
	
	
}
void playMenu()
{
	int playMenu,i;
	do
	{
		system("cls");
		displayName();
		printf("\n\n\n1. Start Game\n2. Edit Player Name\n3. Return\n\n>> ");
		scanf("%d",&playMenu);
		flush();
		switch(playMenu)
		{
		case 1:
			shuffleCard();
			for(i=0; i<4; i++)
			{
				system("cls");
				printf("%s\'s turn\nOnly %s can see the next screen!\n\nPress Enter to Continue",player[i].name,player[i].name);
				getchar();
				displayHand(i);
				printf("\n\n\t\t%s\nHere are your hand for the current game\n\n",player[i].name);
				getchar();
			}
			play();
			getchar();
			break;
		case 2:
			updateName();
			break;
		}
	}while(playMenu!=3);
}

int main()
{
	int mainMenu;
	strcpy(player[0].name,"Player 1");
	strcpy(player[1].name,"Player 2");
	strcpy(player[2].name,"Player 3");
	strcpy(player[3].name,"Player 4");
	do
	{
		system("cls");
		printf("1. Play\n2. About\n3. Exit\n\n>> ");
		scanf("%d",&mainMenu);
		flush();
		switch(mainMenu)
		{
		case 1:
			playMenu();
			break;
		case 2:
			break;
		case 3:
			exit(0);
			break;
		}
	}while(mainMenu!=3);
	return 0;
}

