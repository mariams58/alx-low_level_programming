#include "lists.h"
/**
  * sum_listint - sums up all the int type data of the nodes in a linke list
  * @head: pointer to the head of te list
  *
  * Return: sum of data
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
