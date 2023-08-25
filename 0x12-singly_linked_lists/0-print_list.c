#include"lists.h"
/**
  * print_list - prints out the linked lst
  * @h: pointer to head
  *
  * Return: size of the linke list
  */
size_t print_list(const list_t *h)
{
	int ret = 0, len;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			len = strlen(h->str);
			printf("[%d] %s\n", len, h->str);
		}
		h = h->next;
		ret++;
	}
	return (ret);
}
