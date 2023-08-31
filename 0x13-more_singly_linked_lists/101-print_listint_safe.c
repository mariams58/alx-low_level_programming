#include "lists.h"
/**
  * print_listint_safe - prints out a liistint_t type liked list
  * @head: pointer to the haed of the linked list
  *
  * Return: num of nodes in the linked list
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;

	while(head)
	{
		i += 1;
		printf("[%x] %d\n", head, head->n);
		print_listint_safe(head->next);
	}
	if (i == 0)
		exit(98);
	return (i);
}
