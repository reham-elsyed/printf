#include "main.h"

/**
 *_printf - function to print stout
 *@format: string
 *@...: args
 *Return: prnt num
 */
int _printf(const char *format, ...)
{
	int prntd_ch = 0, prntd_str = 0, prntd_n = 0, n = 0;
	va_list args;

	va_start(args, format);

	while (format && format[n] != '\0')
	{
		if (format[n] == '%')
		{
			format++;
			if (format[n + 1] == 'c')
			{
				our_putchar(va_arg(args, int));
				prntd_ch++;
			}
			else if (format[n + 1] == 's')
			{
				prntd_str = our_puts(va_arg(args, char *));
				prntd_ch += (prntd_str - 1);
			}
			else if (format[n + 1] == '%')
			{
				our_putchar('%');
				prntd_ch++;
			}
			else if (format[n + 1] == 'd' || format[n + 1] == 'i')
			{
				prntd_n = our_putchar(va_arg(args, int));
				prntd_ch += prntd_n;
			}
			else
			{
				our_putchar(format[n]);
				prntd_ch++;
			}
		}
		else
		{
			our_putchar(format[n]);
			prntd_ch++;
		}
		format++, prntd_ch += 1;
	}
	va_end(args);
	return (prntd_ch);
}
