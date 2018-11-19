#include<stdio.h>

int main()
{
    int banyakFrame,lebarFrame,panjangFrame;
    scanf("%d",&banyakFrame);
    for(int i=0; i<banyakFrame; i++)
    {
        scanf("%d",&lebarFrame);
        //printf("Case #%d:\n",i+1);
        for(int i=0; i<lebarFrame; i++)
        {
            for(int j=0; j<lebarFrame; j++)
            {
                if(i==0||i==lebarFrame-1||j==0||j==lebarFrame-1||i==j||j==lebarFrame-i-1)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}
