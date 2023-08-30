#include "function_pointers.h"

/**
 * array_iterator - prints an integer
 * @array: the integer to print
 * @size: the array size
 * @action: fucntion pointer
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
