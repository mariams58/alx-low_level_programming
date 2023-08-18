#include "variadic_functions.h"
/**
  * print_numbers - prints args
  * @seperator: 
  * @n: given arg
  *
  * Return: Sum value or 0
  */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list pt;
	unsigned int i, sum;

	if (n == 0)
		return (0);
	va_start(pt, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pt, int));
		if (seperator != NULL)
			_putchar(seperator);
	}
	va_end(pt);
	printf("\n");
}
