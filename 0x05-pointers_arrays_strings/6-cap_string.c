#include "holberton.h"

/**
  * *cap_string - capitalizes all words of a string
  * @s: pointer to string
  * Return: pointer to the resulting string
  */

char *cap_string(char *s)
{
	int el;

	for (el = 0; s[el] != '\0'; el++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
			s[0] -= 32;

		while (s[el] == '.' || s[el] == ',' || s[el] == ';' || s[el] == '"'
|| s[el] == '?' || s[el] == '!' || s[el] == '(' || s[el] == ')' ||
s[el] == '{' || s[el] == '}' || s[el] == 32 || s[el] == 9 || s[el] == '\n')
		{
			if (s[el + 1] >= 'a' && s[el + 1] <= 'z')
				s[el + 1] -= 32;
			break;
		}
	}
		return (s);
}
