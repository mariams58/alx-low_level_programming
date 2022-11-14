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
	char *str, *wrd;
	int i, x, k, j, len = 0;

	while (1)
	{
		if (ac == 0 || av == NULL)
			return (NULL);
		i = 0;
		while (i < ac)
		{
			wrd = av[i];

			for (k = 0; wrd[k] != '\0'; k++)
				;
			len += k;
			i++;
		}
		str = malloc(sizeof(char) * (len + 1));
		if (str == NULL)
			return (NULL);
		j = 0;
		while (j < ac && j < len)
		{
			wrd = av[j];
			for (x = 0; wrd[x] != '\0'; x++)
			{
				str[x] = wrd[x];
			}
			str[x++] = 10;
			j++;
		}
		str[x + 1] = '\0';
		return (str);
	}
	return (0);
}
