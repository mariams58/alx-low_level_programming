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
	int i = 0, j, k = 0, len = 0;

	while (1)
	{
		while (i < ac)
		{
			for (j = 0; j != '\0'; j++)
				;
			len += j;
			i++;
		}
		str = malloc(sizeof(char) * len + 1);
		if (ac == 0 || av == NULL)
			return (NULL);
		while (k <= len)
		{
			str[k] = *av[k];
			if (*av[k] == 32)
				str[k] = 10;
		}
		str[len + 1] = '\0';
		return (str);
	}
	return (0);
}
