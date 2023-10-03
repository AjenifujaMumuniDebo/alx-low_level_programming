#include "main.h"

/**
 * *_memset - memory fill with a constant byte
 * @s: pointer to a constant 
 * @b: constant to filled the memory
 * @n: max bytes to use
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
