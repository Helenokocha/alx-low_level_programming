#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given
 *            index
 * @n: unsigned long int input
 * @index: index of the bit
 *
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	unsigned long int result;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;

	result = n & mask;

	return ((result > 0) ? 1 : 0);
}
