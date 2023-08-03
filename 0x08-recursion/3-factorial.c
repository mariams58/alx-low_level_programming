#include "main.h"
/**
  * factorial - return the factorial of the num given
  * @n: number given
  *
  * Return: the factoria value
  */
int factorial(int n)
{
	int val;

	if (n < 0)
		val = -1;
	else if (n == 0)
		val = 1;
	else
	{
		val = n * factorial(n - 1);
	}
	return (val);
}
