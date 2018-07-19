#include "holberton.h"
#include <stdlib.h>

/**
  * *string_nconcat - concatenates two strings
  * @s1: pointer to a string
  * @s2: pointer to a string
  * @n: unsinged int
  * Return: pointer to concatenated strings, NULL if fails
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int i, j, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != 0; i++)
		len++;
	for (i = 0; i < n; i++)
		len++;

	res = malloc(len + 1);
	if (res == NULL)
		return (NULL);

	for (i = 0, j = 0; s1[i] != 0; i++, j++)
		res[j] = s1[i];
	for (i = 0; i < n; i++, j++)
		res[j] = s2[i];
	res[j] = '\0';

	return (res);
}
