#include "stdio.h"


int main()
{
	int a = 0;
	scanf_s("%d", &a);
	for (int i = 0; i < a-1; i++) {
		for (int j = 0; j < a-2-i; j++) {
			printf(" ");
		}
		for (int j = 0; j < 1+i*2; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < a/2; i++) {
		printf(" ");
	}
	printf("#\n");
	for (int i = 0; i < a; i++) {
		printf("-");
	}
	return 0;
}

