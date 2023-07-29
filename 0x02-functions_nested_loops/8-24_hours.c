#include "main.h"

/**
 * jack_bauer - writes the character c to stdout
 * Discreption: The character to print
 *
 * Return: on success 1.
 *         on error, -1 is returned, and error is set appropriates.
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
			_putchar(':');
			_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
			_putchar('\n');
		}
	}
}
