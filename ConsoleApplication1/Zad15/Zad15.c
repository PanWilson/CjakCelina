#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0, i = 0, j = 0;
	scanf("%d", &a);
	for (i = 1; i <= a; i++) {
		for (j = 0; j <= 10; j++) {
			printf("%d * %d = %d \n", i, j, i*j);
		}
		printf("\n");
	}
	return 0;
}