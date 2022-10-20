#include "main.h"
/**
  * _islower - Entry to check the case of char.
  * @c :first parameter to check  case
  *
  * Return:always 1 success
  */
int _islower(int c)
{
	while ((c >= 97) && (c <= 122))
	{
		return (1);
		_putchar(10);
	}
	return (0);
	_putchar(10);
}
