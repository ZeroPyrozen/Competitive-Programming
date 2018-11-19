#include<stdio.h>
#include<string.h>

struct Schedule
{
	char h[20],m[20];
	char time[20];
	char sym;
}sch[110];

int main()
{
	int data;
	scanf("%d",&data);
	while(data!=0)
	{
		for(int i=0; i<data; i++)
		{
			getchar();
			scanf("%[0-9]d%c%[0-9]d%s",&sch[i].h,&sch[i].sym,&sch[i].m,&sch[i].time);
			printf("%s %s %s\n",sch[i].h,sch[i].m,sch[i].time);	
		}
		scanf("%d",&data);
	}
	return 0;
}
