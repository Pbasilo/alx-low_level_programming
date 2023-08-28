#include "main.h"
#include <stdio.h>

/**
 * set_string - set the value of a pointer to a string.
 * @s: Pointer to a pointer to a string.
 * @to: String to set @s to.
 */

int main(void)
{
	char *s0 = "Bob Dylan";
	char *s1 = "Robert Allen";

	printf("%s, %s\n", s0, s1);
	set_string(&s1, s0);
	printf("%s, %s\n", s0, s1);
	return (0);
}
