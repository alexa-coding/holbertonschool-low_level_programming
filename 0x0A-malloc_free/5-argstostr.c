#include "holberton.h"
#include <stdlib.h>

/**
  * *argstostr - concatenates all arguments in your program
  * @ac: counting argument
  * @av: vector argument
  * Return: NULL if ac == 0 or av == 0;
  */

char *argstostr(int ac, char **av)
{
	char *a;
	int len = 0, i, j, k = 0;

	if (ac == 0 || av == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != 0; j++, len++)
			;

	a = malloc(sizeof(char) * (len + ac + 1));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
			a[k] = av[i][j];
			k++;
		}
		a[k] = '\n';
		k++;
	}
	a[k] = '\0';
	return (a);
}
