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
	int len = 0, i;
	float f;
	char *s, *sep = ", ";

	while (format != NULL)
	{
		va_start(ap, format);
		if (format[len] != '\0')
		{
			switch (format[len++])
			{
				case 'i':
					i = va_arg(ap, int);
					printf("%d%s", i, sep);
					break;
				case 'f':
					f = (float) va_arg(ap, int);
					printf("f = %f", f);
					break;
				case 'c':
					c = (char) va_arg(ap, int);
					printf("%c%s", c, sep);
					break;
				case 's':
					s = va_arg(ap, char *);
					while (s == NULL)
					{
						s = "(nil)";
					}
					printf("%s", s);
					break;
			}
		}
		va_end(ap);
	}
	printf("\n");
}
