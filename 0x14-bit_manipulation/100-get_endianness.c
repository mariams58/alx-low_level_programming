#include "main.h"
/**
  * get_endianness - checks the endianness of the current system
  *
  * Return: 1 or 0
  */
int get_endianness(void)
{
	int a = 0, b = 1;

	if (*(char *)&b == 1)
		a = 1;
	return (a);
}
