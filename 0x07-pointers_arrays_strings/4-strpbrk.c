#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: Always 0 (Success)
 * Return: Pointer to first occurrence in 's', or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}

	return ('\0');
}
