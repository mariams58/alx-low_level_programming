#include "lists.h"
/**
  * get_nodeint_at_index - gets the node element data
  * @head: pointer to top of linked list
  * @index: nlist index
  *
  * Return: element data
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && head->next != NULL)
	{
		i += 1;
		if (i - 1 == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
