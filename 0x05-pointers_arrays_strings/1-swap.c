#include "main.h"
/**
 * swap_int - function that swaps integers
 * @a : first integer
 * @b : second integer
 */
void swap_int(int *a, int *b)
{
	int f = *a;
	int g = *b;
	*a = g;
	*b = f;
}
