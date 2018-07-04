#include "holberton.h"

/**
  * *_strcpy - copies a string
  * @dest: destination
  * @scr: pointer to string
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
