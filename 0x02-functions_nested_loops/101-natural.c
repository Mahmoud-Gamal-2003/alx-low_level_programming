#include "main.h"
/**
 * main - Entry point
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int result = 0;
int i;

for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
result += i;
}
printf("%d\n", result);
return (0);
}
