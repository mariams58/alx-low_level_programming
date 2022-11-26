#include "lists.h"
/**
  * free_list - free a list_t
  * @head: pointer to the struct list
  *
  */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		if (head->str != NULL)
			free(head->str);
		if (head->next != NULL)
			free(head->next);
		free(head);
	}
}
