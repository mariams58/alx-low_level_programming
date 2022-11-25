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
	char *new_str = NULL;
	list_t *node;
	unsigned int i;

	new_str = strdup(str);
	if (new_str == NULL)
		return (NULL);
	for (i = 0; new_str[i] != '\0'; i++)
		;
	node = (list_t *)malloc(sizeof(list_t));
	if (node == NULL)

		return (NULL);
	node->str = new_str;
	node->len = i;
	node->next = *head;
	*head = node;
	return (node);
	free(node);
	free(node->str);
	free(new_str);
}
