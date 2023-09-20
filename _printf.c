#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - function to print stout
 * @format: string input to function
 * @...: args
 * Return: prnt num of printed character
*/
int _printf(const char *format, ...)
{
	int  x, char_count = 0;
	va_list args;

	if (!format)
		return (-1);

	va_start(args, format);
	while (*format)
	{
		while (format[x] != '%' && format[x] != '\0')
		{
			_putchar(format[x]);
			char_count++, x++;
		}
		if (format[x] == '\0')
			return (char_count);

		if (*format == '%')
		{
			format++;
			char_count = handle_specifiers(args);
			x += 2;
			format++;
		}
		else
		{
			_putchar(format[x]);
			char_count++;
			format++;
		}
		if (format[x + 1] == '\0')
			return (-1);

		if (format[x + 1] == '%')
			x += 2;

		else
			x++;
	}
	va_end(args);
	return (char_count);
}
