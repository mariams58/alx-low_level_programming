#include "main.h"
/**
  * sqrt_chk - checks for the suare root of a num
  * @x: starting number
  * @y: given number
  *
  * Return: square root or -1
  */
int sqrt_chk(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (sqrt_chk(x + 1, y);
}

/**
  * _sqrt_recursion - return the square root of a given number
  * @n: number given
  *
  * Return: square root value or -1
  */
int _sqrt_recursion(int n)
{
	if (n = 0)
		return (-1);
	return (sqrt_chk(1, n));
}
