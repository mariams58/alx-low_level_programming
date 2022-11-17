#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  * print_strings - prints out a ginen number of strings
  * @seperator: a pointer to the given seperator
  * @n: max number of string args to be taken by function
  */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	char s;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n - 1; i++)
	{
		s = va_arg(ptr, char);
		if (s == '\0')
		{
			s = "(nil)";
		}
		printf("%c", s);
		if (*seperator != '\0')
		{
			printf("%c ", *seperator);
		}
	}
	s = va_arg(ptr, char);
	printf("%c\n", s);
	vva_end(ptr);
}
