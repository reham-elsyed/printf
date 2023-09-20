#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * search_flags - check the format for _printf
 * @format: format ('c', 's', 'i', 'd'...etc)
 * Return: failed return (NULL), on success return (format)
*/
int (*search_flags(const char *format))(va_list)
{
	unsigned int count = 0;
	specifier_search flags_f[] = {
		{"c", print_char}, {"s", print_string}, {"%", print_percent},
		{"i", print_int_i}, {"d", print_int_d}, {"b", printf_binary},
		{"u", print_uint},
		{NULL, NULL}
	};
	while (flags_f[count].srch)
		if (flags_f[count].srch[0] == (*format))
			return (flags_f[count].f);
		count++;
	return (NULL);
}

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

	int (*f)(va_list);

	if (!format)
		return (-1);

	va_start(args, format);
	while (*format)
	{
		while (format[x] != '%' && format[x] != '\0')
		{
			our_putchar(format[x]);
			char_count++, x++;
		}
		if (format[x] == '\0')
			return (char_count);

		f = search_flags(&format[x + 1]);
		if (f != NULL)
			char_count += f(args);
			x += 2;
			continue;

		if (format[x + 1] == '\0')
			return (-1);

		our_putchar(format[x]);
		char_count++;
		if (format[x + 1] == '%')
			x += 2;

		else
			x++;
	}
	va_end(args);
	return (char_count);
}
