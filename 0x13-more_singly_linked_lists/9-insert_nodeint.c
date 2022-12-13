#include "lists.h"
/**
  * insert_nodeint_at_index - inserta node int at a given index
  * @head: entry point
  * @idx: given index
  * @n: value of the new node
  * Return: pointerr to the new node int
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	unsigned int count = 0;

	while (*head != NULL)
	{
		node = malloc(sizeof(listint_t));
		node->n = n;
		if (count == idx - 1)
		{
			node->next = (*head)->next;
			(*head)->next = node;
			return ((*head)->next);
			free(node->next);
		}
		count += 1;
		*head = (*head)->next;
		free(node);

	}
	return (NULL);
}
