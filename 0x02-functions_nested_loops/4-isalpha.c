#include "main.h"
/**
 * _isalpha - The entry point
 * @c: prints _putchar using putchar prototype
 *
 * Return: lowercase 1 (Success), otherwise 0 (failed)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
