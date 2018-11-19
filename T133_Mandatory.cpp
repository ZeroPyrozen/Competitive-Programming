#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<conio.h>
#include<fstream>
#include<dos.h>

//Registration
int counterRegister=0;
char userName[100];
char passWord[100];
int c,d;
char temporary1[100], temporary2[100];
int  flagAlnumpass=0, flagDig=0, flagAl=0;
int menuNavigation;
char exit1[6] = "exit";
char defaultMap[22][41];
const char space = ' ';
const char me = '@';
void readDefaultMap(){
	FILE *map = fopen("defaultmap.txt", "r");
	if(map){
		int i=0;
		int j=0;
				while(fscanf(map, "%c", &defaultMap[i][j]) != EOF)
				{
					if(i<=20)
					{
						if(j<=39){
							j++;
						}
						else
						{
							i++;
							j=0;
						}
					}
					else
					{
						break;
					}
					
				}			
		
	
	fclose(map);
	}
}
												
void SplashScreen()
{
    
}
void writeUser(){
	FILE *f = fopen("user.txt", "a");
	//for(int i = 0; i < counterRegister; i++){
		fprintf(f, "%s#%s\n", userName, passWord);		
	//}
	fclose(f);
}
void readUser(){
	FILE *f = fopen("user.txt", "r");
	if(f){
		while(fscanf(f, "%[^#]#%[^#]\n", &userName[counterRegister],&passWord[counterRegister]) != EOF)
		{
			counterRegister++;
		}
		fclose(f);
	}
}
void welcome()
{

	//Delaying
	Sleep(200);
	//Title Screen
	for(int spacing=1; spacing<8; spacing++)
	{
		
		printf("\n");
	}
	//Title
	for(int barisArt=1; barisArt<=3; barisArt++)
	{
		for(int kolomArt=1; kolomArt<=20; kolomArt++)
		{
			Sleep(200);
			if(barisArt==1 || barisArt==3 || kolomArt==1 || kolomArt==20)
			{
				if(kolomArt==1)
				{
					printf("\t\t\t\t\t\t*");
				}
				else
				{
					printf("*");
				}
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	for(int spacing=1; spacing<16; spacing++)
	{
		printf("\n");
	}
}
void newUser()
{
	//User Name
	do
	{
		flagDig=0;
		flagAl=0;
		printf("Input your username: ");
		scanf("%[^\n]", &temporary1);
		fflush(stdin);
		for(int i=0; i<strlen(temporary1); i++)
		{
			if(!isalnum(temporary1[i]))
			{
				flagAl=0;
				flagDig=0;
				break;
			}
			else
			{
				flagAl++;
				flagDig++;
			}
		}
		if(strlen(temporary1)<5 || strlen(temporary1)>10)
		{
			printf("Username must be between 5 - 10 characters\n");
		}
		else if(flagAl==0 ||flagDig==0)
		{
			printf("Username must be alphanumeric\n");	
		}
	}while(strlen(temporary1)<5 || strlen(temporary1)>10|| flagAl==0||flagDig==0);
	//Password
	do
	{
		flagAl=0;
		flagDig=0;
		printf("Input your password: ");
		scanf("%[^\n]", &temporary2);
		fflush(stdin);
		for(int i=0; i<strlen(temporary2); i++)
		{
			if(!isalnum(temporary2[i]))
			{
				flagAl=0;
				flagDig=0;
				break;
			}
			else
			{
				flagAl++;
				flagDig++;
			}
		}
		if(strlen(temporary2)<5 || strlen(temporary2)>10)
		{
			printf("Password must be between 8 - 20 characters\n");
		}
		else if(flagAl==0 ||flagDig==0)
		{
			printf("Password must contain alphabetic and numeric\n");	
		}
	}while(strlen(temporary2)<8 || strlen(temporary2)>20|| flagAl==0||flagDig==0);
	strcpy(userName,temporary1);
	strcpy(passWord,temporary2);
	system("cls");
}
void login()
{
	

}
int main()
{
	
	//welcome();
	do
	{
		printf("1. Login\n");
		printf("2. Register\n");
		printf("3. Exit\n");
		printf(">> ");
		scanf("%d", &menuNavigation);
		fflush(stdin);
		switch(menuNavigation)
		{
		case 1:
			readUser();
			
			for(int i=0; i<=20; i++){
				for(int j=0; j<=40; j++){
					printf("%c", defaultMap[i][j]);
				}
				//
			}
			printf("\n");
			//Login Menu
		
			//User Name
			
			break;
		case 2: //Register Menu
				
			system("cls");
			newUser();
			writeUser();
			break;
		}
	}while(menuNavigation!=3);
	
	//getchar(); //Take \n
	return 0;
}
