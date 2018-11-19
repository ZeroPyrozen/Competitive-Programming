#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	char input;
	char map[100][100];
	int y=5, x=5;
	while(1)
	{
		
		input = getch();
		
		if(input == 'w')
		{
			if(map[y-1][x]!='#')
				y--;
		}
		else if(input == 's')
		{
			if(map[y+1][x]!='#')
				y++;
		}
		else if(input == 'a')
		{
			if(map[y][x-1]!='#')
				x--;
		}
		else if(input == 'd')
		{
			if(map[y][x+1]!='#')
				x++;
		}
		for (int i=0; i<30 ;i++)
		{
			for (int j=0; j<30; j++)
			{
				if(i == 0 || j ==0 || i == 29 || j == 29)
				{
					map[i][j] = '#';
				
				}
				else if(i == y && j == x)
				{
					map[i][j] ='%';
				}
				else
				{
					map [i][j] = ' ';
				}
			}
		}
		system("cls");
		for (int i=0; i<30 ;i++)
		{
			for (int j=0; j<30; j++)
			{
				printf("%c",map[i][j]);
			}
			puts("");
		}
	}
}

