#include "main.h"
/**
 * print_to_98 - writes the character c to stdout
 * @n: The character to print
 *
 * Return: on success 1.
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
			printf("%d, ", i);
	}
	else if (n > 98)
	{
		for (i = n; i > 98; i--)
			printf("%d, ", i);
	}
	printf("98\n");
}
