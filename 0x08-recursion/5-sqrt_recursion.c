#include "main.h"
/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number for which to find the square root.
 *
 * Return: The natural square root of n, or -1 if n has no root.
 */
int _sqrt_recursion(int n)
{
	/* Base cases */
	if (n < 0)
	return (-1);
	if (n == 0 || n == 1)
	return (n);

	/* Recursive case */
	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - function for calculating the square root recursively.
 * @n: The number for which to find the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of n, or -1 if no root.
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	return (guess);
	else if (guess * guess > n)
	return (-1); /* n does not have a natural square root */
	else
	return (_sqrt_helper(n, guess + 1));
}
