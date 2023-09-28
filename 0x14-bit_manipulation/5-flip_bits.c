#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @r: first number
 * @s: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int r, unsigned long int s)
{
	int p, count = 0;
	unsigned long int current;
	unsigned long int exclusive = r ^ s;

	for (p = 63; p >= 0; p--)
	{
		current = exclusive >> p;
		if (current & 1)
			count++;
	}

	return (count);
}
