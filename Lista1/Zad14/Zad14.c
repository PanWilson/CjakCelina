#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0, i = 0;
	int bin[1024];
	scanf("%i", &a);
	while (a != 0) {
		bin[i] = a % 2;
		a /= 2;
		i++;
	}
	while (i>0) {
		printf("%d", bin[i - 1]);
		i--;
	}
	return 0;
}