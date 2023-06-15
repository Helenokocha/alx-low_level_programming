#include "main.h"
#include <stdio.h>
#include <math.h>


/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string 0 and 1 chars
 *
 * Return : the converterd number, or 0 if there is one or more
 *          chars in the strings b that is not 0 or 1 or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
		return (0);
	len = 0;
	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			result += (unsigned int)pow(2, len - 1 - i);
	}
	return (result);
}
