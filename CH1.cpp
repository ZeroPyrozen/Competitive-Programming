////#include<stdio.h>
////#include<string.h>
////#include<ctype.h>
////int power(int angka1,int angka2)
////{
////	int i,temp;
////	temp = angka1;
////	for(i=1; i<angka2; i++)
////	{
////		angka1 *=temp;
////	}
////	return angka1;
////}
////int main()
////{
////	int angka1, angka2,i;
////	char kata[100];
////	scanf("%s",&kata);
////	getchar();
////	scanf("%d %d",&angka1,&angka2);
////	fflush(stdin);
////	if(strcmpi(kata,"pow")==0)
////	{
////		printf("%d", power(angka1,angka2));
////	}
////	else if(strcmpi(kata,"times")==0)
////	{
////		printf("%d",angka1*angka2);
////	}
////	getchar();
////	return 0;
////}
//
////#include<stdio.h>
////
////int wordLength(char kalimat[],int counter)
////{
////	if(kalimat[counter]=='\0')
////		return counter;
////	else
////		return wordLength(kalimat,counter+1);
////}
////
////int main()
////{
////	int counter=0,i;
////	char kalimat[100];
////	scanf("%[^\n]",&kalimat);
////	fflush(stdin);
////	/*for(i=0; i==i; i++)
////	{
////		if(kalimat[i] == '\0')
////			break;
////		else
////			counter++;
////	}*/
////	i=0;
////	/*while(kalimat[i]!='\0')
////	{
////		counter++;
////		i++;
////	}*/
////	printf("Word Length : %d",wordLength(kalimat,0));
////	getchar();
////	return 0;
////}
//
//
////#include<stdio.h>
////
////int main()
////{
////	int i,counter;
////	FILE *f;
////	f = fopen("number.txt","r");
////	counter = 0;
////	if(f)
////	{
////		while(!feof(f))
////		{
////			fscanf(f,"%d ",&i);
////			counter +=i;
////		}
////		printf("%d",counter);
////		fclose(f);
////	}
////	else
////	{
////		printf("Can't found number.txt");
////	}
////	getchar();
////	return 0;
////}
//
////1. Sum of Odd Number
////Start - End
////2. Sum of Even Number
////Start - End
////3. Sum of Prime Number
////End
//
//#include<stdio.h>
//#include<stdlib.h>
//
//void odd()
//{
//	int angka1,angka2,sumodd = 0;
//	if(angka1<=0)
//	printf("Input 1: ");scanf("%d",&angka1);fflush(stdin);
//	printf("Input 2: ");scanf("%d",&angka2);fflush(stdin);
//	
//	if(angka1%2==0)
//		angka1++;
//	for(int i=angka1;i<=angka2;i+=2)
//	{
//			printf("%d ",i);
//			sumodd+=i;
//	}
//	printf("\nSum of Odd = %d",sumodd);
//}
//
//void even()
//{
//	int angka1,angka2,sumeven = 0;
//	printf("Input 1: ");scanf("%d",&angka1);fflush(stdin);
//	printf("Input 2: ");scanf("%d",&angka2);fflush(stdin);
//	for(int j = angka1; j<angka2; j++)
//	{
//		if(j%2==0)
//		{
//			printf("%d ",j);
//			sumeven+=j;
//		}
//	}
//	printf("\nSum of Even = %d",sumeven);
//}
//
//bool isPrime(int angka)
//{
//	int i,flag=0;
//	//6 % 1 = 0 flag=1
//	//6 % 2 = 1 flag=2
//
//	if(angka<=1)
//		return false;
//	for(i=1; i<angka; i++)
//	{
//		if(angka%i == 0)
//			flag++;
//		if(flag>1)
//			return false;
//	}
//	return true;
//}
//void prime()
//{
//	int angka1,angka2,sumprime=0;
//	printf("Input 1: ");scanf("%d",&angka1);fflush(stdin);
//	printf("Input 2: ");scanf("%d",&angka2);fflush(stdin);
//	for(int i=angka1; i<angka2; i++)
//	{
//		if(isPrime(i))
//		{
//			printf("%d ",i);
//			sumprime+=i;
//		}
//	}
//	printf("\nSum of Prime  = %d",sumprime);
//}
//int main()
//{
//	int menu;
//	do
//	{
//		system("cls");
//		printf("1.Sum of odd number\n");
//		printf("2.Sum of even number\n");
//		printf("3.Sum of prime number\n");
//		printf("4. Exit\n");
//		printf("Input : ");scanf("%d",&menu);fflush(stdin);
//		switch(menu)
//		{
//		case 1:
//			odd();
//			getchar();
//			break;
//		case 2:
//			even();
//			getchar();
//			break;
//		case 3:
//			prime();
//			getchar();
//		}
//	}while(menu!=4);
//	return 0;getchar();
//}