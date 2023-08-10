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

	if (size == 0)
		return (NULL);
	while (1)
	{
		s = (char)malloc((sizeof(char) * size) + 1);
		if (s == NULL)
			return (NULL);
		s[0] = c;
		s[1] = "\0";
		return (s);
	}
	return (0)
}
