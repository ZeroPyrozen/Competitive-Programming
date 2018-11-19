#include<stdio.h>
#include<stdlib.h>
void clearScreen()
{
	for(int f = 0; f<25; f++)
	{
		printf("\n");
	}
}
int main()
{
	int s[3][3];
	/*
		0	1	2
		___________
	0	|1	0	0
	1	|0	1	0
	2	|0	0	1
	x = 1
	y = 1
	z = 1
	*/
	
	s[0][0] = 1;
	s[0][1] = 0;
	s[0][2] = 0;
	s[1][0] = 0;
	s[1][1] = 1;
	s[1][2] = 0;
	s[2][0] = 0;
	s[2][1] = 0;
	s[2][2] = 1;
	
	for(int baris =0; baris<3; baris++)
	{
		for(int kolom=0; kolom<3; kolom++)
		{
			if(baris==kolom)
				s[baris][kolom] = 1;
			else
				s[baris][kolom] = 0;
			printf("%d ",s[baris][kolom]);
			//1 2 3 \n
			//4 5 6 \n
			//7 8 9 \n
		}
		printf("\n");
	}
	getchar();
	//system("cls");
	clear();
	//0 - 9 
	//1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10
	getchar();
	return 0;	
}



/*
1	3	1	| 9
1	1	-1	| 1 *(-3)
3	11	5	| 35 +

1	3	1	9 *(-1)
1	1 	-1	1 +
0	8	8	32

1	3	1	9
0	-2	-2	-8 *-1/2
0	8	8	32

1	3	1	9
0	1	1	4 *-1
0	8	8	32

x	y	z
1	3	1	9
0	1	1	4
0	0	0	0

z = 0 



x+3y+z = 9
x+ y -z = 1
3x+11y+5z = 35

*/

