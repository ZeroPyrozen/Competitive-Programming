#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
char field[31][31];
void init()
{
	for(int i=0; i<31; i++)
	{
		for(int j=0; j<31; j++)
		{
			if(i==0||i==30||j==0||j==30)
				field[i][j] = '#';
			else if(i==3&&j==4)
				field[i][j] = '*';
			else
				field[i][j] = ' ';
		}
	}
}
void printMap()
{
	for(int i=0; i<31; i++)
	{
		for(int j=0; j<31; j++)
		{
			printf("%c",field[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	char player = '@';
	int x = 1,y = 1;
	char input;
	init();
	field[y][x] = player;
	do
	{
		system("cls");
		printMap();
		input = getch();
		switch(input)
		{
			case 'w':
				if(field[y-1][x]=='#')
					break;
				if(field[y-1][x]=='*')
				{
					if(field[y-2][x] != '#')
					{
						field[y-1][x] = ' ';
						field[y-2][x] = '*';
					}
					else
						break;

				}
				field[y][x] = ' ';
				field[y-1][x] = player;
				y--;
				break;
			case 'a':
				if(field[y][x-1]=='#')
					break;
				if(field[y][x-1]=='*')
				{
					if(field[y][x-2] != '#')
					{
						field[y][x-1] = ' ';
						field[y][x-2] = '*';	
					}
					else
						break;
				}
				field[y][x] = ' ';
				field[y][x-1] = player;
				x--;
				break;
			case 's':
				if(field[y+1][x]=='#')
					break;
				if(field[y+1][x]=='*')
				{
					if(field[y+2][x]!='#')
					{
						field[y+1][x] = ' ';
						field[y+2][x] = '*';
					}
					else
						break;
				}
				field[y][x] = ' ';
				field[y+1][x] = player;
				y++;
				break;
			case 'd':
				if(field[y][x+1]=='#')
					break;
				if(field[y][x+1]=='*')
				{
					if(field[y][x+2]!='#')
					{
						field[y][x+1] = ' ';
						field[y][x+2] = '*';	
					}
					else
						break;
					
				}
				field[y][x] = ' ';
				field[y][x+1] = player;
				x++;
				break;
		}
	}while(input!='e');
	system("cls");
	printf("Thank You for Playing!");
	return 0;
}
