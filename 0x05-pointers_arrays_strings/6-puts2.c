#inclue "main.h"
/**
  * puts2- prits every althernate cahracter
  * @str: given str
  *
  * Return: alway 0
  */
void puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != 0; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		_putchar(10)
	}
