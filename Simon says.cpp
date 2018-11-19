//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	int n,len,valid;
//	char x[110];
//	scanf("%d",&n);
//	for(int i=0; i<n; i++)
//	{
//		getchar();
//		scanf("%[^\n]",&x);
//		len = strlen(x);
//		if(len<11)
//			continue;
//		else
//		{
//			if(strstr(x,"simon says ")!=NULL)
//			{
//				for(int j=11; j<len; j++)
//				{
//					printf("%c",x[j]);
//				}
//				
//			}
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}
#include <string.h>
#include <stdio.h>

#define SIMON_SAYS "Simon says "
#define SIMON_LENGTH 11

int main()
{
    int n;
    scanf("%d", &n);
    char buffer[101];
    for(int i=0; i<n; i++)
    {
        scanf(" %[^\n]", buffer);
        if (!strncmp(buffer, SIMON_SAYS, SIMON_LENGTH)) 
            printf("%s", buffer + SIMON_LENGTH);
        printf("\n");
    }
}
