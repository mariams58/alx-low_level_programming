#include "lists.h"
/**
  * pop_listint - deletes a list fro te top
  * @head: pointer to pointer
  *
  * Return: head's node data
  */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int x = 0;

	if (*head == NULL)
		return (0);
	node = (*head-)>next;
	x = node->n;
	free(head);
	*head = node;
	return (x);
}
