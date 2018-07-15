#include <stdio.h>

/**
  * main - prints name of file followed by a new line
  * @argv: argument vector
  * @argc: argument counter
  * Return: 0 if successful, non-zero otherwise
  */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
