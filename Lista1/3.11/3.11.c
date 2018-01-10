#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a, b;
	sscanf(argv[1], "%d", &a);
	sscanf(argv[3], "%d", &b);
	switch (argv[2][0]) {
		case '+':
			printf("%i\n", a + b);
			break;
		case '-':
			printf("%i\n", a - b);
			break;
		case 'x':
			printf("%i\n", a*b);
			break;
		case '/':
			if (b == 0)printf("Przez 0 nie dzielimy!");
			else printf("%i\n", a / b);
			break;
		default:
			printf("Zly znak");
	}

	return 0;
}