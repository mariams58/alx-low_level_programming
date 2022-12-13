#include "lists.h"
/**
  * delete_nodeint_at_index - deletes the node at a given index
  * @head: entry to the list
  * @index: given index
  *
  * Return: the value of that index after deletion
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int ret = -1;
	unsigned int count = 0;
	listint_t *temp;
	if (*head == NULL)
		return (ret);
	for (count = 0; (*head)->next != NULL; count++)
	{
		if (count == index)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
			ret = 1;
		}
	}
	return (ret);
}
