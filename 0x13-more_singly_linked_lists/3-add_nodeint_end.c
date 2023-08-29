#include "lists.h"
/**
  * add_nodeint_end - adds a node to the end of a linked list
  * @head: pointer to the head of a linked list
  * @n: given integer
  *
  * Return: poimter to the new node added to the linked list
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *h;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	h = *head;
	while (h->next != NULL)
		h = h->next;
	h->next = new;
	return (*head);
	free(new->next);
	free(new);
}
