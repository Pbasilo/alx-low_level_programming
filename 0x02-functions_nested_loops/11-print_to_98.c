#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from input to 98,
 * in order separated by a comma followed by a space.
 * @r: The number to begin counting at.
 */
void print_to_98(int r)
{
	if (r >= 98)
	{
		while (r > 98)
			printf("%d, ", r--);
		printf("%d\n", r);
	}

	else
	{
		while (r < 98)
			printf("%d, ", r++);
		printf("%d\n", r);
	}
}
