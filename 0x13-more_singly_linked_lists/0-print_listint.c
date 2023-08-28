#include "lists.h"
/**
  * print_listint - prints out the elements of a linked lis
  * @h: pointer to the head of the list
  *
  * Return: size of the linked list
  */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	listint_t *h1;

	if (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
	}
	h1 = malloc(sizeof(listint_t));
	if (h1 != NULL)
		h1 = h->next;

	while (h1 != NULL)
	{
		printf("%d\n", h1->n);
		i++;
		h1 = h1->next;
	}
	return (i);
}
