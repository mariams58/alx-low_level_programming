#include "main.h"
/**
  * create_array - creates an array oa a given size
  * @size: size of the array
  * @c: given character
  *
  * Return: an array or Null
  */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	while (1)
	{
		s = malloc(sizeof(char) * size);
		if (s != NULL)
		{
			while (i < size)
			{
				s[i] = c;
				i++;
			}
			s[i] = '\0';
			return (s);
		}
		return (NULL);
	}
	return (0);
}
