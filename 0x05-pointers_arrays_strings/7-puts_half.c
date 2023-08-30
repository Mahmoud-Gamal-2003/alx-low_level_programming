#include "main.h"

/**
 * puts_half - check the code
 *
 * @str: char
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
