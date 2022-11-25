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
	unsigned int i, j;
	size_t num = 0;
	char *err = "(nil)";
	j = h->len;

	while (h != NULL)
	{
		_putchar(91);
		_putchar(j);
		_putchar(93);
		_putchar(32);
		for (i = 0; i < j; i++)
		{
			if (h->str != NULL)
				_putchar(h->str[i]);
			else
				while (*err)
				{
					_putchar(*err);
					err++;
				}
		}
		num += 1;
		h = h->next;
	}
	return (num);
}
