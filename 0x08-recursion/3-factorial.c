#include "main.h"
/**
  * factorial - prints out the factorial of a given num
  * @n: given num
  *
  * Return: factorial of a num
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
