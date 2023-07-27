#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: print the text with out use printf.
 * Return: Always 1 (Filled)
 */
int main(void)
{
write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
