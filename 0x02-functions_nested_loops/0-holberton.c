#include "holberton.h"
/**
 * main - prints Holberton followed by newline
 */

int main(void)
{
	int i;
        char c[10]="Holberton\n";

	for(i = 0; i <= 10; i++)
		_putchar(c[i]);

	return(0);
}
