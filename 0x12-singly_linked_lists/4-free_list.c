#include "lists.h"
/**
  * free_list - free a list_t
  * @head: pointer to the struct list
  *
  */
void free_list(list_t *head)
{
	list_t *current;

	current = head->next;
	if (head != NULL)
	{
		if (head->str != NULL)
			free(head->str);
		while (current != NULL)
		{
			if (current->str != NULL)
				free(current->str);
			free(current);
		}
		free(head);
	}
}
