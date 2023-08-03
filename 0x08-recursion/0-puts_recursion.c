#include "main.h"
/**
  * _puts_recursion - prints a string folowed by a newline
  * @s: pointer to string
  *
  * Return: nothing
  */
void _puts_recursion(char *s)
{

	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar(10);
}
