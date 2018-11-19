//#include <stdlib.h>
//#include <string.h>
//#include<stdio.h>
//void failure(char* pattern, int* f);
//int kmp(char* t, char* p);
//
//int* init_array(int size) {
//  int* arr = (int*)malloc(size * sizeof(int));
//  int i;
//  for(i = 0; i < size; i++) {
//    arr[i] = 0;
//  }
//
//  return arr;
//}
//
//int main(void) {
//  char* pattern = "abacab";
//  char* text = "bbacbabcbabcbabbabcbabcbacbbbacbacbacbacbacbabacab";
//
//  int match = kmp(text, pattern);
//
//  printf("Match at: %d\n", match);
//
//  return 0;
//}
//
//int kmp(char* t, char* p) {
//  int m = strlen(p);
//  int n = strlen(t);
//
//  int* f = init_array(m); // Failure function values.
//  int i = 0;
//  int j = 0;
//
//  while (i < n) {
//    if (t[i] == p[j]) {
//      if (j == m - 1) {
//        return i - j;
//      }
//      else {
//        i += 1;
//        j += 1;
//      }
//    }
//    else {
//      if (j > 0) {
//        j = f[j-1];
//      }
//      else {
//        i += 1;
//      }
//    }
//  }
//
//  return -1;
//}
//
//void failure(char* p, int* f) {
//  f[0] = 0;
//  int i = 1;
//  int j = 0;
//
//  int m = strlen(p);
//
//  while (i < m) {
//    if (p[i] == p[j]) {
//      f[i] = j + 1; // j+1 matches up to the current character.
//      i += 1;
//      j += 1;
//    }
//    else if (j > 0) {
//      j = f[j - 1];
//    }
//    else {
//      f[i] = 0;
//      i += 1;
//    }
//  }
//}



#include<stdio.h>
#include<math.h>

int main()
{
	long long int n,i;
    n = 982451653;
	if(n%2==0&&n!=2)
		puts("Not Prime");
	else
	{
		if(n<1)
			puts("Not Prime");
		else
		{
			for(i=2; i<=n/2; i++)
			{
				if(n % i == 0)
				{
					puts("Not Prime");
					return 0;
				}
			}
			puts("Prime");	
		}
	}
	return 0;
}
