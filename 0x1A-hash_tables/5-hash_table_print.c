#include "hash_tables.h"
/**
  * hash_table_print - prints out hash table
  * @ht: given hash table
  *
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *hnode;
	char sign = 0;

	if (ht != NULL || ht->array != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			hnode = ht->array[i];
			while (hnode != NULL)
			{
				if (sign == 1)
					printf(", ");
				printf("'%s': '%s'", hnode->key, hnode->value);
				sign = 1;
				hnode = hnode->next;
			}
		}
		printf("}\n");
	}
}
