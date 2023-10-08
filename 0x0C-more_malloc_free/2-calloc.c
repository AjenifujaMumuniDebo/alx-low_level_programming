#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocate memory for an array of nmemb elements of size bytes each
 * @nmemb: The number of elements in the array.
 * @size: The size in bytes of each element.
 *
 * Return: A pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;
	char *byte_ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	return (NULL);

	total_size = nmemb * size;
	ptr = malloc(total_size);

	if (ptr == NULL)
	return (NULL);

	byte_ptr = (char *)ptr;

	for (i = 0; i < total_size; i++)
	byte_ptr[i] = 0;

	return (ptr);
}
