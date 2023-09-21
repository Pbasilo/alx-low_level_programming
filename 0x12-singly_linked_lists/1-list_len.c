#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns the number of elements in a linked list
 * @r: Pointer to the list_t list
 *
 * Return: number of elements in r
 */
size_t list_len(const list_t *r)
{
	size_t n = 0;

	while (r)
	{
		n++;
		r = r->next;
	}
	return (n);
}
