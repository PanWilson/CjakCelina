#include "stdio.h"


int main()
{
	char slowo[1024], poli[1024];
	int i = 0, j = -1, a=0;
	fgets(slowo, 1024, stdin);
	while (i <= 1024) {
		if (slowo[i] == '\n') break;
		if (slowo[i] != ' ') {
			j++;
			poli[j] = slowo[i] - ((slowo[i] > 90) ? 32 : 0);
		}
		i++;
	}
	while (a <= j / 2) {
		if (poli[j - a] != poli[a]) {
			printf("Nie polidrom\n");
			break;
		}
		a++;
	}
	if (j - a <= 1)printf("Polidrom\n");
	return 0;
}