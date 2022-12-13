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

	temp = *head;
	if (*head == NULL)
		return (NULL);
	while (temp != NULL)
	{
		count += 1;
		node = malloc(sizeof(listint_t));
		node->n = n;
		if (idx - 1 == count)
		{
			node->next = temp->next;
			temp->next = node;
		}
		if (idx == 0)
		{
			node->next = temp;
			temp = node;
		}
		if (node == NULL)
			return (NULL);
		return (node);
		free(node->next);
		free(node);
	}
	return (NULL);

}
