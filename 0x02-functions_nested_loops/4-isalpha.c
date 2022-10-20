#include "main.h"
/**
  * _isalpha - Entry to check case of char
  * @c: first parameter to check case
  *
  * Return: always 0 sccess, else 1
  */
int _isalpha(int c)
{
	while ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
		_putchar(10);
	}
	return (0);
	_putchar(10);
}
