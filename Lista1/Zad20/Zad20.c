#include "stdio.h"
#include "math.h"


int main()
{
	int a = 0, i=2;
	printf("Podaj liczbe:");
	scanf("%d", &a);
	if(a>1){
		if (sqrt(a) < 2)printf("%d jest liczba pierwsza\n", a);
		else {
			while (i <= sqrt(a)) {
				if (a % i == 0) {
					printf("%d nie jest liczba pierwsza\n", a);
					break;
				}
				i++;
			}
			if(i>sqrt(a)) printf("%d jest liczba pierwsza\n", a);
		}
	}
	else {
		printf("%d nie jest liczba pierwsza\n", a);
	}

    return 0;
}

