#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @r: number to print in binary
 */
void print_binary(unsigned long int r)
{
	int p, count = 0;
	unsigned long int current;

	for (p = 63; p >= 0; p--)
	{
		current = r >> p;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
