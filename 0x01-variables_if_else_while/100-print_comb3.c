#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: nested loop
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, j;
for (i = 48; i < 58; i++)
{
for (j = i + 1; j < 58; j++)
{
putchar(i);
putchar(j);
if (i + j != 113)
{
putchar(',');
putchar(' ');
}
}
}
return (0);
}
