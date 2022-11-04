#include "main.h"
/**
  * roots - returns a natural square root
  * @c: iterator um
  * @n: num given
  *
  * Return: square root value
  */
int roots(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + roots(n, c + 1));
}

/**
  * _sqrt_recursion- returns square root of a num
  * @n: number given
  *
  * Return: square root of a num
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	return (roots(n, 2));
