#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - performs simple operations
  * @argv: argument vector
  * @argc: argument count
  * Return: sum of integers and a newline
  */

int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	result = (*get_op_func(argv[2]))(num1, num2);

	printf("%d\n", result);

	return (0);
}
