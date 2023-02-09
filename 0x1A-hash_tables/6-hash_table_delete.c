#include "hash_tables.h"
/**
  * hash_table_delete - deletes has table
  * @ht: given hash table
  */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *hnode;
	unsigned long int i;

	if (ht != NULL || ht->array != NULL)
	{
		for (i = 0; i < ht->siz;, i++)
		{
			hnode = ht->array[i];
			if (hnode != NULL)
			{
				free(hnode->key);
				free(hnode->value);
				free(hnode);
			}
		}
		free(ht->array);
		free(ht);
	}
}
