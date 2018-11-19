//#include<iostream>
//#include<conio.h>
//#include<stdlib.h>
//#include<string.h>
//using namespace std;
//void spacing()
//{
//	for(int i=0; i<25; i++)
//		cout << endl;
//}
//
//struct History
//{
//	char kejadian[100];
//	struct History *next;
//}*head=NULL,*tail=NULL;
//void push(char kejadian[])
//{
//	struct History *curr = (struct History*)malloc(sizeof(struct History));
//	curr->next = NULL;
//	strcpy(curr->kejadian,kejadian);
//	if(!head)
//		head = tail = curr;
//	else
//	{
//		tail->next = curr;
//		tail = curr;
//	}
//}
//int main()
//{
//	char menu;
//	int saldoUser = 0,topUp,payMent,indexX,indexY;
//	struct History *temp;
//	char tempo[100],yesNo[100];
//	int priceList[10][10] = {{-1,10000,35000,75000,-1},{10000,-1,-1,30000,-1},{35000,-1,-1,20000,15000},{75000,30000,20000,-1,-1},{-1,-1,15000,-1,-1}};
//	do
//	{
//		system("cls");
//		spacing();
//		strcpy(tempo,"");
//		cout << "E - Toll" <<endl<<endl<<"1. View E-Toll Card Balance"<<endl<<"2. Top Up E-Toll Card"<<endl<<"3. E-Payment"<<endl<<"4. View Payment History"<<endl<<"5. View Route List"<<endl<<"Choose : ";
//		menu = getch();
//		fflush(stdin);
//		cout<<endl;
//		switch(menu)
//		{
//		case '1':
//			
//			if(saldoUser<=0)
//				cout << "Saldo Anda Kosong"<<endl;
//			else
//				cout << "Saldo Anda sebesar : Rp " << saldoUser <<",00"<<endl;
//			cin.get();
//			break;
//		case '2':
//			do
//			{
//				topUp = 0;
//				cout << "Silakan masukkan jumlah yang ingin diisi [25000|50000|100000] : ";
//				cin >> topUp;
//				fflush(stdin);
//			}while(topUp!=25000&&topUp!=50000&&topUp!=100000);
//			saldoUser+=topUp;
//			strcpy(tempo,"Top Up Saldo sebesar Rp ");
//			itoa(topUp,tempo,10);
//			strcat(tempo,",00");
//			push(tempo);
//			cout<<"Saldo anda telah diisi "<< endl << "Tekan enter untuk melanjutkan transaksi" << endl;
//			cin.get();
//			break;
//		case '3':
//			if(saldoUser<=0)
//				cout<<"Maaf anda tidak dapat melakukan transaksi karena saldo anda kosong, silakan isi ulang saldo anda."<<endl;
//			else
//			{
//				//Dummy Test
//				strcpy(yesNo,"");
//				do
//				{
//					cout << "[Jakarta - Yogyakarta] : Rp 75.000,00"<<endl<<" Apakah anda ingin melanjutkan pembayaran?[Ya|Tidak] : ";
//					cin >> yesNo;
//					fflush(stdin);
//				}while(strcmp(yesNo,"Ya")!=0&&strcmp(yesNo,"Tidak")!=0);
//				if(strcmp(yesNo,"Ya")==0)
//				{
//					saldoUser-=75000;
//					cout << "Transaksi Sukses" <<endl;
//					strcpy(tempo,"Pembayaran Pintu Tol Jakarta - Yogyakarta");
//					push(tempo);
//				}
//				else
//					cout << "Transaksi dibatalkan"<<endl;
//			}
//			cin.get();
//			break;
//		case '4':
//			if(!head)
//				cout << "Rekam jejak anda kosong..." <<endl;
//			else
//			{
//				temp = head;
//				cout << "Kejadian" << endl;
//				while(temp!=NULL)
//				{
//					cout <<"- "<< temp->kejadian<<endl;;
//					temp = temp->next;
//				}
//			}
//			cin.get();
//			break;
//		case '5':
//			for(int i=0; i<5; i++)
//			{
//				
//				for(int j = 0; j<5; j++)
//				{
//					if(priceList[i][j]!=-1)
//					{
//						switch(i)
//						{
//						case 1:
//							cout << "Bandung - ";
//							break;
//						case 2:
//							cout << "Semarang - ";
//							break;
//						case 3:
//							cout << "Yogyakarta - ";
//							break;
//						case 4:
//							cout << "Surabaya - ";
//							break;
//						case 0:
//							cout << "Jakarta - ";
//							break;
//						}
//						switch(j)
//						{
//						case 1:
//							cout << "Bandung	: Rp "<<priceList[i][j]<<endl;
//							break;
//						case 2:
//							cout << "Semarang	: Rp "<<priceList[i][j]<<endl;
//							break;
//						case 3:
//							cout << "Yogyakarta	: Rp "<<priceList[i][j]<<endl;
//							break;
//						case 4:
//							cout << "Surabaya	: Rp "<<priceList[i][j]<<endl;
//							break;
//						case 0:
//							cout << "Jakarta	: Rp "<<priceList[i][j]<<endl;
//							break;
//						}
//					}
//				}
//				cout << endl;
//			}
//			cin.get();
//			break;
//		}
//	}while(menu!='0');
//	return 0;
//}

/*

Test Case : {2,12,3,8,4}
Set i to 0
While i smaller than jml_data do
1st Iteration
Set j to i
j is still 0 and data in array j-1 is undefined than data in array j <--Possible Error because it's garbage value
Do Nothing || Swap because garbage value is larger than data in array j
Result:	{2,12,3,8,4}
2nd Iteration
j is larger than 0 and data in array j-1 is smaller than data in array j
Do Nothing
End Loop
Result:	{2,12,3,8,4}
3rd Iteration
j is larger than 0 and data in array j-1 is larger than data in array j
Swap data in array j-1 and data in array j
reduce j by 1 <--Possible Error when j = 0
End Loop
Result:	{2,3,12,8,4}
4th Iteration
j is larger than 0 and data in array j-1 is larger than data in array j
Swap data in array j-1 and data in array j
reduce j by 1 <--Possible Error when j = 0
End Loop
Result:	{2,3,8,12,4}
5th Iteration
j is larger than 0 and data in array j-1 is larger than data in array j
Swap data in array j-1 and data in array j
reduce j by 1 <--Possible Error when j = 0
End Loop
Result:	{2,3,4,8,12}
End Loop
*/

#include<stdio.h>

int main()
{
	int data[] = {2,12,3,8,4};
	int i,j,tmp,x;
	for (i = 0; i < 6; i++)
	{
		j = i;
		while (j > 0 && data[j - 1] > data[j])
		{
			tmp = data[j];
			data[j] = data[j-1];
			data[j - 1] = tmp;
			j--;
		}
		printf("%d Iteration:\n\t",i+1);
		for(x=0; x<5; x++)
		{
			printf("%d ",data[x]);
		}
		printf("\n");
	}
	
	getchar();
	return 0;
}