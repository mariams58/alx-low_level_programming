#include "main.h"
/**
  * puts - this prints the reverse of a given string
  * @str:the given string
  *
  * Return: nothing
  */
void _puts(char *str)
{
	int i;

	for (i = 0; stri[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
