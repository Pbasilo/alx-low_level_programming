#include "function_pointers.h"
/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size: size of elements in array
 * @cm: pointer to function of one of the 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cm)(int))
{
	int i;

	if (array == NULL || size <= 0 || cm == NULL)

		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cm(array[i]))
			return (i);
	}
	return (-1);
}
