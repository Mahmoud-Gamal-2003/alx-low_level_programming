#include "main.h"
/**
 * print_last_digit - The entry point
 * @n: prints _putchar using putchar prototype
 *
 * Return: lowercase 1 (Success), otherwise 0 (failed)
 */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
		l = -1 * (n % 10);
	else
		l = n % 10;
	_putchar(l + '0');
	return (l);
}
