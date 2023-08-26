#include "lists.h"
/**
  * free_head - free the head given
  * @head: head given
  *
  * Return: Nothing
  */
void free_head(list_t *head)
{
	free_list(head);
}

/**
  * free_list - frees the linked list
  * @head: pointer to the head of the list given
  *
  * Return: Nothing
  */
void free_list(list_t *head)
{
	if (head->next != NULL)
		free_list(head->next);
	free(head->str);
	free(head);
}
