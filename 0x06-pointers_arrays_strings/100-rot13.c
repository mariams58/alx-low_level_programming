#include"main.h"
/**
  *rot13 - prints encoded
  *@str: givern letters
  *
  *Return: encoded strings
  */
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 97 && str[i] < 110) && (str[i] >= 65 && str[i] < 78))
		{
			str[i] = str[i] + 13;
		}
		else
			str[i] = str[i] - 13;
	}
	return (str);
}
