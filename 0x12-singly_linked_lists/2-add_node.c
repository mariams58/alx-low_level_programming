#include "lists.h"
/**
  * add_node - adds a new node to the begining of the node list
  * @head: address
  * @str: given string
  *
  * Return: address of the new node
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	char *new_str = strdup(str);

	if (*head != NULL)
	{
		node = (list_t *)malloc(sizeof(list_t));
		node->str = new_str;
		*head = node;
	}
	return (*head);
	free(node);
	free(node->str);
}

