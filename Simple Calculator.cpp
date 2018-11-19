#include<stdio.h>

int main()
{
	float x,y;
	char op;
	scanf("%f%c%f",&x,&op,&y);
	switch(op)
	{
		case '*':
			printf("%.2f",x*y);
			break;
		case '/':
			printf("%.2f",x/y);
			break;
		case '+':
			printf("%.2f",x+y);
			break;
		case '-':
			printf("%.2f",x-y);
			break;
	}
	return 0;
}

/*
	Sn = 2n^2 +7n
	S1 = 2*1^2 + 7*1
	S1 = 2 + 7 = 9
	S2 = 2*2^2 + 7*2
	S2 = 8 + 14 = 22
	S1 = a
	b = S2 - S1 = 22 - 9 = 13

*/
