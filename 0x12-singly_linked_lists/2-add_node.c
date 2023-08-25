#include "lists.h"
/**
  * add_node - inserts node at the beginning
  * @head: poiter to head
  * @str: pointer to string given
  *
  * Return: address of the new element
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *r_head;

	r_head = malloc(sizeof(list_t));
	if (r_head == NULL)
		return (NULL);
	r_head->str = strdup(str);
	if (head == NULL)
		r_head->next = NULL;
	r_head->next = *head;
	*head = r_head;
	return (*head);
	free(r_head->str);
	free(r_head->next);
	free(r_head);
}
