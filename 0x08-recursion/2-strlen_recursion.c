#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @r: Length of the string.
 *
 * Return: Length of the string.
 */
int _strlen_recursion(char *r)
{
	int longit = 0;

	if (*r)
	{
		longit++;
		longit += _strlen_recursion(r + 1);
	}

	return (longit);
}
