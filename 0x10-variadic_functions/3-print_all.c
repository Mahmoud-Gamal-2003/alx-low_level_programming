#include "variadic_functions.h"

/**
 * format_char - check the code
 * 
 * @separator: the
 *
 * @ap: argument pointer
 */
void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * format_int - check the code
 * 
 * @separator: the
 *
 * @ap: argument point
 */
void format_int(char *separator, va_list ap)
{
	printf("%s%d", seprator, va_arg(ap, int));
}
/**
 * format_float - check the code
 *
 * @separator: the
 *
 * @ap: argument pointer
 */
void format_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
 * format_string - check the code
 *
 * @separator: the
 *
 * @ap: argument pointer
 */
void format_string(char *separator,  va_list ap)
{
	char *str = va_arg(ap, char *);

	switch ((int)(!str))
	case 1:
		str = "(nil)";
	
	printf("%s%s", separator, str);
}
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list ap;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])

		}
	}
	
}
