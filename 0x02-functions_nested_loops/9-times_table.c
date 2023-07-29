#include "main.h"

/**
 * times_table - writes the character c to stdout
 * Discreption: The character to print
 *
 * Return: on success 1.
 *         on error, -1 is returned, and error is set appropriates.
 */
void times_table(void)
{
int i, j, k;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
k = i * j;
if (j != 0 && k < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else if (k >= 10)
{
_putchar(',');
_putchar(' ');
}
if (((k / 10) + 48) != 48)
_putchar((k / 10) + 48);
_putchar((k % 10) + 48);
}
_putchar('\n');
}
}
