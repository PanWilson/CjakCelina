#include "stdio.h"
#include <stdlib.h>


int main()
{
	unsigned int n;
	int i,a=0,b=0;
	scanf_s("%u", &n);
	while (n >> (a + b)>0) {
		if (n >> (a + b) & 1)a++;
		else b++;
	}
	printf("%u=", n);
	for (i = a + b-1; i >=0; i--) printf("%u", n >> i & 1);
	printf("\njedynki:%d\nzera:%u", a, b);
	return 0;
}
