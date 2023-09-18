#include "main.h"
#include <unistd.h>
/**
 * print_int - print integers
 * @prnt_buffers: 'list of arguments'
 * @buffer: Buffer of an array handle print
 * @flags: count the existed flags
 * @width: Width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of integers printed
*/
int print_int(va_list prnt_buffers, char buffer[], int flags,
		int width, int precision, int size)
{
	int ntgr = va_arg(prnt_buffers, int);

	return (handle_write_int(ntgr, buffer, flags, width, precision, size));
}

/**
 * _printf - print integer
 * @format: function to pointer
 * Return: return type of number d or i
*/
int _printf(const char *format, ...)
{
	va_list ntgr;

	int printed_chars = 0;

	va_start(ntgr, format);

	while (format && format[j])
	{
		if (format[j] == '%' && format[j + 1])
		{
			j++;
			if (format[j] == 'i' || format[j] == 'd')
			{
				num = va_arg(ntgr, int);

				char buffer[1024];

				len = snprintf(buffer, sizeof(buffer), num);
				if (len > 0)
				{
					write(1, buffer, len);
					printed_chars += len;
				}
			}
		}
		else
		{
			write(1, &format[i], 1);
			printed_chars++;
		}
		i++;
	}
	va_end(ntgr);
	return (printed_chars);
}
/**
 * print_percent - Prints a percent sign
 * @prnt_buffes: L000ista of arg
 * @buffer: Buffer of an array to handle print
 * @flags:  count flags
 * @width: get width.
 * @precision: Precision-specification
 * @size: Size-specifier
 * Return: return (integer)
 */
int print_int(va_list prnt_buffes, char buffer[],
		int flags, int width, int precision, int size)
{
	UNUSED(prnt_buffes);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
	return (write(1, "%d", 1));
}
/**
 * print_percent - Prints a percent sign
 * @prnt_buffes: L000ista of arg
 * @buffer: Buffer of an array to handle print
 * @flags:  count flags
 * @width: get width.
 * @precision: Precision-specification
 * @size: Size-specifier
 *
 * Return: return (integer)
 */
int print_int(va_list prnt_buffes, char buffer[], int flags,
		int width, int precision, int size)
{
	UNUSED(prnt_buffes), UNUSED(flags), UNUSED(width);
	UNUSED(precision), UNUSED(size);
	return (write(1, "%i", 1));
}
