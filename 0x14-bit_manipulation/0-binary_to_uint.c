#include "main.h"
/**
  * binary_to_uint - converts a number from binary to decimal
  * @b:  pointer to the binary
  *
  * Return: base 10 nuner converted
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i, d;

	if (b != NULL)
	{
		for (i = 0; b[i] != '\0'; i++)
		{
			if (b[i] == '0')
				d = 0;
			else if (b[i] == '1')
				d = 1;
			num = (num * 2) + d;
		}
	}
	return (num);
}
