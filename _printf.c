#include "main.h"
/**
 *_printf - function to print stout
 *@format: string input to function
 *@...: args
 *Return: prnt num of printed character
 */
int _printf(const char *format, ...)
{
	int char_count = 0;

va_list args;
va_start(args, format);

if (!format)
return (-1);
while (*format)
{
if (format[0] == '%' && format[1] != '\0')
{
if (format[1] == 's' || format[1] == 'c' ||
format[1] == 'd' || format[1] == 'x' || format[1] == '%')
{
char_count += handle_specifier(format[1], args);
format++;
}
else if (format[1] == 'X' || format[1] == 'o' ||
format[1] == 'i' || format[1] == 'u' || format[1] == 'p')
{
char_count += handle_int_specifiers(format[1], args);
format++;
}
else if (formar[] == 'R')
{
	char_count += _printf_rot13(args);
	format++;
}
else
{
_putchar('%');
_putchar(format[1]);
char_count += 2;
}
}
else if (format[0] == '%' && format[1] == '\0')
{
return (-1);
}
else
{
	_putchar(format[0]);
	char_count++;
}
format++;
}
va_end(args);
return (char_count);
}
