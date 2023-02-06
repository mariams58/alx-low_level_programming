#include "main.h"
/**
 * _atoi - returnd integers in string
 * @s: pointer to str given
 *
 * Return: integer in string
 */

int _atoi(char *s)
{
	int i, j, num = 0, neg = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-' && (s[i + 1] >= 48 && s[i - 1] > 57))
			neg += 1;
	}
	j = 0;
	while (s[j] >= '0' && s[j] <= '9')
	{
		num = num * 10 + s[j] - '0';
		j++;
	}
	if (neg % 2 != 0)
		num = num * -1;
	return (num);
}
