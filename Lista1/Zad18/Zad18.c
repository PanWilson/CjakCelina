#include <stdio.h>


int main()
{
	double a = 0, b = 0, c = 0, a2 = 0, b2 = 0, c2 = 0, w = 0, w1 = 0, w2 = 0;
	printf("Podaj a:");
	scanf("%lf", &a);
	printf("Podaj b:");
	scanf("%lf", &b);
	printf("Podaj c:");
	scanf("%lf", &c);
	printf("Podaj d:");
	scanf("%lf", &a2);
	printf("Podaj e:");
	scanf("%lf", &b2);
	printf("Podaj f:");
	scanf("%lf", &c2);
	w = a*b2 - a2*b;
	if (w != 0) {
		w1 = c*b2 - c2*b;
		w2 = a*c2 - a2*c;
		printf("x = %lf\ny = %lf\n", w1 / w, w2 / w);
	}
	else if ((w1 = c*b2 - c2*b) != 0) {
		printf("Brak rozwiazan.\n");
	}
	else
	{
		printf("Nieskonczenie wiele rozwiazan.\n");
	}
	return 0;
}

