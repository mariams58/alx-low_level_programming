#include "main.h"
#include <stdlib.h>
/**
  * argstostr - concat all args given
  * @ac: given arg
  * @av: pointer
  *
  * Return: pointer to a new string
  */
char *argstostr(int ac, char **av)
{
	char *str;
	int i = 0, x, j, k = 0, len = 0;

	while (1)
	{
		if (ac == 0 || av == NULL)
			return (NULL);
		while (i < ac)
		{
			for (j = 0; *av[j] != '\0'; j++)
				;
			len += j;
			i++;
		}
		str = malloc(sizeof(char) * len + 1);
		if (str == NULL)
			return (NULL);
		while (k <= ac)
		{
			for (x = 0; *av[x] != '\0'; x++)
			{
				str[x] = *av[x];
				if (*av[x] == 32)
					str[x] = 10;
			}
			k++;
		}
		str[len + 1] = '\0';
		return (str);
	}
	return (0);
}
