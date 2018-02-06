// lab02.table.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
int main()
{
	double a = 2, b = 4, c = 0, d = 1.2, h1 = 0.1, h2 = 0.12;
	printf("%c\\%c", 'Y', 'X');
	for (double x = a; x <= b; x += h1)
		printf("\t%8.2f", x);
	printf("\n");
	for (double y = c; y <= d; y += h2)
	{
		printf("%.2f", y);
		for (double x = a; x <= b; x += h1)
		{
			double z = (x + y)*sqrt(x - y);
			printf("\t%8.2f", z);
		}
		printf("\n");
	}
	printf("\n");
	getchar();
	return 0;
}

 