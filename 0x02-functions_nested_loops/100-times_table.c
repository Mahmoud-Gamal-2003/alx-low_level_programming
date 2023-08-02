#include "main.h"
/**
 * print_times_table - writes the character c to stdout
 * @n: The character to print
 *
 * Return: on success 1.
 */
void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (i * j < 10)
				{
					if (j != 0)
						printf(",   ");
					printf("%d", j * i);
				}
				else if (i * j >= 10 && i * j < 100)
				{
					if (j != 0)
						printf(",  ");
					printf("%d", j * i);
				}
				else if (i * j >= 100)
				{
					if (j != 0)
						printf(", ");
					printf("%d", j * i);
				}
			}
			printf("\n");
		}
	}
}
