#include "stdio.h"


int main()
{
	char imie[1024];
	int a = 0;
	fgets(imie, 1024, stdin);
	for (int i = 0; i < 10; i++) {
		if (imie[i] == 'a' || imie[i] == 'A') a++;
		if (imie[i] == '\n') break;
	}
	printf("%i\n", a);
    return 0;
}