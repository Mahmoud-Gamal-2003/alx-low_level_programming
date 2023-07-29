#include "main.h"

/**
 * print_to_98 - writes the character c to stdout
 * @n: The character to print
 *
 * Return: on success 1.
 *         on error, -1 is returned, and error is set appropriates.
 */
void print_to_98(int n)
{
int i, j;

for (i = n; i <= 98; i++)
{
if (i < 0)
{
j = -1 * i;
_putchar('-');
if (j > 0 && j < 10)
{
_putchar(j + 48);
}
else
{
_putchar((j / 10) + 48);
_putchar((j % 10) + 48);
}
}
else if (i == 0)
{
_putchar(48);
}
else if (i > 0 && i < 10)
{
_putchar(i + 48);
}
else
{
_putchar((i / 10) + 48);
_putchar((i % 10) + 48);
}
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
