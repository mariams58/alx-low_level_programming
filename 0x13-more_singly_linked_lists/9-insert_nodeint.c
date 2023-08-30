#include "lists.h"
/**
  * insert_nodeint_at_index - get a node at a given index
  * @head: pointer to the head of the linked list
  * @idx: index given
  * @n: data to the new node
  *
  * Return: pointer to the node at index
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index = 0;
	listint_t *tmp = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	while (tmp != NULL)
	{
		index += 1;
		if (idx - 1  == index - 1)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (tmp->next);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
