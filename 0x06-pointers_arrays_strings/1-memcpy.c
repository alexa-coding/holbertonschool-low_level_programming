#include "holberton.h"

/**
  * *_memcpy - copies an area of memory
  * @dest: pointer to where the copy should be placed
  * @src: pointer to memory area being copied
  * @n: number of bytes that should be copied
  * Return: pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
