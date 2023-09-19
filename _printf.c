#include "main.h"
/**
 *_printf - function to print stout
 *@format: string input to function
 *@...: args
 *Return: prnt num of printed character
 */
int _printf(const char *format, ...)
{
	int prntd_ch = 0, prntd_str = 0, prntd_n = 0, orntd_n_str = 0, n = 0;
	va_list args;

	va_start(args, format);
	while (format && format[n] != '\0')
	{
		if (!format || (format[0] == '%' && !format[1]))
			return (-1);
		if (format[n] == '%')
		{
			n++;
			if (format[n] == 'c')
				prntd_ch += print_char(args);
			else if (format[n] == 's')
				prntd_str += print_string(args);
			else if (format[n] == '%')
			{
				our_putchar('%');
				prntd_ch++;
			}
			else if (format[n + 1] == 'd' || format[n + 1] == 'i')
			{
				prntd_n = our_putchar(va_arg(args, int));
				prntd_n_str = our_puts(va_arg(args, char *));
				prntd_ch += (prntd_n + (prntd_n_str - 1));
			}
			else
			{
				our_putchar(format[n]);
				prntd_ch += 26;
			}
		}
		else
		{
			our_putchar(format[n]), prntd_ch++;
		}
		n++;
	}
	va_end(args);
	return (prntd_ch);
}
