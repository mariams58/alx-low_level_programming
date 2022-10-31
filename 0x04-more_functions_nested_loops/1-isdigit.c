#include "main.h"
/**
  * _isdigit - checks if a digit between 0 - 9 is given
  * @c: given number/letter
  *
  * Return: returnd 1 or 0
  */
int _isdigit(int c)
{
	int x;

	if ((c >= 0 && c <= 9) || (c >= '0' && c <= '9'))
	{
		x = 1;
	}
	else
	{
		x = 0;
	}
	return (x);
}
