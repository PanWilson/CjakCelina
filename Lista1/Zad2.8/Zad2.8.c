#include "stdio.h"
#include <stdlib.h>


int anagramy(char *s, char *t) {

	int i = 0, x=0, j = 0, k = 0;
	while (s[j] != '\n') {
		j++;
	}
	while (t[k] != '\n') {
		k++;
	}

	if (j != k)return 0;

	j = 0;
	k = 0;

	while (i < 26) {
		x = 0;
		while (s[x] != '\n') {
			if (s[x] == i + 'a')j++;
			x++;
		}
		x = 0;
		while (t[x] != '\n') {
			if (s[x] == i + 'a')k++;
			x++;
		}
		if (j != k)return 0;
		i++;
	}
	return 1;
}


int main()
{
	char a[1024], b[1024];
	printf("Podaj zdanie:");
	fgets(a, 1024, stdin);
	printf("Podaj 2 zdanie:");
	fgets(b, 1024, stdin);
	printf("%i\n", anagramy(b, a));
	return 0;
}

