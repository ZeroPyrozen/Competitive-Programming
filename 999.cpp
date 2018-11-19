#include<stdio.h>
#include<stdlib.h>
int main()
{
	double b,c,d;
	char output[50];
	scanf("%lf",&d);
	getchar();
	scanf("%lf",&b);
	getchar();
	scanf("%lf",&c);
	double a;
	a = (double)d/999;
	snprintf(output,50,"%lf",a);
	printf("0.%c%c%c...\n",output[2],output[3],output[4]);
	a = (double)b/999;
	snprintf(output,50,"%lf",a);
	printf("0.%c%c%c...\n",output[2],output[3],output[4]);
	a = (double)c/999;
	snprintf(output,50,"%lf",a);
	printf("0.%c%c%c...\n",output[2],output[3],output[4]);
	return 0;
}



