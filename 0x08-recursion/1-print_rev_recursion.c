#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @r:The string to be printed.
 */
void _print_rev_recursion(char *r)
{
	if (*r)
	{
		_print_rev_recursion(r + 1);
		_putchar(*r);
	}
}
