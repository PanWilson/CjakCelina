#include "stdio.h"
#include <stdlib.h>


int main()
{
	int i = 0, j = 0,buf=0,hlp;
	char licz1[201], licz2[201],wynik[202];
	printf("Podaj pierwsza liczbe:");
	fgets(licz1, 200, stdin);
	printf("Podaj druga liczbe:");
	fgets(licz2, 200, stdin);
	while (licz1[i] != '\n') {
		i++;
	}
	while (licz2[j] != '\n') {
		j++;
	}
	hlp = (j-- >= i-- ? j+1 : i+1);
	wynik[hlp+1] = '\n';
	while (i >= -1 || j >= -1) {
		wynik[hlp] = (((((i >= 0) ? (licz1[i] - '0') :0)+ ((j>=0)?(licz2[j] - '0') :0))+buf) % 10)+'0';
		buf = (((((i >= 0) ? (licz1[i] - '0') : 0) + ((j >= 0) ? (licz2[j] - '0') : 0)) + buf) / 10);
		hlp--;
		i--;
		j--;
	}
	while (wynik[++hlp] != '\n') {
		printf("%c", wynik[hlp]);
	}
	printf("\n");
	return 0;
}