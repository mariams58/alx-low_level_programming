#include "lists.h"
/**
  * reverse_listint - reverses a singly linke list
  * @head: pointer to the head of the linked list
  *
  * Return: pointer to the reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *pv = NULL;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = pv;
		pv = *head;
		*head = next;
	}
	*head = pv;
	return (*head);
}
