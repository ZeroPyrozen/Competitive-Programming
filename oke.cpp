#include<stdio.h>

int main() {
	char inputUser[100];
	scanf_s("%[^\n]", &inputUser);
	printf("printf(\"%%s\\n\", \"%s\");", &inputUser);
	getchar();
	getchar();
	return 0;
}