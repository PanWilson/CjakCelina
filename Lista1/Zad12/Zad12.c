#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
	char slo[1024];
	int a = 0, i = 0;
	bool s = false;
	fgets(slo, 1024, stdin);
	for (i = 0; i<1024; i++) {
		if (slo[i] == '\n') {
			break;
		}
		if (s == false && slo[i] != ' ') {
			a++;
			s = true;
		}
		if (s == true && slo[i] == ' ') {
			s = false;
		}


	}
	printf("%i", a);
	return 0;
}