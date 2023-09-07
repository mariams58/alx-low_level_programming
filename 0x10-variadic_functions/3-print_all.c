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
	char x;
	char *str;
	int num;
	unsigned int i = 0, len = strlen(format);

	if (format == NULL)
		printf("\n");
	va_start(pt, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				x = va_arg(pt, int);
				printf("%c", x);
				break;
			case 'i':
				num = va_arg(pt, int);
				printf("%d", num);
				break;
			case 'f':
				printf("%f", va_arg(pt, double));
				break;
			case 's':
				str = va_arg(pt, char *);
				while (str == NULL)
				{
					str = "(nil)";
					break;
				}
				printf("%s", str);
				break;
		}
		if (i < len - 1 && (format[i] == 's' || format[i] == 'f' || format[i] == 'i'
					|| format[i] == 'c'))
			printf(", ");
		i++;
	}
	va_end(pt);
	printf("\n");
}
