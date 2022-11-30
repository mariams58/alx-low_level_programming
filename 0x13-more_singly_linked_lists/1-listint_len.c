#include "lists.h"
/**
  * listint_len - returns the number of elements in a list
  * @h - pointer to the head of the linked list
  *
  * Return: number of node elements in the linked list
  */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num += 1;
		h = h->next;
	}
	return (num);
}
