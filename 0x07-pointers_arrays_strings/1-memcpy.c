#include "main.h"
/**
  * _memcpy : copies memory from src t dest
  * @n: bytes given
  * @src: memory area source
  * @dest: destinatin memory
  *
  * Return: pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i]= src[i];
		i++;
	}
	return (dest);
}
