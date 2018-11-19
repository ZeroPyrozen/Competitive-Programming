#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<conio.h>
#include<ctype.h>
#include<time.h>
#include<random>
#define cls for(int i = 0 ; i < 30 ; i++) puts("");
#define flush while(getchar() != '\n')
void inputScore(int point);
void menu();
void pilihan1();
void bacaUser();
void saveUser();
int genFlood();
void cekFlood(int x, int y);
void play();
void gotoxy(int x, int y);
int isMap(char namaMap[]);
void cetakCurr();
int bacaScore();
void cetakHiScore();
void registerAkun();
void bikinMap();
void tampilBikinMap();
void genEnti();
void bermain();
void simpanMap(char namaMap[]);
void mainCurr();

int cek = 684;
char userHiScore[100][100];
int scoreHi[100];
int hi = 0;

char currMap[100][100];
char map[100][100];
char mapFlood[100][100];
char usernameList[100][100];
char passwordList[100][100];
int index = -1;
int jumlah = 0;
int biji = 50;
int posX = 1;
int posY = 1;

void setColor(WORD w){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), w);
}


void gotoxy(int x, int y){
	COORD c = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}


void genMap(){
	for(int i = 0 ; i < 20 ; i++){
		for(int j = 0 ; j < 40 ; j++){
			if(i == 0 || i == 19 || j == 0 || j == 39){
				map[i][j] = '#';
			}else{
				map[i][j] = ' ';
			}
		}
	}
}

void cetakMap(){
	for(int i = 0 ; i < 20 ; i++){
		for(int j = 0 ; j < 40 ; j++){
			printf("%c", map[i][j]);
		}
		puts("");
	}
}

void cetakFlood(){
	for(int i = 0 ; i < 20 ; i++){
		for(int j = 0 ; j < 40 ; j++){
			printf("%c", mapFlood[i][j]);
		}
		puts("");
	}
}

int genFlood(){
	cek = 684;
	cek = cek - (50-biji);
	int x;
	int y;
	for(int i = 0 ; i < 20 ; i++){
		strcpy(mapFlood[i], currMap[i]);
	}
	while(1){
		x = rand()%39+1;
		y = rand()%19+1;
		if(mapFlood[y][x] == ' ') break;
	}
	cekFlood(x,y);
	if(cek != 0){
		return 0;
	}else{
		return 1;
	}
}

void cekFlood(int x, int y){
	if(mapFlood[y][x] == '#'){
		return;
	}
	mapFlood[y][x] = '#';
	cek--;
	//cetakFlood();
	cekFlood(x, y+1);
	cekFlood(x, y-1);
	cekFlood(x-1, y);
	cekFlood(x+1, y);
}

int main(){
	srand(time(0));
	bacaUser();
	genMap();
	menu();
	//getchar();
}

void menu(){
	int pilihan;
	char key = 'b';
	do{
		do{
			system("cls");
			cls;
			puts("1. Login	 ");
			puts("2. Register");
			puts("3. Exit	 ");
			printf(">>");
			key = getch();
		}while(key < 49 || key > 51);
		switch(key){
		case '1':
			pilihan1();
			break;
		case '2':
			registerAkun();
			break;
		}
	}while(key != 51);
}

void pilihan1(){
	while(1){
		index = -1;
		system("cls");
		cls;
		char username[100];
		printf("Input your username [input \"exit\" to return main menu]: ");
		scanf("%[^\n]", username); flush;
		if(strcmp(username, "exit") == 0) break;
		char password[100];
		printf("Input your password: ");
		scanf("%[^\n]", password); flush;
		for(int i = 0 ; i < jumlah ; i++){
			if(strcmp(username, usernameList[i]) == 0){
				if(strcmp(password, passwordList[i]) == 0){
					index = i;
					break;
				}
			}
		}
		if(index == -1){
			printf("Invalid Username or Password");
			getchar();
		}else{
			printf("Welcome %s!!!", username);
			getchar();
			play();
			break;
		}
	}
}

void bacaUser(){
	FILE *fp;
	fp = fopen("user.txt", "r+");
	if(fp == NULL){
		return;
	}
	while(fscanf(fp, "%[^#]#%[^\n]\n", usernameList[jumlah], passwordList[jumlah]) != EOF){
		jumlah++;
	}

	fclose(fp);
}

void play(){
	char namaMap[100] = "_map.txt";
	char temp[100];
	strcpy(temp, usernameList[index]);
	strcat(temp, namaMap);
	system("cls");
	int tanda = isMap(temp);
	char key;
	do{
		do{
			system("cls");
			cetakCurr();
			gotoxy(42 , 6);
			printf("1. Play Game");
			gotoxy(42, 7);
			printf("2. Create Map");
			gotoxy(42, 8);
			printf("3. High Score");
			gotoxy(42, 9);
			printf("4. Log out");
			gotoxy(42, 10);
			printf(">>");
			key = getch();
			gotoxy(0, 0);
		}while(key < 49 || key > 52);
		switch(key){
		case '1':
			bermain();
			break;
		case '2':
			tampilBikinMap();
			break;
		case '3':
			cetakHiScore();
			break;
		}
	}while(key != 52);
}

int isMap(char namaMap[]){
	FILE *fp;
	fp = fopen(namaMap, "r+");
	if(fp == NULL){
		for(int i = 0 ; i < 20 ; i++){
			for(int j = 0 ; j < 40 ; j++){
				if(i == 0 || j == 0 || i == 19 || j == 39){
					currMap[i][j] = '#';
				}else{
					currMap[i][j] = ' ';
				}
			}
		}
		return 0;
	}
	int i = 0;
	for(int i = 0 ; i < 20 ; i++){
		fscanf(fp, "%[^\n]\n", currMap[i]);
	}
	fscanf(fp, "%d", &biji);
	fclose(fp);
	return 1;
}

void cetakCurr(){
	for(int i = 0 ; i < 20 ; i++){
		for(int j = 0 ; j < 40 ; j++){
			printf("%c", currMap[i][j]);
		}
		printf("\n");
	}
}

int bacaScore(){
	hi = 0;
	FILE *fp;
	fp = fopen("score.txt", "r+");
	if(fp == NULL){
		return 0;
	}else{
		while(fscanf(fp, "%[^#]#%d\n", userHiScore[hi], &scoreHi[hi]) != EOF){
			hi++;
		}
	}
	fclose(fp);
	return 1;
}

void cetakHiScore(){
	system("cls");
	cls;
	int ada = bacaScore();
	if(ada = 0 || hi == 0){
		printf("No Score");
		getchar();
		system("cls");
	}else{
		printf("       +==+==++==+==+		\n");
		printf("       | High Score |		\n");
		printf("       +==+==++==+==+		\n");
		printf("							\n");
		printf("+-----+------------+-------+\n");
		printf("| No. |  Username  | Score |\n");
		printf("+-----+------------+-------+\n");
		for(int i = 0 ; i < hi ; i++){
			printf("|  %d. | %s     |     %d |\n", i+1, userHiScore[i], scoreHi[i]);
		}
		printf("+-----+------------+-------+\n");
		getchar();
		system("cls");
	}
}

int cekUsername(char user[]){
	for(int i = 0 ; i < jumlah; i++){
		if(strcmp(usernameList[i], user) == 0){
			return 0;
		}
	}
	return 1;
}

void registerAkun(){
	system("cls");
	cls;
	char user[100];
	char pass[100];
	char confirm[100];
	int selain = 0;
	int cek;
	do{
		cek = 1;
		selain = 0;
		strcpy(user, "");
		printf("Input your username: ");
		scanf("%[^\n]", user); flush;
		cek = cekUsername(user);
		int len = strlen(user);
		for(int i = 0 ; i < len ; i++){
			if(isalpha(user[i]) != 0 || isdigit(user[i]) != 0){

			}else if(isalpha(user[i]) == 0 || isdigit(user[i]) == 0){
				printf("User must be only contain alphabetic and numeric\n");
				selain = 1;
			}if(strlen(user) < 5 || strlen(user) > 10){
				printf("User must be between 5 - 10 characters\n");
				selain = 1;
			}
			
			if(selain == 1){
				break;
			}
		}
		if(cek != 1){
			printf("Username has taken\n");		
		}
	}while(selain > 0 || (strlen(user) < 5 || strlen(user) > 10) || cek != 1);
	do{
		selain = 0;
		printf("Input your password : ");
		scanf("%[^\n]", pass); flush;
		int len = strlen(pass);
		for(int i = 0 ; i < len ; i++){
			if(isalpha(pass[i]) != 0 || isdigit(pass[i]) != 0){

			}else if(isalpha(pass[i]) == 0 || isdigit(pass[i]) == 0){
				printf("Password must be only contain alphabetic and numeric\n");
				selain = 1;
			}if(strlen(pass) < 8 || strlen(pass) > 20){
				printf("Password must be between 8 - 20 characters\n");
				selain = 1;
			}
			if(selain == 1){
				break;
			}
		}
		
	}while(selain > 0 || (strlen(pass) < 8 || strlen(user) > 20));
	
	do{
		printf("Input your confirm password : ");
		scanf("%[^\n]", confirm); flush;
		if(strcmp(confirm, pass) != 0){
			printf("Confirm password not same with password\n");
		}
	}while(strcmp(confirm, pass) != 0);

	printf("Success register new account");
	getchar();
	
	strcpy(usernameList[jumlah], user);
	strcpy(passwordList[jumlah], pass);
	jumlah++;
	saveUser();
}

void saveUser(){
	FILE *fp;
	fp = fopen("user.txt", "w");
	if(fp == NULL){
		printf("Gk ada file coy");
		getchar();
		return;
	}
	for(int i = 0 ; i < jumlah ; i++){
		fprintf(fp, "%s#%s\n", usernameList[i], passwordList[i]);
	}
	fclose(fp);
}

void tampilBikinMap(){
	char namaMap[100] = "_map.txt";
	char temp[100];
	int flag;
	strcpy(temp, usernameList[index]);
	strcat(temp, namaMap);
	system("cls");
	int tanda = isMap(temp);
	char key;
	do{
		do{
			do{
				system("cls");
				cetakCurr();
				gotoxy(42 , 2);
				printf("Information:");
				gotoxy(42, 3);
				printf("- Use arrow to move cursor position");
				gotoxy(42, 4);
				printf("- Press 'space' to add or remove wall");
				gotoxy(42, 5);
				printf("- Press 'esc' to save map");
				gotoxy(0, 20);
				printf("Blocks remaining : %d", biji);
				gotoxy(posX, posY);
				key = getch();
			
			}while(key != 27 && key != 72 && key != 75 && key != 77 && key != 80 && key != 32);
		//break;
			switch(key){
			case 32:
				if(currMap[posY][posX] == ' '){
					if(biji > 0){
						currMap[posY][posX] = '#';
						biji--;
					}
				}else{
					currMap[posY][posX] = ' ';
					biji++;
				}
				break;
			case 72://up
				if(posY > 1){
					posY--;
				}
				break;
			case 75://left
				if(posX > 1){
					posX--;
				}
				break;
			case 77://right
				if(posX < 38){
					posX++;
				}
				break;
			case 80://down
				if(posY < 18){
					posY++;
				}
				break;
		
			}

		}while(key != 27);
		flag = genFlood();
			if(flag == 1){
				simpanMap(temp);
				gotoxy(44, 9);
				printf("Success saving new map!");
				getchar();
			}else{
				gotoxy(44, 9);
				setColor(0x0C);
				printf("Flood Fill Validation Error!!!");
				setColor(0x0F); 
				getchar();
			}
	}while(flag != 1);
}

void simpanMap(char namaMap[]){
	FILE *fp;
	fp = fopen(namaMap, "w+");
	for(int i = 0 ; i < 20 ; i++){
		fprintf(fp, "%s\n", currMap[i]);
	}
	fprintf(fp,"\n%d", biji);
	fclose(fp);
}

void genEnti(){
	int x;
	int y;
	int trap = 0;
	while(1){
		x = rand()%39+1;
		y = rand()%19+1;
		
		if(currMap[y][x] == ' ' && (currMap[y][x] != '#' && currMap[y][x] != '!')){
			trap++;
			currMap[y][x] = '!';
		}
		if(trap >= 10) break;
	}
	while(1){
		x = rand()%39+1;
		y = rand()%19+1;
		//printf("asd");
		if(currMap[y][x] == ' ' && currMap[y][x] != '#' && currMap[y][x] != '!'){
			posX = x;
			posY = y;
			break;
		}
	}
}

void cleanTrap(){
	for(int i = 0 ; i < 20 ; i++){
		for(int j = 0 ; j < 40 ; j++){
			if(currMap[i][j] == '!'){
				currMap[i][j] = ' ';
			}
		}
	}
}

void spawnStar(){
	int x;
	int y;
	while(1){
		x = rand()%39+1;
		y = rand()%19+1;
		if(currMap[y][x] == ' ' && currMap[y][x] != '#' && currMap[y][x] != '!' && x != posX && posY != y){
			currMap[y][x] = '*';
			break;
		}
	}
}

void cleanStar(){
	for(int i = 0 ; i < 20 ; i++){
		for(int j = 0 ; j < 40 ; j++){
			if(currMap[i][j] == '*'){
				currMap[i][j] = ' ';
			}
		}
	}
}

void bermain(){
	char key;
	int flag = 0;
	int point = 0;
	cleanTrap();
	genEnti();
	spawnStar();
		do{
			do{
				system("cls");
				mainCurr();
				gotoxy(42 , 4);
				printf("Move Player");
				gotoxy(42, 6);
				printf("   W");
				gotoxy(42, 8);
				printf("A      D");
				gotoxy(42, 10);
				printf("   S\n");
				gotoxy(42, 13);
				printf("Point  : %d", point);
				key = getch();
				key = toupper(key);
			}while(key != 'A' && key != 'W' && key != 'S' && key != 'D');
			switch(key){
			case 'A':
				if(currMap[posY][posX-1] !=  '#'){
					posX--;
					if(currMap[posY][posX] == '!'){
						flag = 1;
					}else if(currMap[posY][posX] == '*'){
						point++;
						currMap[posY][posX] = ' ';
						spawnStar();
					}
				}
				break;
			case 'W':
				if(currMap[posY-1][posX] !=  '#'){
					posY--;
					if(currMap[posY][posX] == '!'){
						flag = 1;
					}else if(currMap[posY][posX] == '*'){
						point++;
						currMap[posY][posX] = ' ';
						spawnStar();
					}
				}
				break;
			case 'S':
				if(currMap[posY+1][posX] !=  '#'){
					posY++;
					if(currMap[posY][posX] == '!'){
						flag = 1;
					}else if(currMap[posY][posX] == '*'){
						point++;
						currMap[posY][posX] = ' ';
						spawnStar();
					}
				}
				break;
			case 'D':
				if(currMap[posY][posX+1] !=  '#'){
					posX++;
					if(currMap[posY][posX] == '!'){
						flag = 1;
					}else if(currMap[posY][posX] == '*'){
						point++;
						currMap[posY][posX] = ' ';
						spawnStar();
					}
				}
				break;
			}
			if(flag == 1){
				currMap[posY][posX] = 'X';
				break;
			}
		}while(1);
			
			system("cls");
			mainCurr();
			gotoxy(42 , 4);
			printf("Move Player");
			gotoxy(42, 6);
			printf("   W");
			gotoxy(42, 8);
			printf("A      D");
			gotoxy(42, 10);
			printf("   S");
			gotoxy(42, 13);
			setColor(0x0C);
			printf("Opps, you stepped on a trap");
			gotoxy(42, 14);
			printf("You Lose !!!");
			cleanTrap();
			getchar(); flush;
			currMap[posY][posX] = ' ';
			cleanStar();
			setColor(0x0F);	
			inputScore(point);
}

void mainCurr(){
	for(int i = 0 ; i < 20 ; i++){
		for(int j = 0 ; j < 40 ; j++){
			if(i == posY && j == posX && currMap[i][j] != 'X'){
				setColor(0x0B);
				printf("%c", 1);
				setColor(0x0F);
			}
			else if(currMap[i][j] == 'X'){
				setColor(0x0C);
				printf("%c", currMap[i][j]);
				setColor(0x0F);
			}else if(currMap[i][j] == '*'){
				setColor(0x0E);
				printf("%c", currMap[i][j]);
				setColor(0x0F);
			}else if(currMap[i][j] == '!'){
				printf(" ");
			}
			else printf("%c", currMap[i][j]);
		}
		printf("\n");
	}
}

void sortScore(){
	for(int i = 0 ; i < hi - 1; i++){
		for(int j = 0 ; j < hi - i - 1 ; j++){
			if(scoreHi[j] < scoreHi[j+1]){
				int temp = scoreHi[j];
				scoreHi[j] = scoreHi[j+1];
				scoreHi[j+1] = temp;
				char tempNama[100];
				strcpy(tempNama, userHiScore[j]);
				strcpy(userHiScore[j], userHiScore[j+1]);
				strcpy(userHiScore[j+1], tempNama);
			}
		}
	}
}

void simpanScore(){
	FILE *fp;
	fp = fopen("score.txt", "w+");
	if(fp == NULL){

		return;
	}else{
		for(int i = 0 ; i < hi ; i++){
			fprintf(fp, "%s#%d\n", userHiScore[i], scoreHi[i]);
		}
	}
	fclose(fp);
}

void inputScore(int point){
	strcpy(userHiScore[hi], usernameList[index]);
	scoreHi[hi] = point;
	hi++;
	sortScore();
	simpanScore();
}
