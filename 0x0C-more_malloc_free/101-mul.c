#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Checks if a string is composed of digits.
 * @str: The string to check.
 *
 * Return: 1 if all characters are digits, 0 otherwise.
 */
int is_digit(char *str)
{
	while (*str)
	{
	if (*str < '0' || *str > '9')
	return (0);
	str++;
	}
	return (1);
}

/**
 * multiply - Multiplies two positive numbers.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The result of the multiplication.
 */
int multiply(char *num1, char *num2)
{
	int result = 0;
	int len1 = 0, len2 = 0;
	int i, j;

	while (num1[len1])
	len1++;
	while (num2[len2])
	len2++;

	for (i = 0; i < len1; i++)
	{
	for (j = 0; j < len2; j++)
	{
	int digit1 = num1[i] - '0';
	int digit2 = num2[j] - '0';

	result += (digit1 * digit2) * (1);
	}
	}

	return (result);
}
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int result;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
	printf("Error\n");
	return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	result = multiply(num1, num2);

	printf("%d\n", result);

	return (0);
}
