#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - prints whether the last digit of a number is
* greater than 5, less than 6 (but not 0), or 0
* Return: Success
*/

int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if (lastDigit > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	else if (lastDigit == 0)
	printf("Last digit of %d is %d and is zero\n", n, lastDigit);
	else (lastDigit < 6 && lastDigit != 0)
	printf("Last digit of %d is %d and is less than 6 and not zero\n", n
, lastDigit);
	return (0);
}
