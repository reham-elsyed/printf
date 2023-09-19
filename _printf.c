#include "main.h"
/**
 *_printf - function to print stout
 *@format: string input to function
 *@...: args
 *Return: prnt num of printed character
 */
int _printf(const char *format, ...)
{
	va_list args;
	int prntd_chs = 0, nmbr;
	char c, *str;
	unsigned int num;

	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			our_putchar(*format), prntd_chs++;
		}
		else
		{
			format++;
			if (format[n] == 'c')
			{
				c = va_arg(args, int), our_putchar(c), prntd_chs++;
			}
			else if (format[n] == 's')
			{
				*str = va_arg(args, char *);
				if (str == NULL)
				{
					str = "(null)";
				}
				while (*str)
				{
					our_putchar(*str), str++, prntd_chs++;
				}
			}
			else if (*format == 'd' || *format == 'i')
			{
				nmbr = va_arg(args, int), prntd_chs += print_number(nmbr);
			}
			else if (*format == 'u')
			{
				num = va_arg(args, unsigned int), prntd_chs += print_unsigned(num);
			}
			else
			{
				our_putchar(*format), prntd_chs += 26;
			}
		}
		else
		{
			our_putchar(*format), prntd_chs++;
		}
		format++;
	}
	va_end(args);
	return (prntd_chs);
}
