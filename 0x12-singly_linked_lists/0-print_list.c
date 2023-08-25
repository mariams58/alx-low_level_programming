#include"lists.h"
/**
  * print_list - prints out the linked lst
  * @h: pointer to head
  *
  * Return: size of the linke list
  */
size_t print_list(const list_t *h)
{
	size_t ret = 0;

	while (h != NULL)
	{ 
		h = h->next;
		ret++;
	}
	return (ret);

