#include "lists.h"
/**
  * listint_len - loops through the nodes in a list
  * @h: pointer to the head of the list
  *
  * Return: size of the linked list
  */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
