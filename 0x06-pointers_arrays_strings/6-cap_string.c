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
		while (str[j] <= 47 || str[j] == 63  || str[j] >= 123)
		{
			if (str[j + 1] >= 65 && str[j + 1] <= 91)
			{
				str[j + 1] = str[j + 1] + 32;
			}
			j++;
		}
	}
	return (str);
}
