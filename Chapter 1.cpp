#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int numberOperator1, numberOperator2, numberOperator3, tampung;
	char operator1, operator2;
	int convert1, convert2;
	printf("Math Computation\n");
	for(int counter = 1; counter<=20; counter++)
	{
		printf("=");
	}
	printf("\nformat	: number operator number operator number\n");
	printf("Example	: 3+3*3\n\n");
	printf("Please Input equation : ");
	scanf("%d%c%d%c%d", &numberOperator1, &operator1, &numberOperator2, &operator2, &numberOperator3);
	convert1 = operator1;
	convert2 = operator2;
		if(convert1==42 || convert1==47)
		{
			switch(operator1)
			{
			case '*': tampung = numberOperator1*numberOperator2;
						break;
			case '/': tampung = numberOperator1/numberOperator2;
						break;
			case '+': tampung = numberOperator1+numberOperator2;
						break;
			case '-': tampung = numberOperator1-numberOperator2;
						break;
			}
			switch(operator2)
			{
			case '*': printf("Result : %d", tampung*numberOperator3);
						break;
			case '/': printf("Result : %d", tampung/numberOperator3);
						break;
			case '+': printf("Result : %d", tampung+numberOperator3);
						break;
			case '-': printf("Result : %d", tampung-numberOperator3);
						break;
			}
			
		}
		else 
		{
			switch(operator2)
			{
			case '*': tampung = numberOperator2*numberOperator3;
						break;
			case '/': tampung = numberOperator2/numberOperator3;
						break;
			case '+': tampung = numberOperator2+numberOperator3;
						break;
			case '-': tampung = numberOperator2-numberOperator3;
						break;
			}
			switch(operator1)
			{
			case '*': printf("Result : %d", tampung*numberOperator1);
						break;
			case '/': printf("Result : %d", tampung/numberOperator1);
						break;
			case '+': printf("Result : %d", tampung+numberOperator1);
						break;
			case '-': printf("Result : %d", tampung-numberOperator1);
						break;
			}
		}
	
	int baseNum, powNum, tampung1;
	printf("\n\nMath Computation\n");
	for(int counter = 1; counter<=20; counter++)
	{
		printf("=");
	}
	printf("\nformat	: base_number power_number\n");
	printf("Example : 3 2\n\n");
	printf("Please Input equation : ");
	scanf("%d %d", &baseNum, &powNum);
	tampung1 = baseNum;
	for(int testCounter=1; testCounter<=powNum-1; testCounter++)
	{
		baseNum*=tampung1;
	}
	printf("Result : %d", baseNum);


	int inputWidth, inputHeight, inputClothside, temp1, temp2;
	printf("\n\nCloth counter\n");
	for(int counter = 1; counter<=20; counter++)
	{
		printf("=");
	}
	printf("\nFormat input box : width height\n");
	printf("Format input cloth size : side\nExample :\n\tInput box : 9 5\n\tInput Cloth : 3\n\n");
	printf("Input box : ");
	scanf("%d %d", &inputWidth, &inputHeight);
	printf("Input cloth size : ");
	scanf("%d", &inputClothside);
	temp1 = inputWidth/inputClothside;
		if(inputWidth%inputClothside!=0)
		{
			temp1+=1;
		}
	temp2 = inputHeight/inputClothside;
		if(inputHeight%inputClothside!=0)
		{
			temp2+=1;
		}
	printf("Minimun you need : %d clotch<s>\n\n", temp1*temp2);
	int inputSlice, result;
	printf("Pizza slice counter\n");
	for(int counter = 1; counter<=20; counter++)
	{
		printf("=");
	}
	printf("\nFormat Input slice : n\nExample Input slice : 3\n");
	printf("Input slice : ");
	scanf("%d", &inputSlice);
	result = 0.5*(inputSlice*inputSlice+inputSlice+2);
	printf("Total maximum pizza : %d", result);
	getchar();
	getchar();
	return 0;
}