#include "main.h"
/**
 * _islower - The entry point
 * @c: The charcater will checked
 *
 * Return: lowercase 1 (Success), otherwise 0 (failed)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
