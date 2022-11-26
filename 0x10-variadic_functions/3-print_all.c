#include "variadic_functions.h"
#include <string.h>
/**
  * print_all - prints all charcs of strings given
  * @format: pointer to the given list of types of arguments to be passed
  */
void print_all(const char * const format, ...)
{
	va_list ap;

	va_start(ap, format);
	if (format != NULL)
	{
		handle_case(format, ap);
	}
	va_end(ap);
	printf("\n");
}

/**
  * handle_case - prints a case output
  * @format[len]: pointer to array
  *
  * Retuen: print format
  */
int handle_case(const char * const format, va_list ap)
{

	va_list aq;
	int fmt;
	char *s;
	size_t i = 0;
	size_t len = strlen(format);

	va_copy(aq, ap);
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
		if (i < len - 1 && fmt != 1)
			printf(", ");
		i++;
	}
	return (fmt);
}
