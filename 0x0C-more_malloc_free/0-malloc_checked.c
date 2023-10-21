#include "main.h"
/**
  * malloc_checked - allocated memory of a size given
  * @b: size given
  *
  * Return: poiner
  */
void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (str == NULL)
		exit(98);
	return (str);
}
