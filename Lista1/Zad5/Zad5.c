#include "stdio.h"


int main()
{
	int a = 0;
	scanf_s("%d", &a);
	for (int i = 0; i < a*a; i++) {
		if (i % a == 0)printf("\n");
		if ((i%a+ ((i / a) % 2) )%2) printf(" ");
		else printf("#");
	}
	return 0;
}

