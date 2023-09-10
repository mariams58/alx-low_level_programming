#include "main.h"
/**
  * get_endianness - checks the endianess of a system
  *
  * Return: 1 or 0
  */
int get_endianness(void)
{
	int i = 0, m = 1;

	if (*(char *)&m == 1)
		i = 1;
	return (i);
}
