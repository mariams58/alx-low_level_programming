#include "lists.h"
/**
  * add_node_end - add node to the end of a list
  * @head: the pointer to the pointer
  * @str: new updated string
  *
  * Return: address of the new element
  */
list_t *add_node_end(list_t **head, const char *str)
{
	char *new_str = strdup(str);
	list_t *node;
	list_t *last_node = *head;
	unsigned int i;

	for (i = 0; new_str[i] != '\0'; i++)
		;
	node = (list_t *)malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = new_str;
	node->len = i;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = node;
	return (last_node);
	free(node);
	free(node->str);
	free(new_str);
}

