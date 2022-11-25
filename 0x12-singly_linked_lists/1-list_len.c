#include "lists.h"
/**
  * list_len - returns number of element or null if it failed
  * @h: pointer to a pointer
  *
  * Return: number of elements
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}
