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
	listint_t *temp, *node, *new;
	unsigned int count = 0, post;

	while (*head != NULL)
	{
		temp = (*head)->next;
		count += 1;
		post = count - idx;
		if (post == 2)
		{
			node = temp;
			new = malloc(sizeof(listint_t));
			new->n = n;
			new->next = node;
			temp = new;
			return (new);

		}
		else
			return (NULL);
		*head = temp;
		free(temp);
	}
	return (NULL);
	free(new->next);
	free(new);
}