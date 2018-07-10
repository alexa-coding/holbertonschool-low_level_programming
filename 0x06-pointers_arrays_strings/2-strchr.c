#include "holberton.h"

/**
  * *_strchr - locates a character in string
  * @s: pointer to a string
  * @c: char variable containing the character that is being searched for
  * Return: pointer to the first occurence of c in the string, NULL if
  * the character is not found
  */

char *_strchr(char *s, char c)
{
	int i, len;

	for (i = 0; s[i] != '\0'; i++)
		len++;

	for (i = 0; i < len; s++, i++)
		if (*s == c)
		{
			return (s);
		}
	return (0);
}
