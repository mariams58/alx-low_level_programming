#include "main.h"
#include <limits.h>
/**
 * _atoi - returnd integers in string
 * @s: pointer to str given
 *
 * Return: integer in string
 */

int _atoi(char *s)
{
	int j, i = 0, num = 0, sign = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign += 1;
	}
	j = 0;
	while (s[j] != '\0')
	{
		if (num > INT_MAX / 10 || (num == INT_MAX / 10 && s[j] - '0' > 7)) 
		{
			if (sign % 2 != 0)
				return INT_MAX;
			else
				return INT_MIN;
		}
		if (s[j] >= '0' && s[j] <= '9')
			num = num * 10 + s[j] - '0';
		if (s[j + 1] < 48 && s[j + 1] > 57)
			break;
		else
			j++;
	}
	
	if (sign % 2 != 0)
		num = num * (-1);
	return (num);
}
