#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<string.h>
#include<time.h>

struct Node
{
	int value;
	int x;
	int y;
	int px;
	int py;
	struct Node *next,*prev;
}*head,*tail;
int map[30][50];
int mapCheck[30][50];
int mapParent[30][50][2];
int mapTrack[30][50][2];
int mapSizeW = 50;
int mapSizeH = 30;
int startX;
int startY;
int endX;
int endY;
int addX[] = {0,0,1,-1};
int addY[] = {1,-1,0,0};
const int INF =(int) 2e9;
bool isWall(int x, int y)
{
	if(x==0||y==0)
		return true;
	else if(x==mapSizeW-1||y==mapSizeH-1)
		return true;
	else if(INF==map[y][x])
		return true;
	else
		return false;
}
void generateMap()
{
	srand(time(NULL));
	for(int y=0; y<mapSizeH; y++)
	{
		for(int x=0; x<mapSizeW; x++)
		{
			if(isWall(x,y))
			{
				map[y][x] = INF;
			}
			else
			{
				int randomCoor = rand()%10;
				if(randomCoor>5)
				{
					map[y][x] = INF;
				}
			}
		}
	}
	int randStartX = rand()%50;
	int randStartY = rand()%30;
	while(isWall(randStartX,randStartY))
	{
		randStartX = rand()%50;
		randStartY = rand()%30;
	}
	int randEndX = rand()%50;
	int randEndY = rand()%30;
	while(isWall(randEndX,randEndY))
	{
		randEndX = rand()%50;
		randEndY = rand()%30;
	}
	startX = randStartX;
	startY = randStartY;
	endX = randEndX;
	endY = randEndY;
	map[randStartY][randStartX] = -1;
	map[randEndY][randEndX] = -2;
}
void push(int value, int x,int y, int px, int py)
{
	Node *curr = (Node*)malloc(sizeof(Node));
	curr->value = value;
	curr->x = x;
	curr->y = y;
	curr->px = px;
	curr->py = py;
	curr->next = curr->prev = NULL;
	if(!head)
	{
		head = tail = curr;
	}
	else
	{
		if(value < head->value)
		{
			curr->next = head;
			head->prev = curr;
			head = curr;
		}
		else if(value >=tail->value)
		{
			curr->prev = tail ;
			tail->next = curr;
			tail = curr;
		}
		else
		{
			Node *temp = head->next;
			while(temp)
			{
				if(value < temp->value)
					break;
				temp = temp->next;
			}
			curr->next = temp;
			curr->prev = temp->prev;
			temp->prev->next = curr;
			temp->prev =curr;
		}
	}	
}
Node* pop(){
	if(head){
		Node *curr  = (Node*)malloc(sizeof(Node));
		curr->value = head->value;
		curr->x = head->x;
		curr->y = head->y;
		curr->x = head->x;
		curr->y = head->y;
		curr->px = head->px;
		curr->py = head->py;
		if(head == tail){
			free(head);
			head = tail = NULL;
			return curr;
		}
		head = head->next;
		free(head->prev);
		head->prev = NULL;
		return curr;
	}
}
void pop_all()
{
	while(head)pop();
}
void backtrack(int x, int y)
{
	int px = mapParent[y][x][1];
	int py = mapParent[y][x][0];
	if(px == startX && py == startY) 
	{
		mapTrack[py][px][0] = y;
		mapTrack[py][px][1] = x;
		return;
	}
	
	map[py][px] = -3;
	mapTrack[py][px][0] = y;
	mapTrack[py][px][1] = x;

	backtrack(px,py);
}
void openPath(int x , int y){
	push(1,x,y,x,y);
	while(head){
		Node *curr = pop();
		mapCheck[curr->y][curr->x] = 1;
		if(map[curr->y][curr->x]== -2){
			mapParent[curr->y][curr->x][0] = curr->py;
			mapParent[curr->y][curr->x][1] = curr->px;
			backtrack(curr->x,curr->y);
			pop_all();
			break;
		}
		
		mapParent[curr->y][curr->x][0] = curr->py;
		mapParent[curr->y][curr->x][1] = curr->px;
		for(int i=0;i<4;i++)
		{
			int next_y = addY[i] + curr->y;
			int next_x = addX[i] + curr->x;
			if(map[next_y] [next_x] == INF)continue;
			if(mapCheck[next_y] [next_x] == 1)continue;
			push(curr->value+1,next_x,next_y,curr->x,curr->y);
		}
	}
}
void drawmap(){
	printf("\n\n\n\n\n\n\n\n");
	for(int y =0;y<mapSizeH;y++)
	{
		for(int x=0;x<mapSizeW;x++)
		{
			if(map[y][x] == INF)printf("#");
			else if(map[y][x] == -1)printf("%c",'S');
			else if(map[y][x] == -3)printf("%c",'E');
			else printf(" ");
		}
		printf("\n");
	}
}
void playerMove()
{
	char move;
	do
	{
		drawmap();
		scanf("%c",&move);
		fflush(stdin);
		switch(move)
		{
		case 'w':
			map[startY][startX] = INF;
			startY++;
			map[startY][startX] = -1;
			break;
		case 'a':
			map[startY][startX] = INF;
			startX--;
			map[startY][startX] = -1;
			break;
		case 'd':
			map[startY][startX] = INF;
			startX++;
			map[startY][startX] = -1;
			break;
		case 's':
			map[startY][startX] = INF;
			startY--;
			map[startY][startX] = -1;
			break;
		}
	}while(startX!=endX&&startY!=endY);
}
void move(int x, int y){
	int next_y = mapTrack[y][x][0];
	int next_x = mapTrack[y][x][1];
	
	if(next_y == endY && next_x == endX){
		return;
	}
	map[y][x] = 0;
	map[next_y] [next_x] = -1;
	Sleep(500);
	//drawmap();
	move(next_x, next_y);
	
}
void play()
{
	generateMap();
	drawmap();
	openPath(startX,startY);
	playerMove();
	//drawmap();
	//move(startX,startY);
}
int main()
{
	int menu;
	do
	{
		printf("1. Play\n2. Exit\n\n");
		scanf("%d",&menu);
		fflush(stdin);
		switch(menu)
		{
		case 1:
			play();
			getchar();
			break;
		case 2:
			exit(0);
			break;
		}
	}while(menu!=2);
	return 0;
}