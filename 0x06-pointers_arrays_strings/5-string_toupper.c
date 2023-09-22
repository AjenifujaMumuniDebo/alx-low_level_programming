#include "main.h"

/**
 * string_toupper - capitalise a string
 * @a: pointer to the string to be capitalised
 * Return: pointer to the capitalised string
 */

char *string_toupper(char *a)
{
	int length;

	length = 0;

	while (a[length] != '\0')
	{
		if (a[length] >= 'a' && a[length] <= 'z')
		{
			a[length] = a[length] - 32;
		}
		length++;
	}

	return (a);
}
