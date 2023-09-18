#include "main.h"

/**
 *_printf - function to print stout
 *@format: string
 *@...: args
 *Return: prnt num
 */
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);
	unsigned int prntd_ch = 0, prntd_str = 0, n;

	for (n = 0; format && format[n] != '\0'; n++)
	{
		if (format[n] != '%')
		{
			our_putchar(format[n]);
		}
		else if (format[n + 1] == 'c')
		{
			our_putchar(va_arg(args, int));
			n++;
		}
		else if (format[n + 1] == 's')
		{
			prntd_str = our_puts(va_arg(args, *char));
			n++, prntd_ch += (prntd_str - 1);
		}
		else if (format[n + 1] == '%')
		{
			our_putchar('%');
			n++;
		}
		else if (format[n + 1] == 'd')
		{
			our_putchar(va_arg(args, int));
			n++
		}
		else if (format[n + 1] == 'i')
		{
			our_putchar(va_arg(args, int));
			n++
		}
		prntd_ch += 1;
	}
	va_end(args);
	return (prntd_ch);
}
