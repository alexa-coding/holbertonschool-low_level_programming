#include "holberton.h"
#include <stdlib.h>

/**
  * *str_concat - oncatenates two strings
  * @s1: pointer to a string
  * @s2: pointer to a string
  * Return: pointer to concatenated string, NULL if failed
  */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, j, len = 0;

	if (s1 == NULL)
		s1 == "";
	if (s2 == NULL)
		s2 == "";

	for (i = 0; s1[i] != 0; len++, i++)
		;
	for (i = 0; s2[i] != 0; len++, i++)
		;

	a = malloc(len + 1);
	if (a == NULL)
		return (NULL);

	for (i = 0; s1[i] != 0; i++)
		a[i] = s1[i];
	for (j = 0; s2[j] != 0; i++, j++)
		a[i] = s2[j];
	a[i] = '\0';

	return (a);
}
