#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double a = 0, b = 0, c = 0, delta;
	printf("Podaj a:");
	scanf("%lf", &a);
	printf("Podaj b:");
	scanf("%lf", &b);
	printf("Podaj c:");
	scanf("%lf", &c);
	//printf("a=%lf\nb=%lf\nc=%lf\n",a,b,c);
	if (a != 0) {
		delta = (b*b)+(-4*a*c);
		//printf("delta = %lf\n", (b*b) + (-4 *a*c));
	}
	if (a == 0) {
		printf("x=%lf", -c/b);
	}
	else if (delta < 0) {
		double hlp1 = (b*-1) / (2 * a), hlp2 = (sqrt(abs(delta))*-1) / (2 * a);
		printf("x1=%lf%c%lfi\nx2=%lf%c%lfi\n", hlp1, ((hlp2>0)  ? '+' :'\0'),hlp2, hlp1, ((hlp2*-1>0) ? '+' :'\0'),hlp2*-1);
	}
	else if (delta == 0) {
		printf("x=%lf\n", (b*-1) / (2*a) );
	}
	else {
		printf("x1=%lf\nx2=%lf\n", ((b*-1)-sqrt(delta)) / (2 * a), ((b*-1) + sqrt(delta)) / (2 * a));
	}
    return 0;
}

