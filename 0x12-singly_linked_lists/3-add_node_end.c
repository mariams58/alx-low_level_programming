#include "lists.h"
/**
  * add_node_end - inserts node at end
  * @head: poiter to head
  * @str: pointer to string given
  *
  * Return: address of the new element
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *r_head, *new = *head;

	r_head = malloc(sizeof(list_t));
	if (r_head == NULL)
		return (NULL);
	r_head->str = strdup(str);
	r_head->next = NULL;
	if (*head == NULL)
	{
		*head = r_head;
		return (*head);
	}
	while (new->next != NULL)
		new = new->next;
	new->next = r_head;
	return (*head);
	free(r_head->str);
	free(r_head->next);
	free(r_head);
}
