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

	for (i = 0; str[i] != 0; i++)
	{
		if ((str[i] >= 97 && str[i] <= 122) && (str[i] >= 65 && str[i] <= 90))
		{
			str[i] = str[i] + 13;
		}
	}
	return (str);
}
