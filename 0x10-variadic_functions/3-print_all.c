#include "variadic_functions.h"
/**
  * print_all - prints all args provided
  * @format: pointer to the format given
  *
  * Return: Nothing
  */
void print_all(const char * const format, ...)
{
	va_list pt;
	unsigned int i = 0;
	char y;
	int x;

	va_start(pt, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				y = va_arg(pt, char);
				printf("%c", y);
				break;
			case 'i':
				x = va_arg(pt, int);
				printf("%d", y);
				break;
			case 'f':
				printf("%f", va_arg(pt, double));
				break;
			case 's':
				while (va_arg(pt, char*) != NULL)
				{
					printf("%s", va_arg(pt, char*));
					break;
				}
				printf("(nil)");
				break;
		}
		if (format[i++] != '\0' && (format[i] == 'c' || format[i] == 's'
					|| format[i] == 'i' || format[i] == 'f'))
			printf(", ");
		i++;
	}
	va_end(pt);
}
