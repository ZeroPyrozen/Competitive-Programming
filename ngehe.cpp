#include <conio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

void diskon(int &a, int &b)
    {
        //c: total belanja, d: backup nilai produk
        int c,d,e;c=a*b;d=a;a=c;
        cout<<"\nTotal belanja sebelum diskon: "<<c;
        //minimum belanja 50,000 - periksa
        if (c>=50000)
        {
            switch (d) //d digunakan untuk backup nilai produk
            {
			case 35000: e=350000.1;b=(35000*b)-(e+b);break;
            case 50000: e=500000.25;b=(50000*b)-(e+b);break;
            case 75000: e=750000.5;b=(75000*b)-(e+b);break;
            case 65500: e=655000.25;b=(65500*b)-(e+b);break;
            case 25500:    e=250000.05;b=(25500*b)-(e+b);break;
            default: cout<<"\nMasalah harga barang, program dihentikan.";getch();exit(2);}
            //cout<<"\ne: "<<e<<endl<<"b: "<<b; //debug
            cout<<"\nHarga setelah diskon: "<<b;
			a = b;
        }
        else
            {cout<<"\nTidak berlaku diskon.";}
    }

void pay(int &rp)
    {
        int uang,kembali;
        //s
    }

void menu()
{
    cout<<"Pilih produk: (semua harga sebelum diskon, minimum belanja 50,000)\n";
    cout<<"1: Basis Data (Rp 35,000, diskon 10%)\n";
    cout<<"2: Algoritma & Pemerograman Lanjut (Rp. 50,000, diskon 25%)\n";
    cout<<"3: Sistem Operasi (Rp. 75,000, diskon 50%)\n";
    cout<<"4: Sistem Jarigan Komputer (Rp. 65,500, diskon 25%)\n";
    cout<<"5: Bahasa Inggris (Rp. 25,500, diskon 5%)\n";
}

int main()
{
    int pilih,jumlah,bayar,harga;
    menu();
    cout<<"Pilih nomor buku yang akan dipesan: ";cin>>pilih;
	fflush(stdin);
    switch (pilih)
        {case 1: harga=35000;break;
        case 2: harga=50000;break;
        case 3: harga=75000;break;
        case 4: harga=65500;break;
        case 5: harga=25500;break;
        default: cout<<"Pilihan salah.";getch();exit(1);}
    cout<<"Jumlah pembelian: ";cin>>jumlah;
	fflush(stdin);
	cout<<"\n[debug: harga di int main = "<<harga<<"]";
    diskon(harga, jumlah);
    cout<<"\n[debug: harga setelah didiskon = "<<harga<<"]"<<endl;
    pay(harga);
	getchar();
	return 0;
}