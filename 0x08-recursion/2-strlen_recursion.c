#include "main.h"
/**
  * _strlen_recursion - returns the len of a given str
  * @s: ptr to string given
  *
  * Return: len of given str
 */
int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s)
	{
		x += 1;
		_strlen_recursion(s + 1);
	}
	return (x);
}
