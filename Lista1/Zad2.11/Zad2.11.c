#include "stdio.h"
#include <stdlib.h>
#include <math.h>


int main()
{
	unsigned int n,m;
	int hlp,i=0,j,hlp2;
	printf("Podaj 2 liczby:");
	scanf_s("%u%u", &n,&m);
	hlp = pow(2, m - 1);

	hlp2 = n;
	while (hlp2 >> i>0) i++;
	printf("%u=", hlp2);
	for (j = i - 1; j >= 0; j--) printf("%u", hlp2 >> j & 1);

	hlp2 = n | hlp;
	while (hlp2 >> i>0) i++;
	printf("\n%u=", hlp2);
	for (j = i - 1; j >= 0; j--) printf("%u", hlp2 >> j & 1);

	hlp2 = n & ~hlp;
	while (hlp2 >> i>0) i++;
	printf("\n%u=", hlp2);
	for (j = i - 1; j >= 0; j--) printf("%u", hlp2 >> j & 1);

	hlp2 = n ^ hlp;
	while (hlp2 >> i>0) i++;
	printf("\n%u=", hlp2);
	for (j = i - 1; j >= 0; j--) printf("%u", hlp2 >> j & 1);

	hlp2 = n >>m ;
	while (hlp2 >> i>0) i++;
	printf("\n%u=", hlp2);
	for (j = i - 1; j >= 0; j--) printf("%u", hlp2 >> j & 1);

	hlp2 = n << m;
	while (hlp2 >> i>0) i++;
	printf("\n%u=", hlp2);
	for (j = i - 1; j >= 0; j--) printf("%u", hlp2 >> j & 1);
	return 0;
}
