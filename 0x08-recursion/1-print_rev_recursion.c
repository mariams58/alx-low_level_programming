#include "main.h"
/**
  * _print_rev_recursion - prints strings in reverse
  * @s: given string
  *
  */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_print_rev_recursion(s - 1);
	}
	else
		_putchar(10);
}
