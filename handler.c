#include "main.h"
/**
 * handle_print - Prints arg based on prnt_buffe
 * @fmt: Formatted string print the arguments.
 * @list: List of argument print
 * @nnd: int
 * @buffer: Buffer  print.
 * @flags: Cals active flags
 * @width:  width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: 1 or 2;
*/

int handle_print(const char *fmt, int *nnd, va_list list, char buffer[],
        int flags, int width, int precision, int size)
{
        int i, length = 0, printed_chars = -1;
        fmt_t puff_print[] = {
                {'c', print_char}, {'s', print_string}, {'%', print_percent},
                {'i', print_int}, {'d', print_int}, {'b', print_binary},
                {'u', print_unsigned}, {'o', print_octal}, {'x', print_hexadecimal},
                {'X', print_hexa_upper}, {'p', print_pointer}, {'S', print_non_printable},
                {'r', print_reverse}, {'R', print_rot13string}, {'\0', NULL}
        };
        struct fmt fmt_t;

        for (i = 0; puff_print[i].fmt != '\0'; i++)
                if (fmt[*nnd] == puff_print[i].fmt)
                        return (puff_print[i].fn(list, buffer, flags, width, precision, size));

        if (puff_print[i].fmt == '\0')
        {
                if (fmt[*nnd] == '\0')
                        return (-1);
                length += write(1, "%%", 1);
                if (fmt[*nnd - 1] == ' ')
                        length += write(1, " ", 1);
                else if (width)
                {
                        --(*nnd);
                        while (fmt[*nnd] != ' ' && fmt[*nnd] != '%')
                                --(*nnd);
                        if (fmt[*nnd] == ' ')
                                --(*nnd);
                        return (1);
                }
                length += write(1, &fmt[*nnd], 1);
                return (length);
	}
	 return (printed_chars);
}
