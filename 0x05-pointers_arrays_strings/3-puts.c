#include "main.h"

/**
 * _puts - to print a string
 * @str: pointer of type char
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
}
