#include "main.h"

/**
* puts_half - prints the second half of a string, followed by a new line
* @str: pointer to the string to print
* Return: void
*/
void puts_half(char *str)
{
int length = 0;
int start;

while (str[length] != '\0')
{
length++;
}

start = (length + 1) / 2;

while (str[start] != '\0')
{
_putchar(str[start]);
start++;
}

_putchar('\n');
}
