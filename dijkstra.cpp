#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#define BLOCK 999
#define START -1
#define END -2
#define PATH -3
//#define boolean
//global variable

struct Node{
	int value;
	int x;
	int y;
	int px;
	int py;
	Node *next,*prev;
}*head,*tail;


int map[20][20];
int map_checked[20][20];
int map_parent[20][20][2];
int map_track[20][20][2];
int map_size =20;
int start_x =1;
int start_y = 1;
int end_x = 12;
int end_y = 15;
int add_x[] = {0,0,1,-1};
int add_y[] = {1,-1,0,0};
//function 

//int memo[100];
bool is_edge(int x, int y ){
	if(x ==0  || y ==0) return true;
	if(x ==map_size-1 || y== map_size-1)return true;
	return false;
}
void clr(){
	for(int i=0;i<24;i++){
		printf("\n");
	}
}

void create_map(){
	for(int y =0;y<map_size;y++){
		for(int x=0;x<map_size;x++){
			if(is_edge(x,y)){
				map[y][x] = BLOCK;
			}
			else{
				int random = rand()%10;
				if(random >7)
					map[y][x] = BLOCK;
			}
		}
	}
	map[start_y][start_x] = START;
	map[end_y][end_x] = END;
}

void draw_map(){
	clr();
	for(int y =0;y<map_size;y++){
		for(int x=0;x<map_size;x++){
			if(map[y][x] == BLOCK)printf("#");
			else if(map[y][x] == START)printf("%c",1);
			else if(map[y][x] == END)printf("%c",2);
			else if(map[y][x] == PATH)printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}
void push(int value, int x, int y, int px, int py){
	Node *curr = (Node *)malloc(sizeof(Node));
	curr->value = value;
	curr->x = x;
	curr->y = y;
	curr->px = px;
	curr->py = py;
	curr->next = curr->prev = NULL;
	
	if(!head){
		head = tail = curr;
	}else{
		if(value < head->value){
			curr->next = head;
			head->prev = curr;
			head = curr;
		}else if(value >=tail->value){
			curr->prev = tail ;
			tail->next = curr;
			tail = curr;
		}else{
			Node *temp = head->next;
			while(temp){
				if(value < temp->value)break;
				temp = temp->next;
			}
			//push infront temp
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
void pop_all(){
	while(head)pop();
}

void backtrack(int x, int y){
	int px = map_parent[y][x][1];
	int py = map_parent[y][x][0];
	if(px == start_x && py == start_y) {
		map_track[py][px][0] = y;
		map_track[py][px][1] = x;
	return;
	}
	
	map[py][px] = PATH;
	map_track[py][px][0] = y;
	map_track[py][px][1] = x;

	backtrack(px,py);
}
void open_path(int x , int y){
	push(1,x,y,x,y);
	while(head){
		Node *curr = pop();
		map_checked[curr->y][curr->x] = 1;
		if(map[curr->y][curr->x]== END){
			map_parent[curr->y][curr->x][0] = curr->py;
			map_parent[curr->y][curr->x][1] = curr->px;
			backtrack(curr->x,curr->y);
			pop_all();
			break;
		}
		
		map_parent[curr->y][curr->x][0] = curr->py;
		map_parent[curr->y][curr->x][1] = curr->px;
		//map[curr->y] [curr->x] = PATH;
		
		/*Sleep(100);
		draw_map();
*/
		for(int i=0;i<4;i++){
			int next_y = add_y[i] + curr->y;
			int next_x = add_x[i] + curr->x;
			if(map[next_y] [next_x] == BLOCK)continue;
			if(map_checked[next_y] [next_x] == 1)continue;
			push(curr->value+1,next_x,next_y,curr->x,curr->y);
		}
	}
}
//int fibo(int n){
//	if(n<=1)return 1;
//	if(memo[n]!=0) return memo[n];
//	return memo[n] = fibo(n-2)+ fibo(n-1);
//}	
void move(int x, int y){
	int next_y = map_track[y][x][0];
	int next_x = map_track[y][x][1];
	
	if(next_y == end_y && next_x == end_x){
		return;
	}
	map[y][x] = 0;
	map[next_y] [next_x] = START;
	Sleep(500);
	draw_map();
	move(next_x, next_y);	
}
int main(){
	srand(time(NULL));
	//ini fibo
	//clr();
	////printf("%d",fibo(5));
	//for(int i=0;i<50;i++){
	//	printf("%d : %d'\n",i,fibo(i));
	//}

	//dijkstra
	create_map();
	draw_map();
	open_path(start_x,start_y);
	draw_map();
	move(start_x,start_y);
	getchar();
	return 0;
}

//#include<stdio.h>
//#include<stdlib.h>
//#include<vector>
//#include<algorithm>
//#include<time.h>
//using namespace std;
//
//struct tile
//{
//	int x;
//	int y;
//	int cost; //jarak yang ditempuh untuk lewat tile ini
//	char isi;
//	int distance;//jarak dari tile ini ke titik start
//	bool opened;
//	tile* parent;
//}*map[20][50];
//
//int startX;
//int startY;
//int endX;
//int endY;
//
//void initMap(){
//	for(int i=0;i<20;i++){
//		for(int j=0;j<50;j++){
//			map[i][j]=(tile*)malloc(sizeof(tile));
//			map[i][j]->opened=false;
//			map[i][j]->distance=999;
//			map[i][j]->parent=NULL;
//			map[i][j]->x=j;
//			map[i][j]->y=i;
//
//			if(i==0||j==0||i==19||j==49){
//				map[i][j]->isi='#';
//				map[i][j]->cost=999;
//			}else{
//				map[i][j]->isi=' ';
//				map[i][j]->cost=1;
//			}
//		}
//	}
//	//rintangan
//	int randomX;
//	int randomY;
//	for(int i=0;i<106;i++){
//		do{
//			randomX=rand()%50;
//			randomY=rand()%20;
//		}while(map[randomY][randomX]->isi!=' ');
//
//		map[randomY][randomX]->isi='#';
//		map[randomY][randomX]->cost=999;
//	}
//	//titik awal
//	do{
//		startX=rand()%50;
//		startY=rand()%20;
//	}while(map[startY][startX]->isi!=' ');
//	map[startY][startX]->isi='A';
//	//titik akhir
//	do{
//		endX=rand()%50;
//		endY=rand()%20;
//	}while(map[endY][endX]->isi!=' ');
//	map[endY][endX]->isi='B';
//}
//
//void printMap(){
//	for(int i=0;i<20;i++){
//		for(int j=0;j<50;j++){
//			printf("%c",map[i][j]->isi);
//		}
//		printf("\n");
//	}
//}
//
//bool sortDistance(tile* tile1,tile* tile2){
//	return tile1->distance<tile2->distance;
//}
//
//int main(){
//	srand(time(NULL));
//	initMap();
//	printMap();
//
//	//cari
//	vector<tile*>tiles;
//	tiles.push_back(map[startY][startX]);
//
//	while(tiles.size()!=0){
//		sort(tiles.begin(),tiles.end(),sortDistance);
//		tile* curr = tiles.at(0);
//		tiles.erase(tiles.begin());
//
//		if(curr==map[endY][endX]) break; //ketemu
//
//		//cek
//		//atas
//		tile* tetangga=map[curr->y-1][curr->x];
//		if(tetangga->opened==false){
//			tetangga->opened=true;
//			tetangga->distance=
//				curr->distance+tetangga->cost;
//			tetangga->parent=curr;
//			tiles.push_back(tetangga);
//		}
//		//bawah
//		tetangga=map[curr->y+1][curr->x];
//		if(tetangga->opened==false){
//			tetangga->opened=true;
//			tetangga->distance=
//				curr->distance+tetangga->cost;
//			tetangga->parent=curr;
//			tiles.push_back(tetangga);
//		}
//		//kiri
//		tetangga=map[curr->y][curr->x-1];
//		if(tetangga->opened==false){
//			tetangga->opened=true;
//			tetangga->distance=
//				curr->distance+tetangga->cost;
//			tetangga->parent=curr;
//			tiles.push_back(tetangga);
//		}
//		//kanan
//		tetangga=map[curr->y][curr->x+1];
//		if(tetangga->opened==false){
//			tetangga->opened=true;
//			tetangga->distance=
//				curr->distance+tetangga->cost;
//			tetangga->parent=curr;
//			tiles.push_back(tetangga);
//		}
//	}
//
//	//backtrack
//	tile* end=map[endY][endX];
//	map[startY][startX]->parent=NULL;
//
//	while(end->parent!=NULL){
//		end=end->parent;
//		end->isi='*';
//		system("cls");
//		printMap();
//	}
//
//	getchar();
//	return 0;
//}