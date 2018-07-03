#include "holberton.h"

/**
  * rev_string - reverses a string
  * @s: pointer that points to a char variable with a value assigned by
  * 4-main.c
  */

void rev_string(char *s)
{
	int length = 0, temp, beg = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	while (length - 1 > beg)
	{
		temp = s[beg];
		s[beg] = s[length - 1];
		s[length - 1] = temp;
		beg++;
		length--;
	}
}
