#include<stdio.h>

int getStringLength(char kalimat[])
{
	int i=0;
	while(kalimat[i]!='\0')
	{
		i++;
	}
	return i;
}
int isGoodExist(char kalimat[],int panjangKalimat)
{
	int i;
	if(panjangKalimat<4)
		return 0;
	for(i=0; i<panjangKalimat; i++)
	{
		if(kalimat[i]!='G'&&kalimat[i]!='g')
			continue;
		if(kalimat[i+1]!='o'&&kalimat[i+1]!='O')
			continue;
		if(kalimat[i+2]!='o'&&kalimat[i+2]!='O')
			continue;
		if(kalimat[i+3]!='d'&&kalimat[i+3]!='D')
			continue;
		else
			return 1;
	}
	return 0;
}
int main()
{
	int testCase,panjangKalimat;
	char kalimat[100];
	scanf("%d",&testCase);
	for(int i=0; i<testCase; i++)
	{
		getchar();
		scanf("%[^\n]",&kalimat);
		panjangKalimat = getStringLength(kalimat);
		if(isGoodExist(kalimat,panjangKalimat))
			printf("Case #%d: yes\n",i+1);
		else
			printf("Case #%d: no\n",i+1);
	}
	return 0;
}
