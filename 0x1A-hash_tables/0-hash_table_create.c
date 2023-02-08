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
	unsigned long int i;
	hash_table_t htable = (hash_table_t *) malloc(sizeof(hash_table_t));

	while (htable == NULL)
		return (NULL);
	htable->size = size;
	htable->array = (hash_node_t **) calloc(sizeof(hash_node_t *));
	for (i = 0; i < htable->size; i++)
		htable->item[i] = NULL;
	return (htable);
}
