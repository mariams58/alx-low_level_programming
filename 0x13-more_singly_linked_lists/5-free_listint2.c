#include "lists.h"
/**
  * free_listint2 -  frees the listint_t list and sets head to NULL
  * @head: pointer to the head of the linked list
  *
  */
void free_listint2(listint_t **head)
{
	if (*head != NULL)
		free_listint2((*head)->next);
	free(head);
	*head = NULL;
}
