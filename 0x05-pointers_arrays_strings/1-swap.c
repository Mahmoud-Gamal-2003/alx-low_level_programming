#include "main.c"

/**
 * swap_int - swaping
 *
 * @a: hele
 *
 * @b: heldo
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
