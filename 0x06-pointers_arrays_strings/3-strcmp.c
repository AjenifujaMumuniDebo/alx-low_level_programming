#include "main.h"

/**
 * _strcmp - to compare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int len, diff;

	len = 0;
	while (s1[len] != '\0' && s1[len] == s2[len])
	{
		len++;
	}

	diff = s1[len] - s2[len];

	return (diff);
}
