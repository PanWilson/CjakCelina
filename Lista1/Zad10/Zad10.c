#include "stdio.h"


int main()
{
	char zdanie[1024], kot[5] = { 'k','o','t','e','k'};
	int i = 0, j = 0;
	fgets(zdanie, 1024, stdin);
	while (i < 1024) {
		if (zdanie[i] == '\n')break;
		if (zdanie[i] == 'k') {
			while (j < 5) {
				if (zdanie[i + j] != kot[j])break;
				j++;
			}
			if (j == 5) {
				printf("piesek");
				if (i + 5 > i)break;
				i += 5;
			}
			j = 0;
		}
		printf("%c", zdanie[i]);
		i++;
	}
	return 0;
}