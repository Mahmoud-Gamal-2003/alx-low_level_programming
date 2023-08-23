#include "main.h"
/**
 * _isdigit - cheack if the char upper case or lower
 *
 * @c: the ASCII value of the char
 *
 * Return: return one if true and zero if false
*/
int _isdigit(int c)
{
	if (c <= 48 && c >= 57)
		return (1);
	else
		return (0);
}
