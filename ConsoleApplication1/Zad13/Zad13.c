#include <stdio.h>
#include <stdlib.h>

int main()
{
	char slo[1024];
	int a = 0, i = 0;
	fgets(slo, 1024, stdin);
	for (i = 0; i<1024; i++) {
		if (slo[i] == '\n') break;
		a += slo[i] - '0';
	}
	printf("%i\n", a);
	return 0;
}