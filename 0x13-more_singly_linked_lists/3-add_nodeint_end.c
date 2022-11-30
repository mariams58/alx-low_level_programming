#include "lists.h"
/**
  * add_nodeint_end - addds a new node element at the end of a list
  * @head: pointer to the top of the liked list
  * @n: data to new node
  *
  * Return: address of new node
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *temp = *head;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = node;
	return (temp);
	free(node);
}
