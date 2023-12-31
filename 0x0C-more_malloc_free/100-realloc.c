#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block.
 * @ptr: A pointer to the memory previously allocated with malloc.
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes, of the new memory block.
 *
 * Return: A pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (ptr == NULL)
	return (malloc(new_size));

	if (new_size == 0)
	{
	free(ptr);
	return (NULL);
	}

	if (new_size == old_size)
	return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	return (NULL);

	if (new_size < old_size)
	memcpy(new_ptr, ptr, new_size);
	else
	memcpy(new_ptr, ptr, old_size);

	free(ptr);

	return (new_ptr);
}
