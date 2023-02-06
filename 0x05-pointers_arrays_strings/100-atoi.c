#include "main.h"
/**
 * _atoi - returnd integers in string
 * @s: pointer to str given
 *
 * Return: integer in string
 */

int _atoi(char *s)
{
	int i = 0, j, num = 0, neg = 0;

	while (s[i] != '\0')
	{
		if ((s[i] == '-') && (s[i + 1] < 47 && s[i + 1] > 58))
			neg += 1;
		while (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + s[i] - '0';
		}
		i++;
	}
	if (neg % 2 != 0)
		num = num * (-1);
	return (num);
}
