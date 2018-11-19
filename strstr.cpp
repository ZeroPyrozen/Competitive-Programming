#include<stdio.h>
#include<string.h>

int main()
{
	char haystack[] = "Universitas Bina Nusantara";
	char needle[] = "versi";
	if(strstr(haystack,needle))
		printf("%s",strstr(haystack,needle));
	else
		printf("Not Found");
	return 0;
}
