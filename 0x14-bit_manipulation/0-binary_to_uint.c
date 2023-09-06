#include "main.h"
/**
  * _power - perfroms number exponentiation
  * @a: number
  * @b: exponent
  *
  * Return: int value
  */
unsigned int _power(unsigned int a, unsigned int b)
{
	unsigned int x = 0, i = 1;

	if (b == 0)
		i = 1;
	while (x < b)
	{
		i = i * a;
		x++;
	}
	return (i);
}

/**
  * binary_to_uint - converts binary to int
  * @b: pointer to char given
  *
  * Return: int value of char
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, bs = 2;
	unsigned int i, y = 0;

	if (b != NULL)
	{
		for (i = 0; b[i] != '\0'; i++)
		{
			if (b[i] != 48 && b[i] != 49)
				return (num);
		}
		while (b[y] != '\0')
		{
			i = i - 1;
			if (b[y] == '1')
			{
				num += _power(bs, i);
			}
			y++;
		}
	}
	return (num);
}
