#include "main.h"
/**
  * malloc_checked - allocated memory of a size given
  * @b: size given
  *
  * Return: poiner
  */
void *malloc_checked(unsigned int b)
{
	char *str;

	while (1)
	{
		str = malloc(b);
		if (str != NULL)
			return (str);
		return (NULL);
		exit(98);
	}
	return (0);
}
