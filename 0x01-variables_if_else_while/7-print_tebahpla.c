#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lower reversed
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char ch = 'z';
/*print a - z*/
while (ch >= 'a')
{
putchar(ch);
ch--;
}
putchar('\n');
return (0);
}
