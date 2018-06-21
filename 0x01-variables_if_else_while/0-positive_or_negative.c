#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
* main - prints whether the number in the variable n is positive, negative, or zero 
* Return: 0 = Success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("%d is a positive\n", n);
	else if (n < 0)
	printf("%d is a negative\n", n);
	else
	printf("%d is a negative\n", n);
	return (0);
}
