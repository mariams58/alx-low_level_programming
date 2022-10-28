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

	for (i = 0; str[i] != 0; i++)
	{
		while (str[i] <= 47 || str[i] == 63  || str[i] >= 123)
		{
			if (str[i + 1] >= 65 && str[i + 1] <= 91)
			{
				str[i + 1] = str[i + 1] + 32;
			}
			i++;
		}
	}
	return (str);
}
