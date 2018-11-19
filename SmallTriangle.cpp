#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

float getArea(triangle *tr,int index)
{
	return 0.25*sqrt((tr[index].a+tr[index].b+tr[index].c)*
					((-1)*tr[index].a+tr[index].b+tr[index].c)*
					(tr[index].a+(-1)*tr[index].b+tr[index].c)*
					(tr[index].a+tr[index].b+(-1)*tr[index].c));
}
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
	triangle temp;
	int min;
	float areaCurr,areaMin;
	for(int i=0; i<n; i++)
	{
		min = i;
		for(int j=i; j<n; j++)
		{
			areaMin = getArea(tr,min);
			areaCurr = getArea(tr,j);
			if(areaMin>areaCurr)
		    {
		    	//A>B
		    	min = j;
			}	
		}
		printf("%.2f\n", areaMin);
		temp = tr[min];
		tr[min] = tr[i];
		tr[i] = temp;
	}

    //38295 = 36828
}
int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = (triangle*)malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	printf("\n");
	sort_by_area(tr, n);
	printf("\n");
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
