#include "stdio.h"


int main()
{
	int a = 0;
	scanf_s("%d", &a);
	for (int i = 0; i < a; i++) {
		printf("*");
	}
	printf("\n");
    return 0;
}

