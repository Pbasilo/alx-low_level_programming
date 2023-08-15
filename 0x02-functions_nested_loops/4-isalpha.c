#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic.
 * @r: Character to check.
 *
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int r)
{
	if ((r >= 'a' && r <= 'z') ||
	    (r >= 'A' && r <= 'Z'))
		return (1);
	else
		return (0);
}
