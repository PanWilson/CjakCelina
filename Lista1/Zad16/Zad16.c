#include <stdio.h>
#include <stdlib.h>

int main()
{

	int a = 0, b = 0;
	char dz='+', cnt='t';
	while (cnt == 't') {
		printf("Podaj a:");
		scanf("%i", &a);
		printf("Podaj dzialanie:");
		scanf(" %c", &dz);
		printf("Podaj b:");
		scanf("%i", &b);
		switch (dz) {
			case '+':
				printf("%i\n", a + b);
				break;
			case '-':
				printf("%i\n", a - b);
				break;
			case '*':
				printf("%i\n", a*b);
				break;
			case '/' :
				if (b == 0)printf("Przez 0 nie dzielimy!");
				else printf("%i\n", a / b);
				break;
		}
		printf("Czy chcesz kontynuowac? [t/n]");
		scanf(" %c", &cnt);
	}
	return 0;
}