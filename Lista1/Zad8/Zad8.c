#include "stdio.h"


int main()
{
	char slowo[1024];
	int i = 0;
	fgets(slowo, 1024, stdin);
	while (i <= 1024) {
		if (slowo[i] == '\n') break;
		if (slowo[i] != ' ') printf("%c", slowo[i] - ((slowo[i] > 90) ? 32 : 0));
		i++;
	}
	return 0;
}