#include "main.h"
/**
  * cap_string - capitalizes
  * @str: pointer
  *
  *Return: character string
  */
char *cap_string(char *str)
{
	int i;
	int j;

	for (i = 0; str[i] != 0; i++)
	{
		;
	}
	for (j = 0; j < i; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		else
		{
			str[i] = str[i] + 0;
		}
	}
	return (str);
}
