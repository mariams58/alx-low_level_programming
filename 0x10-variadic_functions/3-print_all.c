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

	va_start(pt, format);
	while (format && format[i] != "\0")
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(pt, char));
				break;
			case 'i':
				printf("%d", va_arg(pt, int));
				break;
			case 'f':
				printf("%f", va_arg(pt, float));
				break;
			case 's':
				if (va_arg(pt, char*) == NULL)
					printf("(nil)");
				printf("%s", va_arg(pt, char *));
				break;
		}
		if (format[i++] != '\0')
			printf(", ");
		i++;
	}
	va_end(pt);
}
