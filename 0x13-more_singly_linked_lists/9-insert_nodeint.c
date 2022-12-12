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
	listint_t *node, *temp;
	unsigned int count = 0;

	while (*head != NULL)
	{
		temp = *head;
		if (idx == count)
		{
			node = malloc(sizeof(listint_t));
			node->n = n;
			node->next = temp;
			*head = node;
			return (node);
			free(node->next);
			free(node);
		}
		count += 1;
		*head = (*head)->next;
	}
	return (NULL);
}
