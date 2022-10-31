#include "main.h"

/**
  * _isupper - prints out upper alphabets with digit
  * @c: given letter
  *
  * Return: Always value
  */

int _isupper(int c)
{
	int value;

	if (c >= 65 && c <= 90)
	{
		value = 1;
	}
	else
	{
		value = 0;
	}
	return (value);
}
