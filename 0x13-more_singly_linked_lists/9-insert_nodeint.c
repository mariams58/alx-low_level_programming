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
		if (count == idx - 1)
		{
			node = malloc(sizeof(listint_t));
			node->n = n;
			node->next = temp->next;
			temp->next = node;
			return(temp->next);
			free(node->next);
			free(node);
		}
		temp = temp->next;
	}
	return (NULL);

}
