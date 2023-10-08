#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * malloc_checked - Allocate memory using malloc.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 * If malloc fails, the function exits with status 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	char error_message[] = "Error: malloc failed\n";

	if (ptr == NULL)
	{
	/* Write the error message to stderr */
	write(STDERR_FILENO, error_message, sizeof(error_message) - 1);

	/* Exit with status 98 */
	exit(98);
	}

	return (ptr);
}
