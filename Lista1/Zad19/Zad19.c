#include "stdio.h"


int main()
{
	char slowo[1024];
	int i = 0;
	fgets(slowo, 1024, stdin);
	while (i <= 1024) {
		if ((slowo[i] > '9' || slowo[i] < '0') && slowo[i] != '-') {
			if (i == 0)printf("0");
			break;
		}
		printf("%c",slowo[i]);
		i++;
	}
	printf("\n");
	return 0;
}