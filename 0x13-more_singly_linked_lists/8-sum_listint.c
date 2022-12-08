#include "lists.h"
/**
  * sum_listint - sums the values in a list
  * @head: entry to the list
  * Return: Sum value
  */
int sum_listint (listint_t *head)
{
	int sum = 0;
	listint_t *next_node;

	while (head != NULL)
	{
		next_node = head->next;
		sum += head->n;
		head = next_node;
	}
	return (sum);
}
