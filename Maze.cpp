#include<stdio.h>
#include<Windows.h>
#include<time.h>
#include<vector>
#include<queue>
#include<iostream>

using namespace std;

int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

struct idx{
	int val;
	idx *parent;

	idx(){
		val = 1;

	}
} maze[30][50];

void clear(){
	for(int i = 0; i < 25; i++) puts("");
}

void random(int *r){
	for(int i = 0; i < 4; i++){
		int n = rand() % 4;
		r[i] ^= n;
		n ^= r[i];
		r[i] ^= n;
	}
}

void printMap(){
	system("cls");
	for(int i = 0; i < 30; i++){
		for(int j = 0; j < 50; j++){
			char t = '#';
			switch(maze[i][j].val){
			case 1: t = '#'; break;
			case 2: t = ' ';break;
			case 3: t = 'S';break;
			case 4: t = 'E';break;
			}
			putchar(t);
		}
		puts("");
	}
}


void makePath(int x, int y, int dir){
	
	if(x + dx[dir]*2 >= 49 || x + dx[dir]*2 <= 0 || y + dy[dir]*2 >= 29 || y + dy[dir]*2 <= 0) return;
	if(maze[y+dy[dir]*2][x+dx[dir]*2].val != 2){
		maze[y+dy[dir]][x+dx[dir]].val = 2; // set to space
		maze[y+dy[dir]*2][x+dx[dir]*2].val = 2; // second expand
	} else {
		if(rand() % 4	)
			maze[y+dy[dir]][x+dx[dir]].val = 2;
	}

	//printMap();
	//Sleep(10);

	x += dx[dir]*2;
	y += dy[dir]*2;

	int r[4] = {1,2,3,4};
	random(r);
	for(int i = 0; i < 4; i++){
		dir = r[i];
		if(maze[y+dy[dir]*2][x+dx[dir]*2].val != 2) makePath(x,y,dir);
	}
}

int main(){
	srand(time(NULL));

	makePath(rand()%48+1, rand()%28+1, 1);
	int input;
	do{
		clear();
		puts("-=NighKmare=-");
		puts("1. Play");
		puts("2. Exit");
		scanf("%d", 
	} while (input != 2);

	return 0;
}