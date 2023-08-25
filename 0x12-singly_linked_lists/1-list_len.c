#include"lists.h"
/**
  * list_len - prints out the length of linked lst
  * @h: pointer to head
  *
  * Return: size of the linke list
  */
size_t list_len(const list_t *h)
{
	size_t ret = 0;

	while (h != NULL)
	{
		ret++;
		h = h->next;
	}
	return (ret);

