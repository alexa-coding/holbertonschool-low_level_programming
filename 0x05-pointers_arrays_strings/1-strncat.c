#include "holberton.h"

/**
  * *_strncat - concatenates two strings
  * @dest: first string
  * @src: second string that will be added to first string
  * @n: number of bytes that will be taken from src and added to dest
  * Return: pointer to the resulting string dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int len1, len2, s1, s2 = 0;

	for (len1 = 0; dest[len1] != '\0'; len1++)
		;
	for (len2 = 0; src[len2] != '\0'; len2++)
		;
	if (n >= len2)
		for (s1 = len1; s1 < len1 + len2; s1++, s2++)
			dest[s1] = src[s2];
	else
		for (s1 = len1; s1 < len1 + n; s1++, s2++)
			dest[s1] = src[s2];

	return (dest);
}
