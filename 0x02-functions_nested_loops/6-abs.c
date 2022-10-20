#include "main.h"
/**
  * _abs -Entry o the program
  * @n: parameter to check case
  *
  * Return: Always 0
  */
int _abs(int n)
{
	if (n < 0)
	{
		n  = (-1) * n;
	}
	else
	{
		n = n;
	}
	return (n);
}
