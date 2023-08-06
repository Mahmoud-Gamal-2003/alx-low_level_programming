#include "main.h"

/**
 * _sqrt_recursion - recursion func
 *
 * @n: index in array of characters1
 *
 * Return: intger
*/
int _sqrt_recursion(int n, int val);

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - recursion func
 *
 * @n: index in array of characters1
 *
 * @val: index in array of characters1
 *
 * Return: intger
*/

int _sqrt(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (_sqrt(n, ++val));
	else
		return (-1);
}
