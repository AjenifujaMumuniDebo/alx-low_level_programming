#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenate all program arguments with newlines.
 * @ac: The number of program arguments.
 * @av: Array of program arguments.
 *
 * Return: A pointer to the concatenated string, or NULL
 */
char *argstostr(int ac, char **av)
{
	char *concatenated;
	int i, j, length = 0, totalLength = 0;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	{
	length++;
	}
	totalLength += length + 1;  /* Add 1 for the newline character */
	length = 0;
	}

	concatenated = (char *)malloc(sizeof(char) * totalLength + 1);

	if (concatenated == NULL)
	return (NULL);

	totalLength = 0;

	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	{
	concatenated[totalLength] = av[i][j];
	totalLength++;
	}
	concatenated[totalLength] = '\n';
	totalLength++;
	}

	concatenated[totalLength] = '\0';

	return (concatenated);
}
