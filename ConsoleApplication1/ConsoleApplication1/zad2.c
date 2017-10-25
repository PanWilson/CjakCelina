#include "stdio.h"


int main()
{
	char imie[1024];
	int a = 0, i = 0;
	fgets(imie, 1024, stdin);
	for (i = 0; i < 10; i++) {
		if (imie[i] == 'B' || imie[i] == 'b') a++;
		if (imie[i] == '\n') break;
	}
	printf("%i\n", a);
	return 0;
}