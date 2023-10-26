#include "main.h"
#include "2-get_bit.c"
/**
 * set_bit - sets a bit at a given index
 * @n: pointer to an unsigned long integer
 * @index: index at which to set the bit (0-based)
 *
 * Description: This function sets the bit at the specified index in the
 * given unsigned long integer. The index should be in the range of 0 to 31.
 *
 * Return: Returns 1 if the bit was successfully set, or -1 if an error occurs.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	(*n) |= 1 << index;
	if (get_bit((*n), index) == 1)
		return (1);
	return (-1);
}
