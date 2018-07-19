#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - prints the sum of two integers
  * @argc: argument count
  * @argv: argument vector
  * Return: 0 upon success, non-zero otherwise
  */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != 0; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}