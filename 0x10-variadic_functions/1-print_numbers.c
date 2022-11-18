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

	if (n > 0)
	{
		va_start(ptr, n);
		for (i = 0; i < n - 1; i++)
		{
			s = va_arg(ptr, int);
			printf("%d", s);
			if (seperator != NULL && n > 0)
				printf("%s", seperator);
		}
		s = va_arg(ptr, int);
		printf("%d", s);
		va_end(ptr);
	}
	printf("\n");
}
