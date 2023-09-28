#include "main.h"
/**
 * _pow_recursion - estimates the power of a number
 * @x : base of the numbers
 * @y : power that the base is raised to
 *
 * Return: The result of x^y, or -1 if y is negative (error)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
