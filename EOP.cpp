#include<stdio.h>

int main()
{
    int a, hasil = 1;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
	    hasil=hasil*2+1;
    }
    printf("%d\n",hasil);
    return 0;
}
