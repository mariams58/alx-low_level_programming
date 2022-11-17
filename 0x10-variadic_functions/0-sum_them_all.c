#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  * sum_them_all - adds a numbers given altogether
  * @n: number of values to be given
  *
  * Return: an int, su of all given numbers
  */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list np;

	va_start(np, n);
	for (i = 0; i < n; i++)
		sum += va_arg(np, int);
	va_end(np);

	return (sum);
}
