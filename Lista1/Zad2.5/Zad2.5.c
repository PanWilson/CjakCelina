#include "stdio.h"
#include <stdlib.h>


int main()
{
	int n,i,hlp;
	printf("Podaj liczbe krokow:");
	scanf("%d", &n);
	int **a = malloc(n * sizeof(int *));
	for (i = 0; i < n; ++i) {
		a[i] = malloc(2 * sizeof(int));
	}
	printf("Podaj kroki:");
	for (i = 0; i < n; i++) {
		scanf("%d", &hlp);
		if (!i) {
			a[0][0] = 0;
			a[0][1] = 0;
		}
		else{
			switch (hlp)
			{
			case 1:
				a[i][0] = a[i - 1][0];
				a[i][1] = a[i - 1][1] + 1;
				break;
			case 2:
				a[i][0] = a[i - 1][0];
				a[i][1] = a[i - 1][1] - 1;
				break;
			case 3:
				a[i][0] = a[i - 1][0]-1;
				a[i][1] = a[i - 1][1];
				break;
			case 4:
				a[i][0] = a[i - 1][0] + 1;
				a[i][1] = a[i - 1][1];
				break;
			default:
				printf("Kroki z przedzialu 1-4\n");
				break;
			}
		}
	}
	hlp = 0;
	for (i = 0; i < n-2; ++i) {
		for (hlp = i+1; hlp < n;hlp++) {
			if (a[i][0] == a[hlp][0] && a[i][1] == a[hlp][1])printf("Nieporawne okreslenie weza\n");
		}
	}
    return 0;
}

