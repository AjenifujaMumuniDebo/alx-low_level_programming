#include "main.h"
/**
 * _strlen - gets the  character lenth of a string
 *
 * @s : character to get string
 * Return: returns length of a  string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
