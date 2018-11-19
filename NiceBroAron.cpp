#include<stdio.h>

int main()
{
	int n,inputUser,min = 1<<30;
	scanf("%d",&n);
	for(int i=0;i<n; i++)
	{
		scanf("%d",&inputUser);
		if(min>inputUser)
			min = inputUser;
	}
	printf("%d",min);
	return 0;
}
