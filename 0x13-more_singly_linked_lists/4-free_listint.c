#include "lists.h"
/**
  * free_listint - frees the memory allocated to a linked list structure
  * @head: pointer to the head of the linked list
  *
  */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
	}
	free(head);
}
