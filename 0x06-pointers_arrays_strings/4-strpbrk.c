#include "holberton.h"

/**
  * *_strpbrk - searches a string for any of a set of bytes
  * @s: pointer to a string
  * @accept: pointer to a string
  * Return: pointer to the byte in s that matches one of the bytes in accept
  * or NULL if no such byte is found
  */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s != 0; s++)
	{
		for (i = 0; accept[i] != 0; i++)
			if (*s == accept[i])
				return (s);
	}
	return (0);
}
