#include "stdio.h"
#include <stdlib.h>


void litery(char *s, char *t) {

	int i = 0, j = 0, k = 0;
	while (j < 26) {
		i = 0;
		while (t[i] != '\n') {
			if (t[i] == j + 'a' || t[i] == j + 'A') {
				s[k] = j + 'a';
				k++;
				break;
			}
			i++;
		}
		j++;
	}
	s[k] = '\0';
}


int main()
{
	char a[1024], b[127];
	printf("Podaj zdanie:");
	fgets(a, 1024, stdin);
	litery(b, a);
	printf("%s\n", a);
	return 0;
}

