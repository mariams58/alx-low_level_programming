#include "main.h"
#include <stdio.h>
/**
  * print_array - print array in a pointer
  * @a: given array
  * @n: values to be printed
  *
  * Return: nothing
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n -1; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
		printf("\n");
	}
}
