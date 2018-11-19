#include<stdio.h>


int linkedList[100000];
int main()
{
	int jumlahLink,jumlahOp,i,index,arah;
	scanf("%d %d",&jumlahLink,&jumlahOp);
	for(i=0; i<jumlahLink; i++)
	{
		linkedList[i] = i+1;
	}
	for(i=0; i<jumlahOp; i++)
	{
		scanf("%d %d",&index,&arah);
		//Operasi Slide
		
	}
	for(i=0; i<jumlahLink; i++)
	{
		printf("%d ",linkedList[i]);
	}
	printf("\n");
	return 0;
}
