#include "holberton.h"

/**
* swap_int - swaps the values of two integers using pointers
* @*a: pointer that points to an int variable with a value assigned by 1-main.c
* @*b: pointer that points to an int variable with a value assigned by 1-main.c
*/

void swap_int(int *a, int *b)
{
		*a = *b;
		*b = 98;
}
