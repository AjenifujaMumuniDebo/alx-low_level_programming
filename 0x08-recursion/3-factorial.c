#include "main.h"
/**
 * factorial - function to get facorial of an integer
 *
 * @n : the number to find its factorial
 * Return: The factorial of n, or -1 if n is negative (error)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
