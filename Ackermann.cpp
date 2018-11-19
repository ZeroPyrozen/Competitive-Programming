//#include<stdio.h>
//#include<math.h>
//
//
//int main()
//{
//	float maksimal, minimal;
//	int temp1, temp2,flag=0;
//	float hasil1,hasil2, sum;
//	do{
//		printf("Insert Minimum Range: ");
//		scanf("%f", &minimal);
//		fflush(stdin);
//	}while(minimal<=0);
//	do{
//		printf("Insert Maximum Range: ");
//		scanf("%f", &maksimal);
//		fflush(stdin);
//		if(minimal>maksimal)
//		{
//			flag=0;
//		}
//		else
//		{
//			flag=1;
//		}
//	}while(flag==0);
//	minimal = log10(minimal);
//	maksimal = log10(maksimal);
//	temp1 = minimal;
//	temp2 = maksimal;
//	hasil1=1-pow(0.9,temp1);
//	hasil2=1-pow(0.9,temp2);
//	sum = hasil2-hasil1;
//	printf("\nPopulation of number with 3 digit is %.0f%%", sum*100);
//	getchar();
//	return 0;
//}


//#include<stdio.h>
//
//
//int main()
//{
//	int start, sequence, i, temp, temp2;
//	printf("Input a custom start and index[start index] : "); 
//	scanf("%d %d", &start,&sequence);
//	fflush(stdin);
//	printf("%d index of fibonacci: ", sequence);
//	for(i=1; i<=sequence; i++)
//	{
//		if(i==1)
//		{
//			printf("%d ",start);
//		}
//		else if(i==2)
//		{
//			temp2 = start;
//			printf("%d ",start);
//		}
//		else
//		{
//			temp = start + temp2;
//			printf("%d ", temp);
//			start = temp2;
//			temp2 = temp;
//		}
//	}
//	getchar();
//	return 0;
//}

//#include <stdio.h> 
//#include <ctype.h>
// 
//
//#include <string.h>
//
// 
// 
//int main() 
//
//{
// 
//    int inputmin, inputmax, counter = 0, i, j;
// 
//    char check[1000];
// 
//    float hasil; 
//
// 
//    printf("Program ini berfungsi untuk menghitung angka 3 diantara dua bilangan\n"); 
//    printf("Ilmu baru yang dipelajari adalah mengubah integer menjadi string\n\n"); 
// 
//    printf("Masukkan Nilai Minimum = "); 
//    scanf("%d", &inputmin); fflush(stdin); 
// 
//    do 
//    { 
//        printf("Masukkan Nilai Maximum = "); 
//        scanf("%d", &inputmax); fflush(stdin); 
//    } 
//    while(inputmax <= inputmin); 
// 
//    
//for(j = inputmin; j <= inputmax; j++) 
//
//    {
// 
//        sprintf(check, "%d", j); 
//    
//    for(i = 0; i < 1000; i++) 
//
//        {
// 
//            if(check[i] == '3')
// 
//            { 
//
//                counter++;
//				break; 
//            }
// 
//        }
// 
//    }
// 
// 
//    hasil = (float)counter*100/((float)inputmax-(float)inputmin+1); 
//    printf("\n%.0f%%",hasil); 
//	getchar();
//    return 0; 
//}

//#include<stdio.h>
//
//int main()
//{
//	float median;
//	float angka[110], temp;
//	int batas, i;
//	printf("Input Batas Jumlah Data: ");
//	scanf("%d", &batas);
//	fflush(stdin);
//	for(i=0; i<batas; i++)
//	{
//		printf("Element ke %d : ", i);
//		scanf("%f", &angka[i]);
//	}
//	for(i=0; i<batas; i++)
//	{
//		if(angka[i]>angka[i+1])
//		{
//			temp = angka[i];
//			angka[i] = angka[i+1];
//			angka[i+1]=temp;
//		}
//	}
//	if(batas%2==0)
//	{
//		printf("Median : %.2f",(angka[(batas/2)-1]+angka[batas/2])*0.5);
//	}
//	else
//	{
//		printf("Median : %.2f", angka[batas/2]);
//	}
//	getchar();
//	getchar();
//	return 0;
//}


//#include<stdio.h>
//
//
//
//typedef struct {
//    int circles;
//    int sliders;
//    int spinners;
//    double starRating;
//}beatmap;
//
//void hitorigoto(beatmap *beatmap)
//{
//    beatmap->circles=69;
//    beatmap->sliders=23;
//    beatmap->spinners=1;
//    beatmap->starRating=2.69;
//}
//int main()
//{
//    beatmap diff;
//    hitorigoto(&diff);
//	printf("Circles		: %d\n", diff.circles);
//	printf("Sliders		: %d\n", diff.sliders);
//	printf("Spinner		: %d\n", diff.spinners);
//	printf("Star Rating	: %.2f\n", diff.starRating);
//	getchar();
//    return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//
//int main()
//{
//	char kata[100];
//	int space=0,count=0;
//	do
//	{
//		space=0, count=0;
//		scanf("%[^\n]", kata); fflush(stdin);
//		for(int i=0; i<strlen(kata); i++)
//		{
//			if(isdigit(kata[i]))
//			{
//				count=0;
//				space=2;
//				break;
//			}
//			if(isalpha(kata[i]))
//			{
//				count++;
//			}
//			else
//			{
//				count=0;
//			}
//			if(isspace(kata[i]))
//			{
//				space++;
//			}
//		}
//	}while(count!=0 && space<1 || space>1);
//	printf("Sukses");
//	getchar();
//	return 0;
//}

//#include <stdio.h>
//
//int main(){
//   int first;
//   int second;
//   int hitung =0;
//   int counter=0;
//    scanf("%d %d",&first,&second);
//    fflush(stdin);
//    for(int i=first; i<= second; i++){
//       hitung++;
//      if(i <=10 ){
//          if(i == 3){
//            counter+=1;
//           }
//       }
//      else {
//             if((i-3) % 10 == 0){
//             counter+=1;
//              }
//       }
//   }
//    counter = counter*100;
//
//printf("%d%%",counter/hitung);
//    getchar();
//    return 0;
//}

//#include<stdio.h>
//#include<ctype.h>
//#include<string.h>
//int main()
//{
//	int flag=0, flag2=0, panjangKata;
//	char kata[100];
//	char pisah[10];
//	do
//	{
//		flag=0;
//		flag2=0;
//		scanf("%[^\n]", kata);
//		fflush(stdin);
//		panjangKata=strlen(kata);
//		for(int i=0; i<panjangKata; i++)
//		{
//			if(isdigit(kata[i]))
//			{
//				flag++;
//				flag2=0;
//			}
//			else
//			{
//				if(kata[i]=='m' && kata[i+1]=='A' && kata[i+2]=='h')
//				{
//					flag2++;
//				}
//				else if (isspace(kata[i])&&kata[i=1]=='m' && kata[i+2]=='A' && kata[i+3]=='h')
//				{
//					flag2++;
//				}
//				else
//				{
//					flag2=0;
//					break;
//				}
//			}
//			
//		}
//		if(flag==0||flag2==0)
//		{
//			flag=0;
//		}
//	}while(flag==0);
//	printf("Sukses");
//	getchar();
//	return 0;
//}

//#include<stdio.h>
//
//int faktorial(unsigned int value)
//{
//	//Destruction
//	if(value==0)
//	{
//		return 1;
//	}
//	else if(value==1)
//	{
//		return 1;
//	}
//	//Initialization
//	else
//	{
//		return value*faktorial(value-1);
//	}
//}
//int main()
//{
//	unsigned int userInput;
//	scanf("%u",&userInput);
//	fflush(stdin);
//	printf("%u",faktorial(userInput));
//	getchar();
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<time.h>

struct data
{
	char brand[100];
	char namaBrand[100];
	char bahan[100];
	char jenisLensa[100];
	float ukuranMata;
	float silinder;
	int titikFokus;
	char penderita[100];
	char nama[100];
	int hargaLensa;
	int hargaFrame;
	int DP;
	int total;
	char lunas[100];

}*kacamata;

void sortCustomer(int jmlData)
{
	char kata[100];
	char kata2[20];
	char kata3[10];
	int integer;
	float desimal;

	for(int ptr=1;ptr<jmlData;ptr++)
	{
		
		for(int cekIndex=jmlData-1;cekIndex>=ptr;cekIndex--)
		{
			if(strcmp(kacamata[cekIndex].nama,kacamata[cekIndex-1].nama)<0)
			{
				strcpy(kata,kacamata[cekIndex].nama);
				strcpy(kacamata[cekIndex].nama,kacamata[cekIndex-1].nama);
				strcpy(kacamata[cekIndex-1].nama,kata);

				strcpy(kata,kacamata[cekIndex].namaBrand);
				strcpy(kacamata[cekIndex].namaBrand,kacamata[cekIndex-1].namaBrand);
				strcpy(kacamata[cekIndex-1].namaBrand,kata);

				strcpy(kata3,kacamata[cekIndex].brand);
				strcpy(kacamata[cekIndex].brand,kacamata[cekIndex-1].brand);
				strcpy(kacamata[cekIndex-1].brand,kata3);

				strcpy(kata3,kacamata[cekIndex].jenisLensa);
				strcpy(kacamata[cekIndex].jenisLensa,kacamata[cekIndex-1].jenisLensa);
				strcpy(kacamata[cekIndex-1].jenisLensa,kata3);

				strcpy(kata2,kacamata[cekIndex].penderita);
				strcpy(kacamata[cekIndex].penderita,kacamata[cekIndex-1].penderita);
				strcpy(kacamata[cekIndex-1].penderita,kata2);

				strcpy(kata2,kacamata[cekIndex].lunas);
				strcpy(kacamata[cekIndex].lunas,kacamata[cekIndex-1].lunas);
				strcpy(kacamata[cekIndex-1].lunas,kata2);

				desimal=kacamata[cekIndex].ukuranMata;
				kacamata[cekIndex].ukuranMata=kacamata[cekIndex-1].ukuranMata;
				kacamata[cekIndex-1].ukuranMata=desimal;

				desimal=kacamata[cekIndex].silinder;
				kacamata[cekIndex].silinder=kacamata[cekIndex-1].silinder;
				kacamata[cekIndex-1].silinder=desimal;

				integer=kacamata[cekIndex].titikFokus;
				kacamata[cekIndex].titikFokus=kacamata[cekIndex-1].titikFokus;
				kacamata[cekIndex-1].titikFokus=integer;

				integer=kacamata[cekIndex].hargaFrame;
				kacamata[cekIndex].hargaFrame=kacamata[cekIndex-1].hargaFrame;
				kacamata[cekIndex-1].hargaFrame=integer;

				integer=kacamata[cekIndex].hargaLensa;
				kacamata[cekIndex].hargaLensa=kacamata[cekIndex-1].hargaLensa;
				kacamata[cekIndex-1].hargaLensa=integer;

				integer=kacamata[cekIndex].DP;
				kacamata[cekIndex].DP=kacamata[cekIndex-1].DP;
				kacamata[cekIndex-1].DP=integer;

				integer=kacamata[cekIndex].total;
				kacamata[cekIndex].total=kacamata[cekIndex-1].total;
				kacamata[cekIndex-1].total=integer;
			}
		}
	}
}

void showCustomer(int jmlData)
{
	printf("No %-5s %5s %-5s %-5s %15s %15s %10s %10s %10s %12s %12s %12s %12s\n","Nama","Nama Brand","Branded","Jenis Lensa","Penderita","Ukuran Mata","Silinder","Titik Fokus","Harga Frame","Harga Lensa","DP","Total","Lunas");
	for(int i=0;i<jmlData;i++)
	{
		printf("%d. %5s %5s %10s %10s %17s %15.2f %10.2f %10d %12d %12d %12d %12d %12s\n",i+1,kacamata[i].nama,kacamata[i].namaBrand,kacamata[i].brand,kacamata[i].jenisLensa,kacamata[i].penderita,kacamata[i].ukuranMata,kacamata[i].silinder,kacamata[i].titikFokus,kacamata[i].hargaFrame,kacamata[i].hargaLensa,kacamata[i].DP,kacamata[i].total,kacamata[i].lunas);
	}
}

void saveFile(int jmlData)
{
	FILE *f;f=fopen("ListCustomer.txt","w");
	for(int i=0;i<jmlData;i++)
	{
	
		fprintf(f,"%s#%s#%s#%s#%s#%f#%f#%d#%d#%d#%d#%d#%s\n",kacamata[i].nama,kacamata[i].namaBrand,kacamata[i].brand,kacamata[i].jenisLensa,kacamata[i].penderita,kacamata[i].ukuranMata,kacamata[i].silinder,kacamata[i].titikFokus,kacamata[i].hargaFrame,kacamata[i].hargaLensa,kacamata[i].DP,kacamata[i].total,kacamata[i].lunas);
	}
	fclose(f);
}

void openFile(int *jmlData)
{
	FILE *f=fopen("ListCustomer.txt","r");
	(*jmlData)=0;
	if(f)
	{
		while(fscanf(f,"%[^#]#%[^#]#%[^#]#%[^#]#%[^#]#%f#%f#%d#%d#%d#%d#%d#%[^\n]\n",
			&kacamata[*jmlData].nama, 
			&kacamata[*jmlData].namaBrand, 
			&kacamata[*jmlData].brand, 
			&kacamata[*jmlData].jenisLensa, 
			&kacamata[*jmlData].penderita, 
			&kacamata[*jmlData].ukuranMata, 
			&kacamata[*jmlData].silinder, 
			&kacamata[*jmlData].titikFokus, 
			&kacamata[*jmlData].hargaFrame, 
			&kacamata[*jmlData].hargaLensa, 
			&kacamata[*jmlData].DP, 
			&kacamata[*jmlData].total, 
			&kacamata[*jmlData].lunas)!=EOF)
		{
			if((*jmlData)==0)
			{
				kacamata=(struct data*) malloc(sizeof(struct data));
			}
			else
			{
				kacamata=(struct data*) realloc(kacamata,((*jmlData)+1) *sizeof(struct data));
			}
			
			(*jmlData)++;
		}
		fclose(f);
	}
}

void addData(int jmlData)
{
	FILE *f=fopen("ListCustomer.txt","a");
	fprintf(f,"%s#%s#%s#%s#%s#%f#%f#%d#%d#%d#%d#%d#%s\n",kacamata[jmlData].nama,kacamata[jmlData].namaBrand,kacamata[jmlData].brand,kacamata[jmlData].jenisLensa,kacamata[jmlData].penderita,kacamata[jmlData].ukuranMata,kacamata[jmlData].silinder,kacamata[jmlData].titikFokus,kacamata[jmlData].hargaFrame,kacamata[jmlData].hargaLensa,kacamata[jmlData].DP,kacamata[jmlData].total,kacamata[jmlData].lunas);
}

int searchCustomer(int jmlData, char keyword[])
{
    for(int i=0;i<jmlData;i++)
    {
        if(strcmp(kacamata[i].nama,keyword)==0)
        {
            return i;
        }
        else
            continue;
    }
    return -1;
}

int main()
{
	int menu1,menu2;
	int jmlData=0;
	
	do
	{
		system("cls");
		showCustomer(jmlData);
		printf("\n\nSamudra Permata Hijau\n\n");
		printf("1. New Entry\n");
		printf("2. View Data\n");
		printf("3. Save File\n");
		printf("4. Open File\n");
		printf("5. Search\n");
		printf("6. Exit\n");
		printf("Choice: ");
		scanf("%d",&menu1);

		switch(menu1)
		{
		case 1:
			system("cls");
			if(jmlData==0)
				kacamata=(struct data*)malloc(sizeof(struct data));
			else
				kacamata=(struct data*)realloc(kacamata,(jmlData+1)*sizeof(struct data));
			do
			{
				printf("Masukkan nama: ");
				getchar();
				scanf("%[^\n]",&kacamata[jmlData].nama);fflush(stdin);
			}while(strlen(kacamata[jmlData].nama)<3 || strlen(kacamata[jmlData].nama)>25); 


			printf("Masukkan nama brand kacamata: ");
		scanf("%[^\n]",&kacamata[jmlData].namaBrand);fflush(stdin);

			do
			{
				printf("Apakah itu branded?(Iya||Tidak): ");
		scanf("%s",&kacamata[jmlData].brand);fflush(stdin);
			}while(strcmp(kacamata[jmlData].brand,"Iya")!=0 && strcmp(kacamata[jmlData].brand,"Tidak")!=0);

			if(strcmp(kacamata[jmlData].brand,"Iya")==0)
			{
				do
				{
					printf("Masukkan Harga[Min. 400.000]: ");
					scanf("%d",&kacamata[jmlData].hargaFrame);fflush(stdin);
				}while(kacamata[jmlData].hargaFrame<400000);
			}

			if(strcmp(kacamata[jmlData].brand,"Tidak")==0)
			{
				do{
					printf("Masukkan harga frame [Min. 200.000]: ");
					scanf("%d",&kacamata[jmlData].hargaFrame);
					fflush(stdin);
				}while(kacamata[jmlData].hargaFrame<200000);
			}

			do
			{
				printf("Masukkan jenis lensa [CRMC | Photogray | Bluegard]: ");
				scanf("%s",&kacamata[jmlData].jenisLensa);fflush(stdin);
			}while(strcmp(kacamata[jmlData].jenisLensa,"CRMC")!=0&&strcmp(kacamata[jmlData].jenisLensa,"Photogray")!=0&&strcmp(kacamata[jmlData].jenisLensa,"Bluegard")!=0);

			if(strcmp(kacamata[jmlData].jenisLensa,"CRMC")==0)
			kacamata[jmlData].hargaLensa=135000;

			if(strcmp(kacamata[jmlData].jenisLensa,"Photogray")==0)
			kacamata[jmlData].hargaLensa=350000;

			if(strcmp(kacamata[jmlData].jenisLensa,"Bluegard")==0)
			kacamata[jmlData].hargaLensa=400000;

			do
			{
				printf("Apakah menderita Miopi atau Hipermetropi? ");
				scanf("%s",&kacamata[jmlData].penderita);
				fflush(stdin);
			}while(strcmp(kacamata[jmlData].penderita,"Miopi")!=0&&strcmp(kacamata[jmlData].penderita,"Hipermetropi")!=0);

			do
			{
				printf("Masukkan ukuran matanya: ");
				scanf("%f",&kacamata[jmlData].ukuranMata);fflush(stdin);
			}while(kacamata[jmlData].ukuranMata>20);

			do
			{
				printf("Masukkan ukuran silinder: ");
				scanf("%f",&kacamata[jmlData].silinder);fflush(stdin);
			}while(kacamata[jmlData].silinder>10);

			do
			{
				printf("Masukkan titik fokus: ");
				scanf("%d",&kacamata[jmlData].titikFokus);
				fflush(stdin);
			}while(kacamata[jmlData].titikFokus<5||kacamata[jmlData].titikFokus>100);

			printf("Masukkan harga yang sudah dibayar: ");
			scanf("%d",&kacamata[jmlData].DP);
			fflush(stdin);

			kacamata[jmlData].total=kacamata[jmlData].hargaLensa+kacamata[jmlData].hargaFrame-kacamata[jmlData].DP;

			if(kacamata[jmlData].total<0)
				strcpy(kacamata[jmlData].lunas,"Lunas");

			else
				strcpy(kacamata[jmlData].lunas,"Belum Lunas");

			jmlData++;
			printf("Entry Saved.");
			getchar();
			break;

		case 2:
			do
			{
			system("cls");
			printf("1. Data Customer\n");
			printf("2. List Lunas\n");
			printf("3. List Masih Ngutang\n");
			printf("4. Back\n");
			printf("Pilihan: ");
			scanf("%d",&menu2);

			switch(menu2)
			{
			case 1 :
				sortCustomer(jmlData);
				showCustomer(jmlData);
				getchar();
				break;
			}
			}while(menu2!=4);
			break;
		case 3:
			saveFile(jmlData);
			printf("File Saved.");
			getchar();
			getchar();
			break;

		case 4:
			openFile(&jmlData);
			printf("File Opened.");
			getchar();
			getchar();
			break;

		case 5:
			system("cls");
			printf("Find: ");
			getchar();
			scanf("%[^\n]",&kacamata[jmlData].nama); fflush(stdin);

			int result = searchCustomer(jmlData,kacamata[jmlData].nama);
			
				if(result==-1)
				{
				printf("\nData not Found\n");
				getchar();
				}
				else
				{
					printf("\nNama: %s\n", kacamata[result].nama);
				}
				getchar();
			break;
		}

	}while(menu1!=6);


	getchar();
	return 0;
}