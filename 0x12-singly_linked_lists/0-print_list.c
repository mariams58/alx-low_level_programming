#include "lists.h"
/**
  * double_digit - prints a double digit using putchar
  * @x: given num
  */
void double_digit(unsigned int x)
{
	if (x / 10)
	{
		double_digit(x / 10);
	}
	_putchar((x % 10) + '0');
}

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
		double_digit(h->len);
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
