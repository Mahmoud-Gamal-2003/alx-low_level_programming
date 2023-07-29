#include "main.h"

/**
 * print_alphabet - The entry point
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
