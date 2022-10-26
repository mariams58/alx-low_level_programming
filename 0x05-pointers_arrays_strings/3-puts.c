#include "main.h"
/**
  * _puts - this prints the reverse of a given string
  * @str:the given string
  *
  * Return: nothing
  */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
