#include "main.h"

/*
 * _strlen - return hello world
 *
 * @s: char
 *
 * Return: integer
 */
int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
