void _puts_recursion(char *s)
{
if (*s == '\0')
printf("\n");
else
{
printf("%c", *s);
_puts_recursion(s + 1);
}
}
