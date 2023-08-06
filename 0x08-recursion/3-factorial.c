#include "main.h"

/**
 * factorial - recursion func
 *
 * @n: index in array of characters
 *
 * Return: void
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
