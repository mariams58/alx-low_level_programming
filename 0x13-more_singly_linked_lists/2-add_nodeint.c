#include "lists.h"
/**
  * add_nodeint - adds a node to the start of a linked list
  * @head: pointer to the head of the linked list
  * @n: given number
  *
  * Return: pointer to the node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (*head);
	}
	new->next = *head;
	*head = new;
	return (*head);
}
