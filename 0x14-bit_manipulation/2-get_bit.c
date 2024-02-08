#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int input
 * @index: index of the bit
 * Return: value of the bit, or -1 if the index is out of range
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
