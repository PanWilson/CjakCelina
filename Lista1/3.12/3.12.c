// 3.12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char **t;
	int i,j,x,y,d;
	sscanf_s(argv[1], "%d", &d);
	int dhlp = d;
	t = calloc(d,sizeof(char *));

	for (i = 0; i < d; i++)
	{
		t[i] = calloc(d,sizeof(char));
	}

	x = -1;
	y = 0;
	for (i = 0; i < dhlp; i++)
	{
		j = 0;
		while(j < d)
		{
			if ((i % 2) == 0) x += ((i % 4) == 0) ? 1 : -1;
			else y += (((i+1) % 4) == 0) ? -1 : 1;
			t[y][x] = '#';
			j++;
		}
		if(i==0)d--;
		else if(i % 2 == 0)d-=2;
	}

	i = 0;

	while (i < dhlp)
	{
		j = 0;
		while (j < dhlp)
		{
			printf("%c", t[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
    return 0;
}

