#include "stdio.h"
#include <stdlib.h>



int main()
{
	int n, i, j, fact=1, k,buff;
	scanf_s("%i",&n);
	int *a = malloc(n * sizeof(int*));

	for (i = 1; i <= n; i++)
	{
		fact *=i;
	}

	for ( i = 1; i <= n; i++)
	{
		a[i-1] = i;
	}

	for (i = 0; i < fact; i++) {
		for (k = 0; k < n; k++) {
			printf("%i", a[k]);
		}
		printf("\n");
		j = i%(n-1);
		buff = a[j];
		a[j] = a[j+1];
		a[j+1] = buff;
	}
	return 0;
}

