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
	char *sym = ",.! ?	(){}\n;";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
			str[i] -= 32;
		for (j = 0; j < 11; j++)
		{
			if ((str[i] == sym[j]) && (str[i + 1] > 96 && str[i + 1] < 123))
			{
				*(str + i + 1) -= 32;
			}
		}
	}
	return (str);
}
