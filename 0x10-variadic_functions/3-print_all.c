#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  * print_all - prints all charcs of strings given
  * @format: pointer to the given list of types of arguments to be passed
  */
void print_all(const char * const format, ...)
{
	va_list ap;
	char c;
	int len = 0, i, j = 0;
	float f;
	char *s, *sep = ", ";

	while (format[j] != '\0')
	{
		j += 1;
	}
	va_start(ap, format);
	while (format[len])
	{
		switch (format[len])
		{
			case 'i':
				i = va_arg(ap, int);
				printf("%d", i);
				break;
			case 'f':
				f = (float) va_arg(ap, double);
				printf("%f", f);
				break;
			case 'c':
				c = (char) va_arg(ap, int);
				printf("%c", c);
				break;
			case 's':
				s = va_arg(ap, char*);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
		}
		if (len < j - 1)
			printf("%s", sep);
		++len;
	}
	va_end(ap);
	printf("\n");
}
