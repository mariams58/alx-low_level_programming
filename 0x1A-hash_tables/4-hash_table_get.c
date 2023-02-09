#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
  * hash_table_get - gets a value from a given key
  * @ht: given hash table
  * @key: given key
  *
  * Return: value stored in a given key
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *hnode;

	if (ht == NULL || ht->array == NULL || ht->size == 0 || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	hnode = ht->array[index];
	if (hnode != NULL)
	{
		if (strcmp(hnode->key, key) == 0)
			return (hnode->value);
		hnode = hnode->next;
	}
	return (NULL);
}
