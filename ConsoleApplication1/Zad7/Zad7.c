#include "stdio.h"


int main()
{
	char slowo[1024];
	int i = 0;
	fgets(slowo, 1024, stdin);
	while(i <= 1024) {
		if (slowo[i] == ' '|| slowo[i] == '\n')break;
		i++;
	}
	i--;
	while (i >= 0) {
		printf("%c", slowo[i]);
		i--;
	}
	return 0;
}