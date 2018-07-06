#include "holberton.h"

/**
  * _strcmp - compares two strings
  * @s1: first string
  * @s2: second string
  * Return: integer <, >, or = 0 if s1 is found to be less than, equal to,
  * or greater than s2
  */

int _strcmp(char *s1, char *s2)
{
	if (*s1 > *s2)
		return (*s1 - *s2);
	else if (*s1 < *s2)
		return (*s1 - *s2);
	else
		return (0);
}
