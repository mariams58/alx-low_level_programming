#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
  * hash_table_set - inserts in an hash node
  * @ht: pointer to hash table
  * @key: given key
  * @value: given value
  *
  * Return: 1 for success
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *current = (hash_node_t *) malloc(sizeof(hash_node_t));
	unsigned int index;

	current->key = (char *) malloc(strlen(key) + 1);
	current->value = (char *) malloc(strlen(value) + 1);
	current->next = NULL;
	strcpy(current->key, key);
	strcpy(current->value, value);
	index = key_index(*key, *ht->size);
	new = ht->array[index];

	while (new != NULL)
	{
		ht->array[index] = current;
		return (1);
	}
	return (0);
}
