#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct Map{
	char value;
	bool passed;
};

Map map[30][50], replica[30][50];
int start_x, start_y, end_x, end_y;

void init(){
	for(short i = 0; i < 30; i++){
		for(short j = 0; j < 50; j++){
			if(i == 0 || i == 29 || j == 0 || j == 49) map[i][j].value = replica[i][j].value = '#';
			map[i][j].passed = replica[i][j].passed= false;
		}
	}
}

void setMap(){
	srand(time(NULL));
	start_x = rand() % 48 + 1;
	start_y = rand() % 28 + 1;
	end_x = rand() % 48 + 1;
	end_y = rand() % 28 + 1;
	for(short i = 1; i < 29; i++){
		for(short j = 1; j < 49; j++){
			if(i == start_y && j == start_x) map[i][j].value = replica[i][j].value = 1;
			else if(i == end_y && j == end_x) map[i][j].value =  = replica[i][j].value = 2;
			else if(map[i + 1][j].value == '#' || map[i - 1][j].value == '#' || map[i][j + 1].value == '#' || map[i][j - 1].value == '#' || map[i - 1][j - 1].value == '#' || map[i - 1][j + 1].value == '#' ||(map[i + 2][j].value == '#' && map[i + 1][j + 1].value == '#') || (map[i - 2][j].value == '#' && map[i - 1][j - 1].value == '#') || (map[i][j + 2].value == '#' && map[i + 1][j + 1].value == '#') || (map[i][j - 2].value == '#' && map[i - 1][j - 1].value == '#')) map[i][j].value = replica[i][j].value = ' ';
			else {
				int temp = rand() % 7;
				if(temp == 3 || temp == 4) map[i][j].value = replica[i][j].value = '#';
			}
		}
	}
}

void printMap(){
	for(short i = 0; i < 30; i++){
		for(short j = 0; j < 50; j++){
			printf("%c", map[i][j].value);
		}
		puts("");
	}
}

void dijkstra(){
	replica[start_y][start_x].passed = true;

}

int main(){
	init();
	setMap();
	printMap();

	dijkstra();

	getchar();
	return 0;
}