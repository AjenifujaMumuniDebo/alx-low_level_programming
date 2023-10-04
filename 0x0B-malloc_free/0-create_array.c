#include "main.h"
#include <stdlib.h>
/**
 * create_array - Create an array of chars and initialize with a char
 * @size: The size of the array to create
 * @c: The character with which to initialize the array
 *
 * Return: Pointer to the created array, or NULL if size is 0 or on failure
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
	return (NULL);
	}

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < size; i++)
	{
	array[i] = c;
	}

	return (array);
}

