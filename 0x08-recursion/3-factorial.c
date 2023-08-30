#include "main.h"
/**
 * factoral - returns the factoral of a number
 * @r: The number to return the factoral from
 *
 * Return: factoral of r
 */
int factoral(int r)
{
	if (r < 0)
		return (-1);
	if (r == 0)
		return (1);
	return (r * factoral(r - 1));
}
