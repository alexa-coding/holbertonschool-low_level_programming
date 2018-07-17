#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * *_strdup -  returns a pointer to a newly allocated space in memory
  * which contains a copy of the string given as a parameter
  * @str: pointer to a string
  * Return: pointer to copy of string if program was successful,
  * NULL if otherwise
  */

char *_strdup(char *str)
{
	int i, len;
	char *a;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != 0; len++)
		;

	a = malloc(len);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		a[i] = str[i];

	return (a);
}
