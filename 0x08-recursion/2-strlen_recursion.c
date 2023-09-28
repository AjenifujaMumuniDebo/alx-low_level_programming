#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string for which to find the length.
 *
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0') /* Base case: end of the string */
	{
		return (0); /* Length of an empty string is 0 */
	}

	return (1 + _strlen_recursion(s + 1)); /* Recursively call and add 1 */
}
