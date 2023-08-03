#include "main.h"
/**
  * _pow_recursion - returns the value of x to the power of y
  * @x: a number
  * @y: a number
  *
  * Return: value of x exponent y
  */
int _pow_recursion(int x, int y)
{
	int val;

	if (y < 0)
		val = -1;
	else
		val = x * _pow_recursion(x, y - 1);
	return (val);
}
