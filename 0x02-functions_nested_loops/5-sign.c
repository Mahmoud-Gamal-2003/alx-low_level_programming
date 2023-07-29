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
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
