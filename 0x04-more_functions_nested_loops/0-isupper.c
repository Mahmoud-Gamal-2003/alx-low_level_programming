#include "main.h"
/**
 * _isupper - cheack if the char upper case or lower
 *
 * @c: the ASCII value of the char
 *
 * Return: return one if true and zero if false
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
