#include "main.h"
/**
 * _sqrt_recursion - estimates the square root of a n
 * @n : the number to be calculted for its square root
 *
 *return : the square root of n or (-1) if n does not have a natural square root
 *
 */
int find_sqrt(int n, int guess)
{
	if (guess * guess == n) /* Base case: found the square root */
	{
		return (guess);
	}
	else if (guess * guess > n) /* Error case: n does not have a natural square root */
	{
		return (-1);
	}
	else /* Recursive case: continue searching */
	{
		return (find_sqrt(n, guess + 1));
	}
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_sqrt(n, 0));
}	

