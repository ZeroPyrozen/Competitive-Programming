#include <stdio.h>

int main()
{
    int testcase,baris,kolom,kolomkue,bariskue,stroberi;
    char cake[15][15];
    scanf("%d",&testcase);
    for(int i=0;i<testcase;i++)
    {
        scanf("%d %d",&baris,&kolom);
        getchar();
        for(int j=0;j<baris;j++)
        {
            for(int k=0;k<kolom;k++)
            {
                scanf("%c",&cake[j][k]);
            }
            getchar();
        }
        bariskue=0;
        for(int j=0;j<baris;j++)
        {
            stroberi=0;
            for(int k=0;k<kolom;k++)
            {
                if(cake[j][k]=='S')
                {
                    stroberi =1;
                    break;
                }
            }
            if(stroberi==0)
            {
                bariskue+=kolom;
            }
        }
            bariskue=0;
        for(int k=0;k<kolom;k++)
        {
            stroberi=0;
            for(int j=0;j<baris;j++)
            {
                if(cake[k][j]=='S')
                {
                    stroberi =1;
                    break;
                }
            }
            if(stroberi==0)
            {
                kolomkue+=baris;
            }
        }
        printf("Case #%d: %d\n",i+1,(kolomkue+bariskue)-(kolomkue/baris*bariskue/kolom));
    }
    return 0;
}
