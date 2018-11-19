#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <Windows.h>
#define flush() while(getchar() != '\n')
#define hapus() system("cls")
using namespace std;

struct Coor {
	int x;
	int y;
}startCoor, endCoor;
struct Map {
	char value;
	int cost;
	Coor parent;
}map[31][51];
int width = 50, height = 30;

vector<Coor> open_list;
vector<Coor> close_list;

bool found = false;

void initialization() {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			map[i][j].cost = 0;
			map[i][j].value = ' ';
			map[i][j].parent.x = j;
			map[i][j].parent.y = i;
			if (j == 0 || i == 0 || i == height - 1 || j == width - 1)
				map[i][j].value = '#';
		}
	}

	for (int i = 0; i < 500; i++) {
		map[rand() % height][rand() % width].value = '#';
	}
	startCoor.x = rand() % width + 1;
	startCoor.y = rand() % height + 1;
	endCoor.x = rand() % width + 1;
	endCoor.y = rand() % height + 1;
}

void printMap() {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (startCoor.x == j && startCoor.y == i) {
				printf("S");
			}
			else if (endCoor.x == j && endCoor.y == i) {
				printf("E");
			}
			else printf("%c", map[i][j].value);
		} puts("");
	}
}

bool isVisited(Coor temp, vector<Coor> vecTemp) {
	for (int i = 0; i < vecTemp.size(); i++) {
		if (temp.x == vecTemp[i].x && temp.y == vecTemp[i].y)
			return true;
	}
	return false;

}

bool isEligible(Coor temp) {
	if (temp.x < 0 || temp.y < 0 || temp.x > width || temp.y > height ||
		map[temp.y][temp.x].value == '#' || isVisited(temp, close_list) || isVisited(temp, open_list)
		) return false;

	return true;
}

void updateMap(Coor curr) {
	int directx[4] = { -1, 0, 0, 1 };
	int directy[4] = { 0, 1, -1, 0 };
	for (int i = 0; i < 4; i++) {
		Coor temp;
		temp.x = curr.x + directx[i];
		temp.y = curr.y + directy[i];
		if (isEligible(temp)) {
			open_list.push_back(temp);
			map[temp.y][temp.x].parent.x = curr.x;
			map[temp.y][temp.x].parent.y = curr.y;
			map[temp.y][temp.x].cost = map[curr.y][curr.x].cost + 1;
		}
	}
}

void pathFinding(Coor curr) {
	if (curr.x == endCoor.x && curr.y == endCoor.y) {
		found = true;
	}
	if (found) return;

	startCoor.x = curr.x;
	startCoor.y = curr.y;
	updateMap(curr);

	Coor temp = curr;
	open_list.erase(open_list.begin());
	close_list.push_back(temp);

	if (open_list.size() > 0) {

		pathFinding(open_list[0]);
	}
}

void play() {
	printMap();
	open_list.push_back(startCoor);
	pathFinding(open_list[0]);
	printf("Shortest path : %d", map[endCoor.y][endCoor.x].cost);
	getchar();
}

void menu() {
	int choose;
	do {
		printf("-=NighKmare=-\n");
		printf("=============\n");
		printf("1. Play\n");
		printf("2. Exit\n");
		scanf("%d", &choose); flush();
		switch (choose) {
		case 1:
			play();
			break;
		}
	} while (choose != 2);
}

int main() {
	srand(time(NULL));
	initialization();
	menu();
	return 0;
}