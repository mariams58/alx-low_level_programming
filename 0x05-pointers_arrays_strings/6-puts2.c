#include "main.h"
/**
  * puts2- prits every althernate cahracter
  * @str: given str
  *
  * Return: alway 0
  */
void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != 0; i++)
	{
		;
	}
	while (i - 1 >= 0)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar(10);
}
