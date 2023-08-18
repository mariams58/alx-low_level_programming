#include "variadic_functions.h"
/**
  * sum_them_all - returns the sum of args
  * @n: given arg
  *
  * Return: Sum value or 0
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list pt;
	unsigned int i, sum;

	if (n == 0)
		return (0);
	va_start(pt, n);
	for (i = n; i >= 0; i = va_arg(pt, int))
		sum += i;
	va_end(pt);
	return (sum);
}
