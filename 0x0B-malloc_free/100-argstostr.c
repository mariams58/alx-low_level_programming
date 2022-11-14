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
	int i, k, j, y, len = 0;

	while (1)
	{
		if (ac == 0 || av == NULL)
			return (NULL);
		i = 0;
		while (i < ac)
		{
			wrd = av[i];
			k = 0;
			while (wrd[k++])
				len++;
			len++;
			i++;
		}
		str = malloc(sizeof(char) * (len + 1));
		if (str == NULL)
			return (NULL);
		j = 0, y = 0;
		while (j < ac && j < len)
		{
			wrd = av[j];
			k = 0;
			while (wrd[k])
			{
				str[y] = wrd[k];
				k++;
				y++;
			}
			str[y++] = 10;
			j++;
		}
		str[y] = '\0';
		return (str);
	}
	return (0);
}
