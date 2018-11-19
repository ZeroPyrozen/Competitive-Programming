#include<stdio.h>

int main()
{
	int angka_1,angka_2;
	scanf("%d %d",&angka_1,&angka_2);
	printf("%d\n",((angka_1%10*10) + (angka_2/10%10)));
	return 0;
}