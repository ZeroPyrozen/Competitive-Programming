#include<stdio.h>
#include<string.h>
void swap(char *x, char *y) 
{ 
    char temp; 
    temp = *x; 
    *x = *y; 
    *y = temp; 
} 
void permutate(char *a, int l, int r,char *b,int *isBetul) 
{ 
	int i; 
	if (l == r) 
	{
		//printf("%s\n",a);
		if(strstr(a,b))
		{
			*isBetul = 1;
			return;
		}
			
	}
   	else
   	{ 
   		if(strstr(a,b))
		{
			*isBetul = 1;
			return;
		} 
       	for (i = l; i <= r; i++) 
       	{ 
          	swap((a+l), (a+i));
			if(strstr(a,b))
			{
				*isBetul = 1;
				return;
			} 
          	permutate(a, l+1, r,b,isBetul); 
          	swap((a+l), (a+i));
        	
       } 
   	}
} 
char str1[100010],str2[100010];
int main()
{
	int length;
	int isBetul = 0;
	bool found;
	scanf("%s",&str1);
	scanf("%s",&str2);
	length = strlen(str1);
	for(int i=0; i<length; i++)
	{
		 found  = true;
		for(int j=0; j<strlen(str2) && found; j++)
		{
			if(i+j>=length||str1[j]!=str2[i+j])
				found = false;
		}

			
	}
		if(found==true)
		{
			printf("YES");
		}
		else
			puts("NO");
	//permutate(str1,0,length-1,str2);
	return 0;
}


