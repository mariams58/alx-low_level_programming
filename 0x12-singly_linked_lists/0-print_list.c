#include "lists.h"
/**
  * print_list - prints out the list of the pointer given
  * @h: pointer to the given list
  *
  * Description: this is a little
  * Return: value of type size_t
  */
size_t print_list(const list_t *h)
{
	unsigned int i;
	size_t num = 0;
	char *err = "(nil)";
	const list_t *new = h;

	while (new != NULL)
	{
		_putchar(91);
		_putchar(new->len);
		_putchar(93);
		_putchar(32);
		if (new->str != NULL)
		{
			*err = new->str;
			for (i = 0; err[i] != '\0'; i++)
				_putchar(err[i]);
		}
		else
		{
			while (*err)
			{
				_putchar(*err);
				err++;				}
		}
		num += 1;
		new = new->next;
	}
	return (num);
}
