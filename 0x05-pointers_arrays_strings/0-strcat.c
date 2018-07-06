#include "holberton.h"

/**
  * *_strcat - concatenates two strings
  * @dest: the first string
  * @src: the second string that will be added to the first string
  * Return: returns the pointer to the resulting string dest
  */

char *_strcat(char *dest, char *src)
{
	int s1, s2 = 0;

	for (s1 = 0; s1 >= 0; s1++)
	{
		if (dest[s1] == '\0')
			dest[s1] = src[s2];
		if (dest[s1] == src[s2])
			s2++;
		if (src[s2] == '\0')
			break;
	}
	return (dest);
}
