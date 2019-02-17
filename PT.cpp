#include<stdio.h>

int compare(char kata[], int panjang)
{
    if(panjang<4)
    {
        return 0;
    }
    for(int i=0; i<panjang; i++)
    {
        if(kata[i]!='G' && kata[i]!='g')
        {
            continue;
        }
        if(kata[i+1]!='O' && kata[i+1]!='o')
        {
            continue;
        }
        if(kata[i+2]!='O' && kata[i+2]!='o')
        {
            continue;
        }
        if(kata[i+3]!='D' && kata[i+3]!='d')
        {
            continue;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int input, panjang=0;
    char kata[90];
    scanf("%d", &input);
    for(int i=0; i<input; i++)
    {
        panjang=0;
        getchar();
        scanf("%[^\n]", &kata);
        while(kata[panjang]!=0)
        {
            panjang++;
        }
        if(compare(kata, panjang))
        {
            printf("Case #%d: yes\n", i+1);
        }
        else
        {
            printf("Case #%d: no\n", i+1);
        }
    }
    return 0;
}
