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
	for (; *s != '\0'; s++)

		if (*s == c)
			return (s);
	return (0);
}
