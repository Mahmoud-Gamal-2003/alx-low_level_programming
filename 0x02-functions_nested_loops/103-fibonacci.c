#include <stdio.h>
/**
 * main - Entry point
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long f1 = 0, f2 = 1, sum;
float total_sum;

while (1)
{
sum = f1 + f2;
if (sum > 4000000)
break;
if ((sum % 2) == 0)
total_sum += sum;
f1 = f2;
f2 = sum;
}
printf("%.0f\n", total_sum);
return (0);
}
