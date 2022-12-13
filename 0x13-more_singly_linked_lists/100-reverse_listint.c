#include "lists.h"
/**
  * reverse_listint - reverse a linked list
  * @heat: pointer to head of the linked list
  *
  * Return: pointer to the reverselist
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
