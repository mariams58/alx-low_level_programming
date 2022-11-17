#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  * print_numbers - prints out the numbers arg given with given seperator
  * @seperator: pointer to the seperator
  * @n:number of args number
  */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	int s;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n - 1; i++)
	{
		s = va_arg(ptr, int);
		if (*seperator != '\0')
			printf("%d%c ", s, *seperator);
		else
			printf("%d ", s);
	}
	s = va_arg(ptr, int);
	printf("%d\n", s);
	va_end(ptr);
}
