#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
  * mk_hnode - makes a new hash node
  * @key: given key
  * @value given value
  *
  * Return: returns the new node
  */
hash_node_t *mk_hnode(const char *key, const char *value)
{
	hash_node_t *hnode;

	hnode = malloc(sizeof(hash_node_t));
	if (hnode == NULL)
		return (NULL);
	hnode->key = strdup(key);
	if (hnode->key == NULL)
	{
		free(hnode);
		return (NULL);
	}
	hnode->value = strdup(value);
	if (hnode->value == NULL)
	{
		free(hnode->key);
		free(hnode);
		return (NULL);
	}
	hnode->next = NULL;
	return (hnode);
}

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
	hash_node_t *new, *node;
	unsigned long int index;
	char *new_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0 || key == NULL || strlen(key) == 0 || value == NULL)
	return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new = ht->array[index];

	while (new != NULL)
	{
		if (strcmp(new->key, key ) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(new->value);
			new->value = new_value;
			return (1);
		}
		new = new->next;
	}
	node = mk_hnode(key, value);
	if (node == NULL)
		return (0);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);

	return (0);
}
