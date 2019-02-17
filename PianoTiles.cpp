//#include<stdio.h>
//
//void insertTileMap(int row,int column, char map[110][110])
//{
//	for(int i=0; i<row; i++)
//	{
//		for(int j=0; j<column; j++)
//		{
//			scanf("%c",&map[i][j]);
//		}
//		getchar();
//	}
//}
//void printMap(int row,int column, char map[110][110])
//{
//	for(int i=0; i<row; i++)
//	{
//		for(int j=0; j<column; j++)
//		{
//			printf("%c",map[i][j]);
//		}
//		printf("\n");
//	}
//}
//int findExpectedX(char line[],int column)
//{
//	int i;
//	for(i=0; i<column; i++)
//	{
//		if(line[i]=='|')
//			return i;
//		if(line[i]=='/')
//			return i-1;
//		if(line[i]=='\\')
//			return i+1;
//	}
//	return column;
//}
//int findActualX(char line[],int column)
//{
//	int i;
//	for(i=0; i<column; i++)
//	{
//		if(line[i]=='|')
//			return i;
//		if(line[i]=='/')
//			return i;
//		if(line[i]=='\\')
//			return i;
//	}
//	return column;
//}
//int main()
//{
//	int testCase,row,column,expectedX,actualX,countTap = 0;
//	char map[110][110];
//	scanf("%d",&testCase);
//	for(int i=0; i<testCase; i++)
//	{
//		countTap = 0;
//		scanf("%d %d",&row,&column);
//		getchar();
//		insertTileMap(row,column,map);
//		printMap(row,column,map);
//		for(int k = 0; k<row; k++)
//		{
//			if(k==0)
//			{
//				expectedX = findExpectedX(map[k],column);
//				actualX = findActualX(map[k],column);
//			}
//			else
//			{
//				actualX = findActualX(map[k],column);
//				if(actualX!=expectedX||actualX==-1||actualX==column||expectedX==column||expectedX==-1)
//				{
//					countTap++;
//				}
//				expectedX = findExpectedX(map[k],column);
//			}
//		}
//		countTap++;
//		printf("Case #%d: %d\n",i+1,countTap);
//	}
//	return 0;
//}

#include<stdio.h>

int tiles(int bar);
void piano(int);
int a;

int main(void)
{
    int input;
    scanf("%d", &input);
    for(int i=0 ; i<input; i++)
    {
		piano(i);
        printf("\n");
    }
}

void piano(int x)
{
    int panjang, lebar, jawaban=0;
    scanf("%d %d", &panjang, &lebar);
    a=-3;
    for(int i=0; i<panjang; i++)
    {
        jawaban+=tiles(lebar);
    }
    printf("Case #%d: ", x+1);
    printf("%d", jawaban);
}

int tiles(int bar)
{
    char baris[bar+1];
    int count;
    scanf("%s", baris);
    for(int i=0; i<bar; i++)
    {
        if(baris[i]!='.')
        {
            if(baris[i]=='\\')
                count=i+1;
            else if(baris[i]=='/')
                count=i-1;
            else
                count=i;
            if(i==a)
            {
                a=count;
                return 0;
            }
            else
            {
                a=count;
                return 1;
            }
        }
    }
}
