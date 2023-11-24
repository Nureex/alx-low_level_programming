#include "main.h"

/**
 * get_bit - values of a bit at a given index
 * @n: decimal parameters
 * @index: index
 * Return: val
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
	return (-1);
	return (bit & 1);
}
