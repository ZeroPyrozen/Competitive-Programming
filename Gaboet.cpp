//#include <stdio.h>
//#include <ctype.h>
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	int  i, max = 0, min = 0, input, score[5][12]; //listening, reading, essay, score; (Array ditambahkan untuk Delete Data)
//	char student[12][26], status[12][50] = {}; //Array ditambah 1 untuk Delete Data)
//	float mean = 0;
//	int studentcounter = 0; //Cek Jumlah Siswa
//	int cekHuruf, index, panjangNama, flag, tampungHuruf; //Validasi Nama
//	int choose;//Untuk Deletion dan Update
//	do
//	{
//		printf("Smart English Course Center\n");
//		printf("**********************\n");
//		printf("1. Add New Data\n");
//		printf("2. View Data\n");
//		printf("3. View Summary\n");
//		printf("4. Delete Data\n");
//		printf("5. Update Data\n");
//		printf("6. Exit\n\n");
//		printf("Your Option [1..4] = ");
//		scanf("%d", &input); 
//		fflush(stdin);
//		switch (input)
//		{
//		case 1:
//			//Add New Data
//			if (studentcounter < 10)
//			{
//				
//				do
//				{
//					flag=0; //Inisialisasi flag
//					printf("\nInput Students Name [1..25 char]= ");
//					scanf("%[^\n]",&student[studentcounter]);fflush(stdin);
//					panjangNama = strlen(student[studentcounter]);
//					for(index=0; index<panjangNama; index++)
//					{
//						tampungHuruf = student[studentcounter][index]; //Tampung Huruf untuk dicek
//						if(tampungHuruf>=33&&tampungHuruf<=64||tampungHuruf>=91&&tampungHuruf<=96||tampungHuruf>=123&&tampungHuruf<=126) 
//						//Tidak boleh ada digit dan simbol (ASCII)
//						{
//							flag=0;
//							break; //Jika ada yang salah, langsung berhenti
//						}
//						else
//						{
//							flag=1;
//						}
//					}
//				}
//				while(panjangNama < 1 || panjangNama > 25||flag==0);
//
//
//				//Validasi Listening
//				do
//				{
//					printf("Correct Answer for Listening Section [0..20] = ");
//					scanf("%d",&score[0][studentcounter]);fflush(stdin);
//				}
//				while(score[0][studentcounter] < 0 || score[0][studentcounter] > 20);
//
//				//Validasi Reading
//				do
//				{
//					printf("Correct Answer for Reading Section [0..30] = ");
//					scanf("%d",&score[1][studentcounter]);fflush(stdin);
//				}
//				while(score[1][studentcounter] < 0 || score[1][studentcounter] > 30);
//
//				//Validasi Essay
//				do
//				{
//					printf("Correct Answer for Essay Section [0..25] = ");
//					scanf("%d",&score[2][studentcounter]);fflush(stdin);
//				}
//				while(score[2][studentcounter] < 0 || score[2][studentcounter] > 25);
//
//				//Langsung hitung result
//				score[3][studentcounter] = (score[0][studentcounter]*1) + (score[1][studentcounter]*1) + (score[2][studentcounter]*2);
//
//				//Masukkin ke keterangan, cek nilainya
//				if(score[3][studentcounter] < 50)
//				{
//					strcpy(status[studentcounter],"Failed");
//				}
//				else
//				{
//					if(score[3][studentcounter] > 80)
//					{
//						strcpy(status[studentcounter],"Very Good");
//					}
//					else
//					{
//						if(score[3][studentcounter] > 70)
//						{
//							strcpy(status[studentcounter],"Good");
//						}
//						else
//						{
//							strcpy(status[studentcounter],"Pass");
//						}
//					}
//				}
//
//				//Tambah satu murid lagi
//				studentcounter++;
//			}
//			else
//			{
//				printf("You can't input anymore data\n");
//			}
//			system("cls"); //Biar user kagak iseng-iseng tengok ke atas wkwkwkwkwkwk
//			break;
//
//		case 2:
//
//			//View Data
//			if (studentcounter > 0)
//			{
//				//Menambah Estetika
//				for(index=1; index<=80; index++){printf("=");}
//				//supaya rapi, pake begini
//				printf("\n%-25s| %-10s| %-10s| %-7s| %-7s| %-10s|\n","Name","Listening","Reading","Essay","Score","Grade");
//				for(index=1; index<=80; index++){printf("=");}
//				printf("\n");
//				for (i = 0; i < studentcounter; i++)
//				{
//					//print sebanyak n
//					printf("%-25s|%-10d |%-10d |%-7d |%-7d |%-11s|\n",student[i], score[0][i], score[1][i], score[2][i], score[3][i], status[i]);
//					for(index=1; index<=80; index++){printf("=");}
//				}
//			}
//			else
//			{	
//				//kalau kosong, tidak tampilkan
//				printf("Data is Empty...\n");
//			}
//			getchar();
//			system("cls");
//			break;
//
//		case 3:
//			//Hitung Max
//			if(studentcounter == 0)
//			{
//				//Tidak ada nilainya
//				max = 0;
//				min = 0;
//				mean = 0;
//			}
//			else
//			{
//				//reset smua ke 0 untuk menghindari overlapping nilai dari sebelumnya
//				max = 0;
//				min = 0;
//				mean = 0;
//
//				//assumsi awal
//				max = score[3][0];
//				min = score[3][0];
//				mean = score[3][0];
//
//				for (i = 1; i < studentcounter; i++)
//				{
//					//cari nilai max
//					if (score[3][i] > max)
//					{
//						max = score[3][i];
//					}
//
//					//Cari nilai min
//					if (score[3][i] < min)
//					{
//						min = score[3][i];
//					}
//
//					//Hitung rata-rata
//					mean += score[3][i];
//				}
//
//				//bagi dengan jumlah data
//				mean = mean/studentcounter;
//			}
//
//			//print
//			printf("%-20s = %d\n", "Total Data", studentcounter);
//			printf("%-20s = %d\n", "Minimum Score", min);
//			printf("%-20s = %d\n", "Maximum Score", max);
//			printf("%-20s = %.2f\n", "Average", mean);
//			printf("Press ENTER to Continue...");
//			getchar();
//			system("cls");
//			break;
//		case 4: 
//			//Delete Data
//			if(studentcounter==0){
//				printf("Can't delete if there is no data");
//				getchar();
//				system("cls");
//				break;
//			}
//			else
//			{
//				//Input Index
//				do{
//					printf("Choose Index you want to delete [0..%d]: ",studentcounter-1);
//					scanf("%d", &choose);
//					fflush(stdin);
//				}while(choose>studentcounter-1||choose<0);
//				/*
//				Mulai proses penghapusannya dengan cara
//				menumpuk data yang lama index sekian dengan data yang setelahnya
//				*/
//				for(index=choose; index<studentcounter; index++)
//				{
//					strcpy(student[index],student[index+1]);
//					score[0][index] = score[0][index+1];
//					score[1][index] = score[1][index+1];
//					score[2][index] = score[2][index+1];
//					score[3][index] = score[3][index+1];
//					strcpy(status[index],status[index+1]);
//				}
//				//Kurangi jumlah siswa
//				studentcounter--;
//				printf("Success, press ENTER to continue...");
//				getchar();
//				system("cls");
//				break;
//			}
//		case 5:
//			//Update Data
//			if(studentcounter==0){
//				printf("Please use option 1 to add your data");
//				getchar();
//				system("cls");
//				break;
//			}
//			else
//			{
//				//Input Index
//				do{
//					printf("Choose Index you want to update [0..%d]: ",studentcounter-1);
//					scanf("%d", &choose);
//					fflush(stdin);
//				}while(choose>studentcounter-1||choose<0);
//				do
//				{
//					flag=0; //Inisialisasi flag
//					printf("\nInput Students Name [1..25 char]= ");
//					scanf("%[^\n]",&student[choose]);fflush(stdin);
//					panjangNama = strlen(student[choose]);
//					for(index=0; index<panjangNama; index++)
//					{
//						tampungHuruf = student[choose][index]; //Tampung Huruf untuk dicek
//						if(tampungHuruf>=33&&tampungHuruf<=64||tampungHuruf>=91&&tampungHuruf<=96||tampungHuruf>=123&&tampungHuruf<=126) 
//						//Tidak boleh ada digit dan simbol (ASCII)
//						{
//							flag=0;
//							break; //Jika ada yang salah, langsung berhenti
//						}
//						else
//						{
//							flag=1;
//						}
//					}
//				}
//				while(panjangNama < 1 || panjangNama > 25||flag==0);
//
//
//				//Validasi Listening
//				do
//				{
//					printf("Correct Answer for Listening Section [0..20] = ");
//					scanf("%d",&score[0][choose]);fflush(stdin);
//				}
//				while(score[0][choose] < 0 || score[0][choose] > 20);
//
//				//Validasi Reading
//				do
//				{
//					printf("Correct Answer for Reading Section [0..30] = ");
//					scanf("%d",&score[1][choose]);fflush(stdin);
//				}
//				while(score[1][choose] < 0 || score[1][choose] > 30);
//
//				//Validasi Essay
//				do
//				{
//					printf("Correct Answer for Essay Section [0..25] = ");
//					scanf("%d",&score[2][choose]);fflush(stdin);
//				}
//				while(score[2][choose] < 0 || score[2][choose] > 25);
//
//				//Langsung hitung result
//				score[3][choose] = (score[0][choose]*1) + (score[1][choose]*1) + (score[2][choose]*2);
//
//				//Masukkin ke keterangan, cek nilainya
//				if(score[3][choose] < 50)
//				{
//					strcpy(status[choose],"Failed");
//				}
//				else
//				{
//					if(score[3][choose] > 80)
//					{
//						strcpy(status[choose],"Very Good");
//					}
//					else
//					{
//						if(score[3][choose] > 70)
//						{
//							strcpy(status[choose],"Good");
//						}
//						else
//						{
//							strcpy(status[choose],"Pass");
//						}
//					}
//				}
//				printf("Update data success, press ENTER to continue...");
//				getchar();
//				system("cls");
//				break;
//			}
//		default: system("cls"); //Input Selain 1-5
//			break;
//		}
//		//sebagai pemanis
//		printf("\n");
//	}
//	while(input != 6);
//
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<algorithm>
#include<time.h>
using namespace std;

struct tile
{
	int x;
	int y;
	int cost; //jarak yang ditempuh untuk lewat tile ini
	char isi;
	int distance;//jarak dari tile ini ke titik start
	bool opened;
	tile* parent;
}*map[20][50];

int startX;
int startY;
int endX;
int endY;

void initMap(){
	for(int i=0;i<20;i++){
		for(int j=0;j<50;j++){
			map[i][j]=(tile*)malloc(sizeof(tile));
			map[i][j]->opened=false;
			map[i][j]->distance=999;
			map[i][j]->parent=NULL;
			map[i][j]->x=j;
			map[i][j]->y=i;
			
			if(i==0||j==0||i==19||j==49){
				map[i][j]->isi='#';
				map[i][j]->cost=999;
			}else{
				map[i][j]->isi=' ';
				map[i][j]->cost=1;
			}
		}
	}
	//rintangan
	int randomX;
	int randomY;
	for(int i=0;i<20;i++){
		do{
			randomX=rand()%50;
			randomY=rand()%20;
		}while(map[randomY][randomX]->isi!=' ');
		
		map[randomY][randomX]->isi='#';
		map[randomY][randomX]->cost=999;
	}
	//titik awal
	do{
		startX=rand()%50;
		startY=rand()%20;
	}while(map[startY][startX]->isi!=' ');
	map[startY][startX]->isi='A';
	//titik akhir
	do{
		endX=rand()%50;
		endY=rand()%20;
	}while(map[endY][endX]->isi!=' ');
	map[endY][endX]->isi='B';
}

void printMap(){
	for(int i=0;i<20;i++){
		for(int j=0;j<50;j++){
			printf("%c",map[i][j]->isi);
		}
		printf("\n");
	}
}

bool sortDistance(tile* tile1,tile* tile2){
	return tile1->distance<tile2->distance;
}

int main(){
	srand(time(NULL));
	initMap();
	printMap();

	//cari
	vector<tile*>tiles;
	tiles.push_back(map[startY][startX]);

	while(tiles.size()!=0){
		sort(tiles.begin(),tiles.end(),sortDistance);
		tile* curr = tiles.at(0);
		tiles.erase(tiles.begin());

		if(curr==map[endY][endX]) break; //ketemu

		//cek
		//atas
		tile* tetangga=map[curr->y-1][curr->x];
		if(tetangga->opened==false){
			tetangga->opened=true;
			tetangga->distance=
				curr->distance+tetangga->cost;
			tetangga->parent=curr;
			tiles.push_back(tetangga);
		}
		//bawah
		tetangga=map[curr->y+1][curr->x];
		if(tetangga->opened==false){
			tetangga->opened=true;
			tetangga->distance=
				curr->distance+tetangga->cost;
			tetangga->parent=curr;
			tiles.push_back(tetangga);
		}
		//kiri
		tetangga=map[curr->y][curr->x-1];
		if(tetangga->opened==false){
			tetangga->opened=true;
			tetangga->distance=
				curr->distance+tetangga->cost;
			tetangga->parent=curr;
			tiles.push_back(tetangga);
		}
		//kanan
		tetangga=map[curr->y][curr->x+1];
		if(tetangga->opened==false){
			tetangga->opened=true;
			tetangga->distance=
				curr->distance+tetangga->cost;
			tetangga->parent=curr;
			tiles.push_back(tetangga);
		}
	}

	//backtrack
	tile* end=map[endY][endX];
	map[startY][startX]->parent=NULL;

	while(end->parent!=NULL){
		end=end->parent;
		end->isi='*';
		system("cls");
		printMap();
	}

	getchar();
	return 0;
}