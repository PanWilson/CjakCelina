#include "stdio.h"
#include <stdlib.h>


int main()
{
	int i;
	double a[2][2], w;
	printf("Podaj macierz\n");
	for (i = 0; i < 4; i++) {
		scanf("%lf", &a[i / 2][i % 2]);
	}
	w = a[0][0] * a[1][1] - a[0][1] * a[1][0];
	printf("Wyznacznik:%lf\n", w);
	if (w != 0) {
		double b[2][2] = {
			{ a[1][1] / w,(-1 * a[0][1]) / w },
			{ (-1 * a[1][0]) / w, a[0][0] / w }
		};
		for (i = 0; i < 4; i++) {
			if (i % 2 == 0 && i != 0)printf("\n");
			printf("%lf  ", b[i / 2][i % 2], i / 2, i % 2);
		}
	}
	return 0;
}