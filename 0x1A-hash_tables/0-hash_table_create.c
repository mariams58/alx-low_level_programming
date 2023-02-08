#include "hash_tables.h"
#include <stdlib.h>
/**
  * hash_table_create - creates a hash table
  * @size: size of hash table
  *
  * Return: pointer to the hach table created
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (htable != NULL)
	{
		htable->size = size;
		htable->array = (hash_node_t **) calloc(htable->size, sizeof(hash_node_t *));
	}
	else
		return (NULL);
	return (htable);
}
