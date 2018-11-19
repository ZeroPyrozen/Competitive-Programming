#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main ()
{
	int i,j,A,B,X=1;
	A=9;
	B=2;
	for(i=1; i<=10; i++)
	{
		for(j=1; j<=20; j++)
		{
			if(i==1 || j==1 || i==10 || j==20)
			{
				printf("#");
			}
			else if(i == A && j == B )
			{
					printf("X");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	while(X != 0)
	{
	
		switch(getch()) 
		{
			
			case 'w' :
			{
				if(A>2);
				{
					A--;
				if(A<2)
				{
					A++;
				}
				for(i=1; i<=10; i++)
		{
			for(j=1; j<=20; j++)
			{
				if(i==1 || j==1 || i==10 || j==20)
				{
					printf("#");
				}else if(i == A && j == B )
				{
						printf("X");
				}else
				{
					printf(" ");
				}
			}
			printf("\n");
			}
				}
				break;
			}
			
			case 's' :
			{	
				if(A<9)
				{
					A++;
				for(i=1; i<=10; i++)
		{
			for(j=1; j<=20; j++)
			{
				if(i==1 || j==1 || i==10 || j==20)
				{
					printf("#");
				}else if(i == A && j == B )
				{
						printf("X");
				}else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
		}
				break;
			}
			
			case 'a' :
			{
				if(B>2)
				{
					B--;
				for(i=1; i<=10; i++)
		{
			for(j=1; j<=20; j++)
			{
				if(i==1 || j==1 || i==10 || j==20 )
				{
					printf("#");
				}else if(i == A && j == B )
				{
						printf("X");
				}else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
		}
				break;
			}
			
			case 'd' :
			{
				if(B<19)
				{
					B++;
				for(i=1; i<=10; i++)
		{
			for(j=1; j<=20; j++)
			{
				if(i==1 || j==1 || i==10 || j==20)
				{
					printf("#");
				}else if(i == A && j == B )
				{
						printf("X");
				}else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
		}
				break;
			}
		}
	}
	return (0);
}
