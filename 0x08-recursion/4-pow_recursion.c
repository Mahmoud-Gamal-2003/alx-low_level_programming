#include "main.h"

/**
 * _pow_recursion - recursion func
 *
 * @x: index in array of characters
 *
 * @y: index in array of characters
 *
 * Return: intger
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
