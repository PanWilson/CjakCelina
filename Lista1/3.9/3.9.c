#include "stdafx.h"
#include "time.h"


int main()
{
	time_t start,end;
	start = clock();
	printf("Podaj imie");
	getchar();
	end = clock()- start;
	printf("%lf",10.11);
    return 0;
}

