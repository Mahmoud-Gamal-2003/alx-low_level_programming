#include "main.h"
/**
 * print_alphabet_x10 - The entry point
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always void (Success)
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
