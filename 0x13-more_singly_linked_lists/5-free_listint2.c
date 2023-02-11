#include "lists.h"
/**
  * free_listint2 -  frees the listint_t list and sets head to NULL
  * @head: pointer to the head of the linked list
  *
  */
void free_listint2(listint_t **head)
{
	listint_t *node = NULL;

	node = (*head)->next;
	while (node != NULL)
	{
		free(node);
		node = node->next;
	}
	*head = NULL;
}
