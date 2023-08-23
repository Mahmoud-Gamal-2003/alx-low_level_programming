#include "main.h"
/**
 * print_numbers - cheack if the char upper case or lower
 *
 * Return: return one if true and zero if false
*/
void print_numbers(void)
{
	int num = 0;

	do {
		_putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');
}
