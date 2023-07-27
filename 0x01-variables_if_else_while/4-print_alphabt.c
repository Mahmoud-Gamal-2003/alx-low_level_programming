#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lower exept e and q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char ch = '`';
/*print a - z*/
while (ch < 'z')
{
ch++;
if (ch == 'e' || ch == 'q')
{
continue;
}
putchar(ch);
}
putchar('\n');
return (0);
}
