#include "lists.h"
/**
  * free_listint2 -  frees the listint_t list and sets head to NULL
  * @head: pointer to the head of the linked list
  *
  */
void free_listint2(listint_t **head)
{
	listint_t *node = (*head)->next;

	while (node != NULL)
	{
		free_listint2(node->next);
		free(node->next);
		node = node->next;
	}
	*head = NULL;
}
