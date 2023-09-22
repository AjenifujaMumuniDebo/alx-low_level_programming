#include "main.h"

/**
 * reverse_array - to reverse the content of array
 * @a: array of integer
 * @n: number of element to swap
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int begin;
	int last;
	int i;

	begin = 0;
	last = n - 1;

	while (begin < last)
	{
		i = a[begin];
		a[begin] = a[last];
		a[last] = i;
		begin++;
		last--;
	}
}
