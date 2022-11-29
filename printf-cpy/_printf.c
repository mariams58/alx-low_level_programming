#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
/**
  * _printf - a copy of printf function
  * @format: contains format specifiers
  *
  * Return: the number of charcter
  */
int _printf(const char *format, ...)
{
	int count = 0, i;
	char *s;

	va_list ptr;

	va_start (ptr, format);
	while (*format != '\0')
	{
		if (*format == '%c')
	}
}
