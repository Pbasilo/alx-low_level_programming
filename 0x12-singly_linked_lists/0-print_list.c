#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a linked list
 * @r: Pointer to the list_t list to print
 *
 * Return: The number of nodes printed
 */
size_t print_list(const list_t *r)
{
	size_t s = 0;
	
	while (r)
	{
		if (!r->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", r->len, r->str);
		r = r->next;
		s++;
	}

	return (s);
}
