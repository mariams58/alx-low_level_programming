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

	while (head != NULL)
	{
		i += 1;
		if ((i - index) == 1)
			return (head);
		if (head->next != NULL)
			head = head->next;
	}
	return (NULL);
}
