// 3.10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main(int argc, char *argv[])
{
	int i = 1;
	while (i < argc) {
		printf("%s\n",argv[i]);
		i++;
	}
    return 0;
}

