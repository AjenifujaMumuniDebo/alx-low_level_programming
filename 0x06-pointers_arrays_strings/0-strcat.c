#include "main.h"

/**
 *_strcat - to concatenates two strings.
 *@dest: pointer of char data type
 *@src: pointer of char data type
 *Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = src[j];
	return (dest);
}
