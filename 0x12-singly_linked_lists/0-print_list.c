#include"lists.h"
/**
  * print_list - prints out the linked lst
  * @h: pointer to head
  *
  * Return: size of the linke list
  */
size_t print_list(const list_t *h)
{
	int ret = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		ret++;
	}
	return (ret);
}
