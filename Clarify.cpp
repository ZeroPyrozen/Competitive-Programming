#include<stdio.h>

int main(void)
{
    int input, waktuKerja, waktuJawab, waktuCek, count;
    scanf("%d", &input);
    for(int i=0; i<input; i++)
    {
        scanf("%d %d %d", &waktuKerja, &waktuJawab, &waktuCek);
        //getchar();
        if(waktuJawab>waktuCek&&waktuKerja<waktuJawab&&waktuKerja<waktuCek)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
