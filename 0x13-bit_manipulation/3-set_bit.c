#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * set_bit -  sets the value of a bit to 1 at a given index
  * @n: pointer to an integer
  * @index: where the desired bit is located
  * Return: 1 if program is successful, -1 otherwise
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	unsigned long int temp = *n, temp2;

	if (index >= sizeof(n) * 8)
		return (-1);

	for (temp2 = 1, i = 0; i < index; i++)
		temp2 <<= 1;

	*n = temp | temp2;
	return (1);
}
