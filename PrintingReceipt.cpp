#include<stdio.h>

int main()
{
	char barang1[100],barang2[100],barang3[100],harga1[100],harga2[100],harga3[100];
	scanf("%[a-z||A-Z] %[0-9] %[a-z||A-Z] %[0-9] %[a-z||A-Z] %[0-9]",&barang1,&harga1,&barang2,&harga2,&barang3,&harga3);
	printf("%-10s %-11s\n%-10s %-11s\n%-10s %-11s\n",barang1,harga1,barang2,harga2,barang3,harga3);
	return 0;
}

/*

*/
