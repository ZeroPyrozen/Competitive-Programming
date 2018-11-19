//#include<stdio.h>
//int main()
//{
//	int weight;
//	scanf("%d",&weight);fflush(stdin);
//	if(weight%2==0)
//	{
//		if(weight<=2) printf("NO\n");
//		else printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	getchar();return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int x = 0,input;
//	char state[10];
//	scanf("%d",&input);fflush(stdin);
//	for(int i=0;i<input;i++)
//	{
//		scanf("%s",&state);fflush(stdin);
//		if((strcmp(state,"++X")==0)||(strcmp(state,"X++")==0))
//		{
//			x++;
//		}
//		else if((strcmp(state,"--X")==0)||(strcmp(state,"X--")==0))
//		{
//			x--;
//		}
//	}
//	printf("%d",x);
//	getchar();return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int M,N,res;
//	scanf("%d %d",&M,&N);fflush(stdin);
//	res = (M*N)/2;
//	printf("%d",res);
//	getchar();return 0;
//}

//#include<stdio.h>/////////////////////////////////!!!!!!!
//#include<math.h>
//int main()
//{
//	int n,m,a,tempY,tempX;
//	scanf("%d %d %d",&n,&m,&a);fflush(stdin);
//	if(m%a==0)
//		m=m/a;
//	else
//		m=m/a+1;
//	if(n%a==0)
//		n=n/a;
//	else
//		n=n/a+1;
//	printf("%lld\n",m*n);
//	getchar();return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int houseRange,steps;
//	scanf("%d",&houseRange);fflush(stdin);
//	if(houseRange%5==0)
//	{
//		houseRange/=5;
//	}
//	else if(houseRange%5!=0)
//	{
//		houseRange/=5;
//		houseRange+=1;
//	}
//	printf("%d",houseRange);
//	getchar();return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n,i;
//	scanf("%d",&n);
//	fflush(stdin);
//	for(i=2; i<=n; i+=2)
//	{
//		printf("%d^2 = %d\n",i,i*i);
//	}
//	getchar();
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int in,x,counter;
//	scanf("%d",&in);
//	fflush(stdin);
//	counter = 0;
//	for(x = in; counter<6; x++)
//	{
//		if(x%2==1)
//		{
//			counter++;
//			printf("%d\n",x);
//		}
//	}
//	getchar();
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int in,x;
//	scanf("%d",&in);
//	fflush(stdin);
//	for(x = 1; x<=in; x++)
//	{
//		if(x%2==1)
//			printf("%d\n",x);
//	}
//	getchar();
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int testCase,in,out,i,a;
//	scanf("%d",&testCase);
//	fflush(stdin);
//	in = 0;
//	out = 0;
//	for(i=0; i<testCase; i++)
//	{
//		scanf("%d",&a);
//		fflush(stdin);
//		(a<=20&&a>=10)?in++:out++;
//	}
//	printf("%d in\n%d out\n",in,out);
//	getchar();
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int a;
//	while(true)
//	{
//		scanf("%d",&a);
//		fflush(stdin);
//		if(a==2002)
//		{
//			printf("Acesso Permitido\n");
//			break;
//		}
//		else
//			printf("Senha Invalida\n");
//	}
//	getchar();
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int a;
//	scanf("%d",&a);
//	switch(a)
//	{
//	case 61:
//		printf("Brasilia\n");
//		break;
//	case 71:
//		printf("Salvador\n");
//		break;
//	case 11:
//		printf("Sao Paulo\n");
//		break;
//	case 21:
//		printf("Rio de Janeiro\n");
//		break;
//	case 32:
//		printf("Juiz de Fora\n");
//		break;
//	case 19:
//		printf("Campinas\n");
//		break;
//	case 27:
//		printf("Vitoria\n");
//		break;
//	case 31:
//		printf("Belo Horizonte\n");
//		break;
//	default:
//		printf("DDD nao cadastrado\n");
//		break;
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int a;
//	scanf("%d",&a);
//	switch(a)
//	{
//	case 1:
//		printf("January\n");
//		break;
//	case 2:
//		printf("February\n");
//		break;
//	case 3:
//		printf("March\n");
//		break;
//	case 4:
//		printf("April\n");
//		break;
//	case 5:
//		printf("May\n");
//		break;
//	case 6:
//		printf("June\n");
//		break;
//	case 7:
//		printf("July\n");
//		break;
//	case 8:
//		printf("August\n");
//		break;
//	case 9:
//		printf("September\n");
//		break;
//	case 10:
//		printf("October\n");
//		break;
//	case 11:
//		printf("November\n");
//		break;
//	case 12:
//		printf("December\n");
//		break;
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int a,i;
//	scanf("%d",&a);
//	fflush(stdin);
//	for(i=1;i<=10000; i++)
//	{
//		if(i%a==2)
//			printf("%d\n",i);
//	}
//	getchar();
//	return 0;
//}

//#include<stdio.h>
//
//long int fact(long int x)
//{
//	if(x<=1)
//		return 1;
//	return x*fact(x-1);
//}
//
//int main()
//{
//	long int a;
//	scanf("%ld",&a);
//	printf("%ld\n",fact(a));
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i,j,n,t,l;
//	char str[52],a;
//	scanf("%d",&t);
//	for(i = 0;i < t;i++){
//		scanf("%s %d",str, &n);
//		l=strlen(str);
//		for(j = 0;j < l;j++){
//			a=str[j]-n;
//			if(a<65)a+=26;
//			printf("%c",a);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int unsigned long  a,b,c;
//
//	while(scanf("%lu %lu",&a,&b)==2){
//		c = (a^b);
//		printf("%lu\n",c);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int a;
//	scanf("%d",&a);
//	while(a!=0)
//	{
//		a==1?printf("Ho!\n"):printf("Ho ");
//		a--;
//	}
//	return 0;
//}



//#include<stdio.h>
////#include<string.h>
////#include<ctype.h>
//#include<stdlib.h>
//#include<time.h>
//int main(void)
//{
//	srand(time(NULL));
//	int a = rand()%20;
//	int b,c= 1;
//	while(c!=0)
//	{
//		while(true)
//		{
//			printf("Tebak Angka: ");
//			scanf("%d",&b);
//			fflush(stdin);
//			if(a==b)
//			{
//				printf("Correct\n");
//				break;
//			}
//			else if(a<b)
//				printf("Too High\n");
//			else if(a>b)
//				printf("Too Low\n");
//		}
//		printf("Main lagi?[Pilih 0 atau 1]: ");
//		scanf("%d",&c);
//		fflush(stdin);
//	}
//	
//	
//	printf("%d",a);
//	getchar();
//	//return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int a;
//	printf("Isi Angka: ");
//	scanf("%d",&a);
//	fflush(stdin);
//	if(a%2==0)
//		printf("Genap\n");
//	else
//		printf("Ganjil\n");
//	getchar();
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char word[1005];
//	int len,i,x,y;
//	scanf("%[^\n]",&word);
//	fflush(stdin);
//	len = strlen(word);
//	x = 0;
//	y = 0;
//	for(i=0; i<len; i++)
//	{
//		switch(word[i])
//		{
//		case 'N':
//			y+=1;
//			break;
//		case 'E':
//			x+=1;
//			break;
//		case 'W':
//			x-=1;
//			break;
//		case 'S':
//			y-=1;
//			break;
//		}
//	}
//	if(x<0)
//		x*=-1;
//	if(y<0)
//		y*=-1;
//	printf("%d",x+y);
//	getchar();
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int testCase,bottleNum,input[1001],missingBot,fon;
//	scanf("%d",&testCase);
//	fflush(stdin);
//	for(int i=0; i<testCase; i++)
//	{
//		scanf("%d",&bottleNum);
//		fflush(stdin);
//		for(int j=0; j<bottleNum; j++)
//		{
//			scanf("%d",&input[j]);
//		}
//		scanf("%d",&missingBot);
//		fflush(stdin);
//		fon = 0;
//		for(int k=0; k<bottleNum; k++)
//		{
//			if(missingBot==input[k])
//				fon++;
//		}
//		printf("Kasus #%d: ",i+1);
//		if(fon>0)
//			printf("ADA %d BOTOL DITEMUKAN\n",fon);
//		else
//			printf("TIDAK ADA\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//bool isPrime(int a)
//{
//	if(a==2)
//		return true;
//	else if(a<2)
//		return false;
//	else
//	{
//		int x = 0;
//		for(int i=1; i<a; i++)
//		{
//			if(a%i==0)
//				x++;
//			if(x>1)
//				return false;
//		}
//		return true;
//	}
//}
//int main()
//{
//	int testCase,a,b,counter;
//	bool right;
//	scanf("%d",&testCase);
//	fflush(stdin);
//	for(int i=0; i<testCase; i++)
//	{
//		scanf("%d %d",&a,&b);
//		fflush(stdin);
//		counter = 0;
//		for(int j=a; j<=b; j++)
//		{
//			if(isPrime(j))
//				continue;
//			right = true;
//			for(int k=2; k<j; k++)
//			{
//				if(!isPrime(k))
//				{
//					if(j%k==0)
//					{
//						right = false;
//						break;
//					}
//				}
//
//			}
//			if(right==true)
//				counter++;					
//		}
//		printf("%d\n",counter);
//	}
//	getchar();
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n,x,y;
//	scanf("%d",&n);
//	fflush(stdin);
//	for(x=0; x<n; x++)
//	{
//		for(y=0; y<n; y++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("\n");
//	for(x=0; x<n; x++)
//	{
//		for(y=0; y<n; y++)
//		{
//			(y==0||x==0||x==n-1||y==n-1)?printf("*"):printf(" ");
//		}
//		printf("\n");
//	}
//	getchar();
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n,x,temp,counter;
//	scanf("%d",&n);
//	fflush(stdin);
//	x = 0;
//	counter = 0;
//	while(n!=0)
//	{
//		temp=n%10;
//		if(temp==1)
//		{
//			x+=pow(2.0,counter);
//		}
//		else
//			x+=0;
//		n/=10;
//		counter++;
//	}
//	printf("%d",x);
//	getchar();
//	return 0;
//}


#include<stdio.h>
int main()
{
	int banyakJenis,hargaSatuan,jumlah,subtotal,jumlahBayar,yesNo=1;char nama[100];
	while(yesNo!=0)
	{
		printf("Banyak Jenis Barang: ");
		scanf("%d",&banyakJenis);
		fflush(stdin);
		subtotal = 0;
		for(int i=0; i<banyakJenis; i++)
		{
			//Banyak Barang Harga Satuan SubTotal
			printf("Input Nama Barang: ");
			scanf("%[^\n]",&nama);
			fflush(stdin);
			printf("Input Satuan Barang dan Harga Barang: ");
			scanf("%d %d",&jumlah,&hargaSatuan);
			fflush(stdin);
			subtotal+=(hargaSatuan*jumlah);
		}
		do
		{
			printf("Bayar: ");
			scanf("%d",&jumlahBayar);
			fflush(stdin);		
			if(jumlahBayar<subtotal)
				printf("Belum Cukup\n");
		}while(subtotal>jumlahBayar);
		printf("Total: %d\nKembalian: %d\n",subtotal,(jumlahBayar-subtotal)>0?jumlahBayar-subtotal:0);
		printf("\n\nBelanja Lagi?[0|1]: ");
		scanf("%d",&yesNo);
		fflush(stdin);
	}
	return 0;
}