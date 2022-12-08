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

	while (*head != NULL)
	{
		temp = (*head)->next;
		count += 1;
		if ((temp != NULL) && count - index == 2)
		{
			temp = temp->next;
			ret = 1;
		}
		*head = temp;
		free(temp);
	}
	return (ret);
}
