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
	int k1, k2, i = 0;
	char *result;

	for (k1 = 0; haystack[k1] != 0; k1++, i++)
	{
		for (k2 = 0; needle[k2] != 0; k2++)
		{
			if (haystack[k1] == needle[k2])
			{
				result = &haystack[i];
				k1++;
				k2++;
				if (needle[k2] == 0)
					return (result);
			}
		}
	}
	return (0);
}
