#include <unistdio.h>
/**
  * _strlen - returns the length of a string
  *@str: pointer address of a string
  *
  * Return: length of s
  */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		;
	}
	return (len);
}
