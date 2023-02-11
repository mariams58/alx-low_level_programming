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
	if (index == 0)
	{
		temp = *head->next;
		free(*head);
		*head = temp;
		ret = 1;
	}
	while (*head != NULL)
	{
		temp = (*head)->next;
		count += 1;
		if (count - 1 == index)
		{
			temp = (*head)->next;
			free(*head);
			ret = 1;
		}
		*head = temp;
	}
	return (ret);
}
