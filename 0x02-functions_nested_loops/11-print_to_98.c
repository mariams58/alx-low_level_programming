#include <stdio.h>
#include "main.h"
/**
  * print_to_98 - prints from a given natural  number to 98
  * n: given natural number
  *
  */
void print_to_98(int n)
{
	int num;

	while (n < 98)
	{
		printf("%d", n);
		if (n != 98)
			printf(", ");
		n++;
	}
	for (num = n; num != 97; num--)
	{
		printf("%d", num);
		if (num != 98)
			printf(", ");
	}
	printf("\n");
}
