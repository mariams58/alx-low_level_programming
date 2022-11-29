#include "main.h"
#include <stdlib.h>
/**
  * strtow - splits strings into word
  * str: give strings
  *
  * Return: a pointer of type char
  */
char **strtow(char *str)
{
	char **wrds;
	int i, j = 1;

	while(1)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			if (str[i] == 32)
				j++;
		}
		if (str == NULL|| str == "")
			return[NULL];

	}
	return (0);
}
