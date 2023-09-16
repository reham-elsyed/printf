#include "main.h"
#include <stdarg.h>


specfyr_t specifiers[] =
{
{"c", _prnt_char},
{"s", _prnt_string},
{"%", _prnt_percent},
};
/**
 * _printf - function to print output
 * @format: format input to the printf function
 * @...: multiple inputd
 * Return: string length
 */

int _printf(const char *format, ...)
{
	unsigned long int i;
	specfyr_t specifier ;
va_list args;
int total_chars = 0;
va_start(args, format);

while (*format)
{
if (*format == '%')
{
format++;
specifier = 0;
for (i = 0; i < sizeof(specifiers) / sizeof(specifiers[0]); i++)
{
if (*format == specifiers[i].specfyr[0])
{
specifier = specifiers[i];
break;
}
}
if (specifier.f)
total_chars += specifier.f(args);
else
total_chars += _putchar('%');
}
else
{
total_chars += _putchar(*format);
}
format++;
}
va_end(args);
return (total_chars);
}
