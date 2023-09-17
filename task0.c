#include "main.h"

/**
 * print_char - Prints a char
 * @prnt_buffes: Listof arguments
 * @buffer: Buffearray handle print
 * @flags:  Calc-active flags
 * @width: Width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_char(va_list prnt_buffes, char buffer[],
	int flags, int width, int precision, int size)
{
	char c = va_arg(prnt_buffes, int);

return (handle_write_char(c, buffer, flags, width, precision, size));
}
/**
 * print_string - Prints a string
 * @prnt_buffes: List arg
 * @buffer: Buffe array to handle print
 * @flags:  Calculatesctive flags
 * @width: width.
 * @precision: Precisionspecifiction
 * @size: Size specifier
 * Return: len
 */
int print_string(va_list prnt_buffes, char buffer[],
int flags, int width, int precision, int size)
{
int len = 0, i;
char *str = va_arg(prnt_buffes, char *);
UNUSED(buffer);
UNUSED(flags);
UNUSED(width);
UNUSED(precision);
UNUSED(size);
if (str == NULL)
{
str = "(null)";
if (precision >= 6)
str = "      ";
}
while (str[len] != '\0')
length++;
if (precision >= 0 && precision < len)
length = precision;
if (width > length)
{
if (flags & F_MINUS)
{
write(1, &str[0], length);
for (i = width - len; i > 0; i--)
write(1, " ", 1);
return (width);
}
else
{
for (i = width - len; i > 0; i--)
write(1, " ", 1);
write(1, &str[0], len);
return (width);
}
}
return (write(1, str, len));
}
/**
 * print_percent - Prints a percent sign
 * @prnt_buffes: L000ista of arg
 * @buffer: Bufferarray to handle print
 * @flags:  Calc-active flags
 * @width: get width.
 * @precision: Precision-specification
 * @size: Size-specifier
 * Return: Number
 */
int print_percent(va_list prnt_buffes, char buffer[],
	int flags, int width, int precision, int size)
{
UNUSED(prnt_buffes);
UNUSED(buffer);
UNUSED(flags);
UNUSED(width);
UNUSED(precision);
UNUSED(size);
return (write(1, "%%", 1));
}
