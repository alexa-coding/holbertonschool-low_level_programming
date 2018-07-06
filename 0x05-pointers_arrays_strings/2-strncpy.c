#include "holberton.h"

/**
 * *_strncpy - copies a string
 * @dest: first string
 * @src: second string that will be added to first string
 * @n: number of bytes that will be taken from src and added to dest
 * Return: pointer to the resulting string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int elnum;

	for (elnum = 0; elnum < n && src[elnum] != '\0'; elnum++)
		dest[elnum] = src[elnum];
	for (; elnum < n; elnum++)
		dest[elnum] = '\0';

	return (dest);
}
