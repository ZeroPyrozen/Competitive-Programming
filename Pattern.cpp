//#include<stdio.h>
//
//int main()
//{
//	int n,count = 0,temp = 0;
//	scanf("%d",&n);
//	for(int i=1; i<=n; i++)
//	{
//		for(int j=1; j<=i; j++)
//		{
//			//printf("*");
//			count++;
//			temp++;
//		}
//		printf("%d\n",temp);
//		temp  = 0;
//		
//		//printf("\n");
//		//count++;
//	}
//	//0,-1,-3,-7,-12,-20
//	/*
//		3 + 2 + 1 + 3 = 9
//		
//	*/
//	printf("%d",count);
//	return 0;
//}

//3+2+1 = 6 9/2 = 

//#include<stdio.h>
//
//int main()
//{
//	int m,temp;
//	scanf("%d",&m);
//	temp = m;
//	for(int i=1; i<=m; i++)
//	{
//		for(int j=temp; j>=1; j--)
//		{
//			printf("%d ",j);
//		}
//		
//		printf("\n");
//		temp+=temp;
//	}
//}

//#include<stdio.h>
//
//int main()
//{
//	int m,temp,i,j,n;
//	scanf("%d",&m);
//	scanf("%d",&n);
//	temp = m;
//	for(i=temp, j=1; i>=1&&j<=n; i--)
//	{
//		if(i==1)
//		{
//			printf("\n");
//			temp+=temp;
//			i = temp;
//			i++;	
//		}
//		j++;
//	}
//	printf("%d ",i+1);
//	return 0;
//}

/*
	N = 4
	m = 3
	IF (N-1)%m equals 0 THEN
		f(N,m) = (N/m+1)*m - N%m
	ELSE
		f(N,m) = 
	ENDIF
	f(4,3) = 6 = (4/3+1)*3 - 4%3 = 6
	
	f(N,m) = (N/m+1)*m - N%m
	
	f(5,3) = (5/3+1)*3 - (N-N%m)
	[3,2,1] [6,5,4,3,2,1] [12,11,10,9,8,7,6,5,4,3,2,1]
	 -1-1    -1-1-1-1-1		-1-1-1-1-1-1-1-1-1-1-1-1
		  *2			*2
*/

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int c = 1,n=3;
//	for(int i=2; i<=n; i = pow(i,c))
//	{
//		printf("Hello World\n");
//	}
//	return 0;
//}

#include<stdio.h>

int main()
{
	int testCase;
	int menit;
	scanf("%d",&testCase);
	for(int i=0; i<testCase; i++)
	{
		scanf("%d",&menit);
		printf("Case #%d: %02d:%02d\n",i+1,menit/60,menit%60);
	}
	return 0;
}
