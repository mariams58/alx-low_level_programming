#include "lists.h"
/**
  * print_listint - prints out the node elements in a linke list
  * @h: pointer access to the head of the list
  *
  * Return: number of nodes in the linked list
  */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t num = 0;

	while (ptr != NULL)
	{
		if (ptr->n)
			printf("%d\n", ptr->n);
		num += 1;
		ptr = ptr->next;
	}
	return (num);
}
