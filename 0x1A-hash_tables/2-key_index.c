#include "hash_tables.h"
#include <stdlib.h>
/**
  * key_index - makes a key index for the hash index
  * @key: key to the given node
  * @size: given size of the array
  *
  * Return: the key_index
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int ki;
	int x;

	ki = size;
	while ((x = *key++))
	{
		ki = ((ki << 5) + ki) + x;
	}
	return (ki);
}
