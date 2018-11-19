#include<stdio.h>

void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    
    int i = (low - 1);  
    for (int j = low; j <= high- 1; j++) 
    { 
 
        if (arr[j] <= pivot) 
        { 
            i++;   
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  

void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        int pi = partition(arr, low, high); 
  
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
}
int arrayInt[100000];
int main()
{
	int jumlahData,subset,i,sumMin=0,sumMax = 0,j;
	scanf("%d %d",&jumlahData,&subset);
	for(i=0; i<jumlahData; i++)
	{
		scanf("%d",&arrayInt[i]);
	}
	quickSort(arrayInt,0,jumlahData-1);
	for(i=0; i<subset; i++)
	{
		sumMin+=arrayInt[i];
	}
	//1234567
	//123 45 67
	sumMax+=arrayInt[0];
	if(jumlahData!=3)
	{
		for(i=jumlahData-2,j=0; j<subset-1; i-=2,j++)
		{
			sumMax+=arrayInt[i];
		}
	}
	else
		sumMax+=arrayInt[2];
	printf("%d %d\n",sumMin,sumMax);
	return 0;
}
