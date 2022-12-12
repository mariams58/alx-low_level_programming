#include "lists.h"
/**
  * sum_listint - sums the values in a list
  * @head: entry to the list
  * Return: Sum value
  */
int sum_listint (listint_t *head)
{
	int sum = 0;
	listint_t *nest_node;

	while (head != NULL)
	{
		nest_node = head->next;
		sum += head->n;
		head = nest_node;
	}
	return (sum);
}
