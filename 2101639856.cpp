#include<stdio.h>
#include<ctype.h>
#include<Windows.h>
#include<string.h>
#include<stdlib.h>
struct mahasiswa
{
	char nim[100];
	char nama[100];
	float ipk;
}mhs[100],temp;
void openFile(int *counterEntry, int *flag)
{
	int i=0;
	FILE *f = fopen("input.txt","r");
	if(f)
	{
		while(fscanf(f,"%[^,],%[^,],%f\n",&mhs[i].nim,&mhs[i].nama,&mhs[i].ipk)!=EOF)
		{
			i++;
		}
		(*counterEntry) = i;
		*flag=1;
		fclose(f);
	}
	else
	{	
		perror("Membaca File Gagal");
		*flag=0;
		getchar();
	}
}
void spacing()
{
	int i;
	for(i=0; i<25; i++)
		puts("");
}
void printAll(int *counterEntry)
{
	int j = (*counterEntry);
	printf("Jumlah Mhs : %d\n",j);
	int i;
	for(i=0; i<j; i++)
		printf("[%4d] %-15s %-55s %-4.2f\n",i,mhs[i].nim,mhs[i].nama,mhs[i].ipk);

}
void addMhs(int *counterEntry)
{
	printf("Menambahkan mahasiswa ke koleksi\n\n");
	int flag=0, x=(*counterEntry);float ipk;char nim[100],nama[100],b;
	do
	{
		flag=0;
		printf("Masukkan NIM Mahasiswa [harus 10 karakter] : ");
		scanf("%[^\n]",nim);
		fflush(stdin);
		if(strlen(nim)!=10)
			flag=0;
		else
		{
			flag=1;
			for(b=0; b<strlen(nim); b++)
			{
				if(!isdigit(nim[b]))	
				{
					flag=0;
					break;
				}
			}
		}
	}while(flag==0);
	do
	{
		flag=0;
		printf("Masukkan Nama Mahasiswa [Min 1 Karakter, Max 50 Karakter] : ");
		scanf("%[^\n]",nama);
		fflush(stdin);
		if(strlen(nama)>0&&strlen(nama)<51)
			flag=1;
	}while(flag==0);
	do
	{
		flag=0;
		printf("Masukkan GPA [Min 0.0, Max 4.0] : ");
		scanf("%f", &ipk);
		fflush(stdin);
		if(ipk>=0 && ipk<=4)
			flag=1;
	}while(flag==0);
	printf("Mahasiswa berhasil ditambahkan...\nTekan Enter untuk kembali ke menu utama...");
	strcpy(mhs[x].nim,nim);
	strcpy(mhs[x].nama,nama);
	mhs[x].ipk = ipk;
	x++;
	(*counterEntry) = x;
	getchar();
}
void delMhs(int *counterEntry)
{
	int flag=0, index, x = (*counterEntry);
	int i;
	do
	{
		flag=0;
		printf("Masukkan no-idx mahasiswa yang ingin dihapus [Min 0, Max %d] : ",x-1);
		scanf("%d",&index);
		fflush(stdin);
		if(index>-1&&index<x)
			flag=1;
	}while(flag==0);

	for(i=index; i<x; i++)
		mhs[i] = mhs[i+1];
	x--;
	(*counterEntry) = x;
	printf("Mahasiswa berhasil dihapus...\nTekan Enter untuk kembali ke menu utama...");
	getchar();
}
void writeFile(int *counterEntry)
{
	int i;
	FILE *f = fopen("output.txt","w");
	for(i=0; i<(*counterEntry); i++)
		fprintf(f,"%s,%s,%.2f\n",mhs[i].nim,mhs[i].nama,mhs[i].ipk);
}
void sortMhs(int counterEntry)
{
	int i=0,j,flag=0;
	for(i=1; i<counterEntry; i++)
	{	
		flag=0;
		for(j=counterEntry-1; j>=i; j--)
		{	
			if(strcmp(mhs[j-1].nama,mhs[j].nama)>0)
			{
				temp = mhs[j-1];
				mhs[j-1] = mhs[j];
				mhs[j] = temp;
				flag=1;
			}
		}
		if(flag==0)
			break;
	}
}

int seaMhs(int *counterEntry)
{
	int x = (*counterEntry);
	sortMhs(x);
	int left = 0, mid, right = (*counterEntry), flag=0;
	char name[100];
	printf("Insert Name : ");
	scanf("%[^\n]",&name);
	fflush(stdin);
	while(left<=right)
	{
		mid = (left + right)/2;
		if(strcmp(mhs[mid].nama,name)==0)
		{
			return mid;
		}
		else if(strcmp(mhs[mid].nama,name)<0)
		{
			left = mid+1;
		}
		else if(strcmp(mhs[mid].nama,name)>0)
		{
			right = mid-1;
		}
	}
	return -1;
}
int main()
{
	int menuDirection, counterEntry=0, flag,available;
	printf("Membaca File input.txt ...\n");
	Sleep(500);
	openFile(&counterEntry, &flag);
	if(flag==1)
	{
		do
		{
			system("cls");
			//spacing();
			printAll(&counterEntry);
			printf("\nData Mahasiswa\n=======================\n");
			printf("1. Menambahkan mahasiswa ke kelas\n");
			printf("2. Menghapus mahasiswa dari kelas berdasarkan no-idx\n3. Mencari Nama Mahasiswa\n");
			printf("4. Sort Mahasiswa Berdasarkan Nama Ascending\n0. Keluar, menulis output.txt\nPilih : ");
			scanf("%d",&menuDirection);
			fflush(stdin);
			switch(menuDirection)
			{
			case 1:
				addMhs(&counterEntry);
				break;
			case 2:
				delMhs(&counterEntry);
				break;
			case 3:
				available = seaMhs(&counterEntry);
				if(available==-1)
					printf("Not Found!\n");
				else
					printf("Data Found at %d\n",available);
				getchar();
				break;
			case 4:
				sortMhs(counterEntry);
				printf("Sukses!\n");
				getchar();
			}
		}while(menuDirection!=0);
		printf("Menulis output.txt...");
		writeFile(&counterEntry);
		getchar();
	}
	return 0;
}

//#include <stdio.h>
//#include <time.h>
//
//int main() {
//    time_t t = time(NULL);
//    struct tm *tm = localtime(&t);
//    char s[64];
//    strftime(s, sizeof(s), "%c", tm);
//    printf("%s\n", s);
//	getchar();
//	
//	return 0;
//}

//#include <stdio.h>
//#include <time.h>
//
//int main() {
//    time_t t = time(NULL);
//    struct tm *tm = localtime(&t);
//    printf("%s\n", asctime(tm));
//	getchar();
//	return 0;
//}