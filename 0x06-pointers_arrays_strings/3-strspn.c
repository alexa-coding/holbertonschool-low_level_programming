#include "holberton.h"

/**
  * _strspn - gets the length of prefix substring
  * @s: pointer to string
  * @accept: pointer to a string
  * Return: number of bytes in the initial segment of s which consist only
  * of bytes from accept
  */

unsigned int _strspn(char *s, char *accept)
{
	int k1, k2, count = 0;

	for (k1 = 0; s[k1] != '\0'; k1++)
	{
		if (count != k1)
			break;
		for (k2 = 0; accept[k2] != '\0'; k2++)
			if (s[k1] == accept[k2])
				count++;
	}
	return (count);
}
