#include "main.h"

/**
 * _strlen_recursion - recursion func
 *
 * @s: index in array of characters
 *
 * Return: void
*/

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s > '\0')
		i += _strlen_recursion(s + 1) + 1;
	return (i);
}
