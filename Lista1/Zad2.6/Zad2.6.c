#include "stdio.h"
#include <stdlib.h>


void odwroc(char *s, char *t){
	int i=-1, j=0;
	while (t[i] != '\n') {
		i++;
	}
	while (i>0) {
		s[j] = t[i - 1];
		j++;
		i--;
	}
	s[j] = '\0';
}


int main()
{
	char a[1024],b[1024];
	printf("Podaj zdanie:");
	fgets(a, 1024, stdin);
	odwroc(b, a);
	printf("%s \n", b);
	return 0;
}

