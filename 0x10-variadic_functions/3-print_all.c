#include "variadic_functions.h"
/**
  * print_all - prints all charcs of strings given
  * @format: pointer to the given list of types of arguments to be passed
  */
void print_all(const char * const format, ...)
{
	va_list aq;
	int i = 0, j = 0, fmt;
	char *s;

	while (format[j] != '\0')
		j++;
	if (j > 0)
	{
		va_start(aq, format);
		while (format[i] != '\0')
		{
			fmt = 0;
			switch (format[i])
			{
				case 'i':
					printf("%d", va_arg(aq, int));
					break;
				case 'f':
					printf("%f", va_arg(aq, double));
					break;
				case 'c':
					printf("%c", va_arg(aq, int));
					break;
				case 's':
					s = va_arg(aq, char*);
					if (s == NULL)
						s = "(nil)";
					printf("%s", s);
					break;
				default:
					fmt = 1;
					break;
			}
			if (i < j - 1 && fmt != 1)
				printf(", ");
			i++;
		}
		va_end(aq);
		printf("\n");
	}
}
