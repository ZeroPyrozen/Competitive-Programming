#include<stdio.h>

int main()
{
	int n,a;
	char x;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%c %d",&x,&a);
		if(x=='>')
		{
			for(int baris=0; baris<a*2-1; baris++)
			{
				for(int kolom=0; kolom<a*2-1; kolom++)
				{
					if(baris==kolom&&baris%2==0)
						printf("*");
					else
						printf(".");
				}
				printf("\n");	
			}
			for(int baris=0; baris<a*2-1; baris++)
			{
				for(int kolom=0; kolom<a*2-1; kolom++)
				{
					if(baris==&&baris%2==0)
						printf("*");
					else
						printf(".");
				}
				printf("\n");	
			}	
		}
		else if(x=='<')
		{
			
		}
	}
	return 0;
}
