#include "variadic_functions.h"
/**
  * print_numbers - prints args
  * @seperator: 
  * @n: given arg
  *
  * Return: Sum value or 0
  */
int print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list pt;
	unsigned int i, sum;

	if (n == 0)
		return (0);
	va_start(pt, n);
	for (i = n; i >= 0; i = va_arg(pt, int))
	{
		printf("%d", i);
		if (seperator != NULL)
			printf("%c", seperator);
	}
	printf("\n");
	va_end(pt);
}
