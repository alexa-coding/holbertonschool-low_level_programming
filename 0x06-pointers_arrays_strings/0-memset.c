#include "holberton.h"

/**
  * *_memset - fills memory with a constant byte
  * @s: pointer to an area of memory
  * @b: contant byte
  * @n: determines how many bytes of memory get filled
  * Return: pointer to s
  */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
