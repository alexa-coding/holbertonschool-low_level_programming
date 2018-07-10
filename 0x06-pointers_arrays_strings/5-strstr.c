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
	int k1, k2, temp, temp2;
	char *result;

	for (k1 = 0; haystack[k1] != 0; k1++)
	{
		for (k2 = 0; needle[k2] != 0; k2++)
		{
			temp = k1;
			temp2 = k2;
			while (haystack[temp] == needle[temp2])
			{
				result = &haystack[k1];
				temp++;
				temp2++;
				if (needle[temp2] == 0)
					return (result);
			}
		}
	}
	return (0);
}
