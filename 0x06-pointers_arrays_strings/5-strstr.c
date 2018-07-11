#include "holberton.h"

/**
  * *_strstr - locates a substring
  * @haystack: pointer to a string
  * @needle: pointer to a string
  * Return: pointer to the beginning of the located substring
  * or NULL if the substring is not found
  */

char *_strstr(char *haystack, char *needle)
{
	char *start, *checker;

	while (*haystack)
	{
		start = haystack;
		checker = needle;

		while (*checker && *haystack == *checker)
		{
			haystack++;
			checker++;
		}

		if (*checker == 0)
			return (start);

		haystack++;
	}
	return (0);
}
