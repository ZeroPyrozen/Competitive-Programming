//#include<stdio.h>
//
//bool isPrime(int number)
//{
//	int flag=0;
//	if(number!=2 && number%2==0||number==1)
//	{
//		return false;
//	}
//	else
//	{
//		for(int i=1; i<number;i++)
//		{
//			if(number%i==0)
//			{
//				flag++;
//			}
//		}
//		if(flag>1)
//		{
//			return false;
//		}
//		else
//		{
//			return true;
//		}
//	}
//}
//
//int main()
//{
//	int userInput, temp;
//	scanf("%d", &userInput);
//	fflush(stdin);
//	printf("Prime Numbers: ");
//	if(userInput==1)
//	{
//		printf("Empty Product!");
//	}
//	else
//	{
//		while(userInput!=1)
//		{
//			for(int i=1; i<=userInput; i++)
//			{
//				if(isPrime(i)==true&&userInput%i==0)
//				{
//					printf("%d ",i);
//					userInput/=i;
//					break;
//				}
//			}
//		}
//	}
//	getchar();
//	return 0;
//}

//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//#include<math.h>
//using namespace std;
//
//
//int main() {
//    int n,x,sum,count=0;
//    scanf("%d %d", &n,&x);
//    fflush(stdin);
//	int arr[100];
//    for (int i=0 ; i<n ; i++){
//        cin>>arr[i];
//    }
//    for (int i=0 ; i<n ; i++){
//        sum=0;
//        for (int j=i ; j<n ; j++){
//            sum+=arr[j];
//            if (sum>x) break;
//            else if (sum==x) {
//                count++;
//                break;
//            }
//        }
//    }
//    cout<<count;
//	getchar();
//	getchar();
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	//Faktorial dengan Loop
//	int inputUser, temp=0;
//	scanf("%d",&inputUser);
//	fflush(stdin);
//	for(int i=inputUser; i>1; i--)
//	{
//		if(i==inputUser)
//		temp = i*(i-1);
//		else
//		temp = temp*(i-1);
//	}
//	printf("%d", temp);
//	getchar();
//	return 0;
//}
//
//#include<stdio.h>
//#include<iostream>
//using namespace std;
//int main()
//{
//	unsigned long long int a[10000],b[10000],c[10000],case1;
//	cin>>case1;
//	for(int i=1; i<=case1; i++)
//	{
//		cin>>a[i]>>b[i]>>c[i];
//		if(c[i] == a[i]+b[i])
//		{
//			cout<<"Kasus #"<<i<<": +"<<endl;
//		}
//		else if(c[i] == a[i]-b[i])
//		{
//			cout<<"Kasus #"<<i<<": -"<<endl;
//		}
//		else if(c[i] == a[i]*b[i])
//		{
//			cout<<"Kasus #"<<i<<": *"<<endl;
//		}
//		else if(c[i] == a[i]/b[i])
//		{
//			cout<<"Kasus #"<<i<<": /"<<endl;
//		}
//		else
//		{
//			cout<<"Kasus #"<<i<<": TIDAK ADA SOLUSI"<<endl;
//		}
//	}
//	for(int i=1; i<=case1; i++)
//	{
//
//	}
//	return 0;
//}


//#include<stdio.h>
//struct Data
//{
//	int umur;
//}glob[100],temp;
//
//int counter=0;
//
//void sort()
//{
//	int i,j,min;
//	for(i=0; i<counter; i++)
//	{
//		min = i;
//		for(j=i+1; j<counter; j++)
//		{
//			if(glob[min].umur>glob[j].umur)
//			{
//				min=j;
//			}
//		}
//		temp = glob[i];
//		glob[i] = glob[min];
//		glob[min]=temp;
//	}
//	
//}
//void printAll()
//{
//	for(int i=0; i<counter; i++)
//	{
//		printf("%d\n",glob[i].umur);
//	}
//}
//int main()
//{
//	int jumlah;
//	glob[0].umur = 100;
//	glob[1].umur = 20;
//	glob[2].umur = 120;
//	counter=3;
//	sort();
//	printAll();
//	getchar();
//	return 0;
//}

#include<string.h>
#include<stdio.h>
int memo[1010];

int fibo(int n)
{
	if(memo[n]!=-1)
	{
		return memo[n];
	}
	if(n==1||n==0)
		return 1;
	return memo[n] = fibo(n-1)+fibo(n-2);
}
int main()
{
	memset(memo, -1, sizeof(memo));
	int angka;
	scanf("%d",&angka);
	fflush(stdin);
	printf("%d",fibo(angka));
	getchar();
	return 0;
}