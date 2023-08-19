#include "variadic_functions.h"
/**
  * print_strings - prints args
  * @seperator: the seperator
  * @n: given arg
  *
  * Return: Sum value or 0
  */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list pt;
	unsigned int i;
	char *s;

	if (n == 0)
	{
		;
	}
	va_start(pt, n);
	for (i = 0; i < n; i++)
	{
		s =  va_arg(pt, char *);
		if (s == NULL)
			printf("%s", s);
		else
			printf("(nil)");
		if (seperator != NULL)
			printf("%s", seperator);
	}
	va_end(pt);
	printf("\n");
}
