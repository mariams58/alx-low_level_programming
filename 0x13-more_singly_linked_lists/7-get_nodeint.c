#include "lists.h"
/**
  * get_nodeint - gets the node element data
  * @head: pointer to top of linked list
  * index: nlist index
  *
  * Return: element data
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i = 0;

	while (node != NULL)
	{
		i += 1;
		if (index == (i - 1))
			return (node->n);
		node = node->next;
	}
	return (NULL);
