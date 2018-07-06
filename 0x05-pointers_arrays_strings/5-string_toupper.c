#include "holberton.h"

/**
  * *string_toupper - changes all lowercase letters of a string to uppercase
  * @s: pointer to a string
  * Return: 0 upon success
  */

char *string_toupper(char *s)
{
	int el;

	for (el = 0; s[el] != '\0'; el++)
	{
		if (s[el] >= 'a' && s[el] <= 'z')
			s[el] -= 32;
	}

	return (s);
}
