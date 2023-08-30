#include "lists.h"
/**
  * get_nodeint_at_index - get a node at a given index
  * @head: pointer to the head of the linked list
  * @index: index given
  *
  * Return: pointer to the node at index
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		idx += 1;
		if (idx - 1 == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
