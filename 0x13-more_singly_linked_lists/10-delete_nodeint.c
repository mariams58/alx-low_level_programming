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
	listint_t *temp, *next;

	if (*head == NULL || head == NULL)
		return (ret);
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		ret = 1;
	}
	temp = *head;
	while (temp)
	{
		count += 1;
		if (temp->next == NULL)
			ret = -1;
		next = temp->next;
		if (count - 1 == index)
		{
			next = next->next;
			free(temp);
			ret = 1;
		}
		temp = next;
	}
	return (ret);
}
