#include "lists.h"
/**
  * free_listint2 - frees a singly linked list
  * @head: pointer to the head of the list
  */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (*head == NULL)
	{
		;
	}
	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
