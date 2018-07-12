#include "holberton.h"

/**
  * len - determines the length of a string
  * @s: pointer to a string
  * Return: returns length of string
  */

int len(char *s)
{
	if (*s)
		return (1 + len(s + 1));
	return (0);
}

/**
  * pal - determines if a string is a palidrome or not
  * @a: pointer to beginning or string
  * @b: pointer to end of string
  * @s: pointer to a string
  * Return: 1 if string is palidrome, 0 otherwise
  */

int pal(char *s, int a, int b)
{
	if (a >= b)
		return (1);
	if (s[a] == s[b])
		return (pal(s, a + 1, b - 1));
	return (0);
}

/**
  * is_palindrome - returns pal
  * @s: pointer to a string
  * Return: returns pal
  */

int is_palindrome(char *s)
{
	return (pal(s, 0, len(s) -  1));
}
