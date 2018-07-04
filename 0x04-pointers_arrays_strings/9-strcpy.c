#include "holberton.h"

/**
  * *_strcpy - copies a string
  * @dest: destination
  * @src: pointer to string
  * Return: copy of string that was stored in dest
*/

char *_strcpy(char *dest, char *src)
{
	int length = 0, el;

	while (src[length] != '\0')
		length++;

	for (el = 0; el < length; el++)
		dest[el] = src[el];
	return (dest);
}
