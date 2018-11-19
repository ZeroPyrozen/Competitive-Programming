#include <stdio.h>
int main()
{
	int N, Nilai=1;
	scanf ("%d", &N);
	for (int counter=1; counter<=N; counter++)
	{
		Nilai = 2*Nilai + 1;
	}
	printf ("%d\n", Nilai);
	return 0;
}