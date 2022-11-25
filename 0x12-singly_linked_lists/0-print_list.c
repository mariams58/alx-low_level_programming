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

	while (h != NULL)
	{
		_putchar(91);
		_putchar(h->len + '0');
		_putchar(93);
		_putchar(32);
		if (h->str != NULL)
		{
			for (i = 0; h->str[i] != '\0'; i++)
				_putchar(h->str[i]);
		}
		else
		{
			while (*err)
			{
				_putchar(*err);
				err++;				}
		}
		_putchar(10);
		num += 1;
		h = h->next;
	}
	return (num);
}
