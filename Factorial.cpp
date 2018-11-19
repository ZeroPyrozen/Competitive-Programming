//#include<stdio.h>
//
//int main()
//{
//	long long int ans=1ll;
//	long long int a = 1ll,x=1ll,i = 1ll;
//	scanf("%lld",&x);
//	for(i=1; i<=x; i++)
//	{
//		ans*=i;
//	}
//	printf("%lld\n",ans);
//	return 0;
//}

#include<iostream>
#include<cstring>

int max = 5000;

void display(int arr[]){
    int ctr = 0;
    for (int i=0; i<max; i++){
        if (!ctr && arr[i])         ctr = 1;
        if(ctr)
            std::cout<<arr[i];
    }
}


void factorial(int arr[], int n){
    if (!n) return;
    int carry = 0;
    for (int i=max-1; i>=0; --i){
        arr[i] = (arr[i] * n) + carry;
        carry = arr[i]/10;
        arr[i] %= 10;
    }
    factorial(arr,n-1);
}

int main(){
    int *arr = new int[max];
    std::memset(arr,0,max*sizeof(int));
    arr[max-1] = 1;
    int num;
    std::cout<<"Enter the number: ";
    //std::cin>>num;
    num = 1000;
	std::cout<<"factorial of "<<num<<"is :\n";
    factorial(arr,num);
    display(arr);
    delete[] arr;
    return 0;
}


//10! = 1*2*3*4*5*6*7*8*9*10
/*
	
	2 = 2
	3 = 3
	4 = 2 2
	5 = 5
	6 = 2 3
	7 = 7
	8 = 2 2 2
	9 = 3 3
	10 = 2 5
//3! = 1*2*3
	1 = 1
	2 = 1 2
	3 = 1 3
*/



