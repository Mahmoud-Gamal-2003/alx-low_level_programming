#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: nested loop in nested loop
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, j, k;
for (i = 48; i < 58; i++)
{
for (j = i + 1; j < 58; j++)
{
for (k = j + 1; k < 58; k++)
{
putchar(i);
putchar(j);
putchar(k);
if (i + j + k != 168)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
