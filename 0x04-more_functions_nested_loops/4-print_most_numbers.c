#include "main.h"
/**
 * print_most_numbers - cheack if the char upper case or lower
 *
 * Return: return one if true and zero if false
*/
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
