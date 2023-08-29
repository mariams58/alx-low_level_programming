#include "lists.h"
/**
  * pop_listint - deletes head node
  * @head: pointer to the head node given
  *
  * Return: data of the node or 0
  */
int pop_listint(listint_t **head)
{
	int x = 0;
	listint_t *tmp = (*head)->next;

	if (*head == NULL)
		return (0);
	x = (*head)->n;
	free(*head);
	*head = tmp;
	return (x);
}
