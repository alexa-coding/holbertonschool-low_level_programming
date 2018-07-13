#include <stdio.h>

/**
  * main - prints all arguments that were received
  * @argc: argument count
  * @argv: argument vector
  * Return: 0 upon success, non-zero otherwise
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
