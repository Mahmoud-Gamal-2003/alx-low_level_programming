#include "main.h"

/**
 * *_strcpy - check the code for
 *
 * @dest: hello
 *
 * @src: helo
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (sr[i] != '\0');

	return (dest);
}
