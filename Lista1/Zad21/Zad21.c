#include "stdio.h"


int main()
{
	char alf[3] = {'a','b','c'};
	int i = 0;
	while (i < 81) {
		printf("%c%c%c%c\n", alf[(i/27)%3], alf[(i/9)%3], alf[(i/3) % 3], alf[i%3]);
		i++;
	}
	return 0;
}