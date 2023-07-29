#include "main.h"
/**
 * print_sign - The entry point
 * @n: prints _putchar using putchar prototype
 *
 * Return: lowercase 1 (Success), otherwise 0 (failed)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		_putchar(n);
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar(n);
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		_putchar(n);
		return (-1);
	}
}
