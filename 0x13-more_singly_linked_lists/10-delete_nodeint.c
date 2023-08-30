#include "lists.h"
/**
  * delete_nodeint_at_index - get a node at a given index
  * @head: pointer to the head of the linked list
  * @index: index given
  *
  * Return: 1 on success, -1 on fail
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	listint_t *new = *head, *tmp;

	if (index == 0 && *head != NULL)
	{
		tmp  = (*head)->next;
		free(*head);
		*head = tmp;
		return (1);
	}
	while (new != NULL)
	{
		idx += 1;
		if (idx - 1 == index - 1)
		{
			tmp = (new->next)->next;
			free(new->next);
			new->next = tmp;
			return (1);
		}
		new = new->next;
	}
	return (-1);
}
