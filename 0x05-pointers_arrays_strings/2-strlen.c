#include "main.h"
/**
 * _strlen - returns the length of a strin
 *
 * @s:string
 * Return: length
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
