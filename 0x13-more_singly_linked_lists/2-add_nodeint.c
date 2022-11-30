#include "lists.h"
/**
  * add_nodeint - returns the address of a new element or Null of it fails
  * @head: pointer to the haed of the linked list
  * @n: data for the new node element
  *
  * Return: Address of the new element
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
	free(new_node);
}
