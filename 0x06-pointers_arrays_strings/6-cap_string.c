#include "main.h"
/**
  * cap_string - capitalizes
  * @str: pointer
  *
  *Return: character string
  */
char *cap_string(char *str)
{
	int i, j;
	char *sym = ",.! ?(){};";

	for (i = 0; str[i] != 0; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			*(str + i) -= 32;
		}
		for (j = 0; j < 11; j++)
		{
			if (str[i] == sym[j])
			{
				*(str + i + 1) -= 32;
			}
		}
	}
	return (str);
}
