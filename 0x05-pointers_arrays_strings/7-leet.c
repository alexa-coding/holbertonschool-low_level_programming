#include "holberton.h"

/**
  * *leet - encodes a string into 1337
  * @s: pointer to a string
  * Return: result of the altered string
  */

char *leet(char *s)
{
	int el, i;
	char let[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L', '\0'};
	char num[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	for (el = 0; s[el] != '\0'; el++)
	{
		for (i = 0; let[i] != '\0'; i++)
			if (s[el] == let[i])
				s[el] = num[i];
	}

	return (s);
}
